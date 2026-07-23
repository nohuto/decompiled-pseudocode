/*
 * XREFs of FsRtlSplitLocks @ 0x14045B650
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 */

void __fastcall FsRtlSplitLocks(__int64 a1, _RTL_SPLAY_LINKS *a2, unsigned __int64 *a3, _RTL_SPLAY_LINKS **a4)
{
  _RTL_SPLAY_LINKS *v5; // rbp
  _RTL_SPLAY_LINKS *v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  _RTL_SPLAY_LINKS *Parent; // r14
  unsigned __int64 v12; // rax
  _RTL_SPLAY_LINKS *v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // r15
  _RTL_SPLAY_LINKS *v16; // r14
  PRTL_SPLAY_LINKS v17; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v5 = (_RTL_SPLAY_LINKS *)a1;
  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    a2 = (_RTL_SPLAY_LINKS *)a1;
    *(_BYTE *)(a1 + 8) = 0;
LABEL_4:
    v9 = *(_QWORD *)(a1 + 16);
    LeftChild = 0LL;
    v19 = v9;
    while ( 1 )
    {
      Parent = a2->Parent;
      if ( !a2->Parent )
      {
        v5->RightChild = v6;
        return;
      }
      if ( v5->Parent == Parent )
      {
        v6 = Parent[2].Parent;
        LeftChild = Parent->LeftChild;
        if ( v9 <= v8 )
          v5->RightChild = v6;
      }
      else
      {
        v12 = (unsigned __int64)Parent->LeftChild;
        if ( v12 > (unsigned __int64)v6 && (Parent->RightChild || (_RTL_SPLAY_LINKS *)v12 != LeftChild) )
        {
          v14 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
          v15 = v14;
          if ( v14 )
          {
            v16 = v14 + 1;
            v14[1].Parent = v14 + 1;
            v14[1].LeftChild = 0LL;
            v14[1].RightChild = 0LL;
            LOBYTE(v14->LeftChild) = 0;
            v17 = v5 + 1;
            if ( v5[1].RightChild )
            {
              v17 = RtlRealSuccessor(v5 + 1);
              v17->LeftChild = v16;
            }
            else
            {
              v5[1].RightChild = v16;
            }
            v16->Parent = v17;
            Parent = v15;
            v15->Parent = a2->Parent;
            a2->Parent = 0LL;
            v15[2].Parent = v5[2].Parent;
            RightChild = v5->RightChild;
            v5[2].Parent = a2;
            v15->RightChild = RightChild;
            v5->RightChild = v6;
            if ( v7 )
              v7 = 0;
            else
              LOBYTE(v5->LeftChild) = 0;
            v9 = v19;
            v5 = v15;
            goto LABEL_10;
          }
          v9 = v19;
          if ( LOBYTE(v5->LeftChild) )
            v7 = 1;
          LOBYTE(v5->LeftChild) = 1;
        }
        if ( v9 > v8 && Parent->LeftChild > (_RTL_SPLAY_LINKS *)v8 )
          return;
        v13 = Parent[2].Parent;
        if ( v6 < v13 )
        {
          v6 = Parent[2].Parent;
          if ( v9 <= v8 )
            v5->RightChild = v13;
        }
      }
LABEL_10:
      a2 = Parent;
    }
  }
  v8 = *a3;
  v6 = *a4;
  if ( *(_QWORD *)a1 && v8 > (unsigned __int64)v6 )
    goto LABEL_4;
}
