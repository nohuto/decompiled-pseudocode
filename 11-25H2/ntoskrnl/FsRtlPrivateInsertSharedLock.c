/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x140374828
 * Callers:
 *     FsRtlPrivateLock @ 0x140373FB0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1403745F0 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     RtlDeleteNoSplay @ 0x1403756F0 (RtlDeleteNoSplay.c)
 *     FsRtlSplitLocks @ 0x14045B650 (FsRtlSplitLocks.c)
 */

char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *v5; // r9
  _RTL_SPLAY_LINKS *v6; // rbx
  char v7; // si
  _RTL_SPLAY_LINKS *v8; // r11
  bool v9; // zf
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *Parent; // r10
  unsigned __int64 v12; // rax
  _RTL_SPLAY_LINKS *v13; // rcx
  _RTL_SPLAY_LINKS *v14; // rbp
  _RTL_SPLAY_LINKS *v15; // rax
  PRTL_SPLAY_LINKS v16; // rcx
  _RTL_SPLAY_LINKS *v17; // rbx
  _RTL_SPLAY_LINKS *v18; // rax
  _RTL_SPLAY_LINKS *v19; // rcx
  _RTL_SPLAY_LINKS *v20; // r8
  _RTL_SPLAY_LINKS *v21; // rax
  PRTL_SPLAY_LINKS v22; // rdi
  PRTL_SPLAY_LINKS v23; // rax
  _RTL_SPLAY_LINKS *v24; // rsi

  v3 = *(_RTL_SPLAY_LINKS **)(a1 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = v3 == 0LL;
  if ( v3 )
  {
    LeftChild = a2->LeftChild;
    while ( 1 )
    {
      v5 = v3 - 1;
      Parent = v3[-1].Parent;
      if ( v3[-1].RightChild >= LeftChild && ((v12 = (unsigned __int64)Parent->LeftChild) != 0 || Parent->RightChild) )
      {
        v13 = a2[2].Parent;
        if ( v12 <= (unsigned __int64)v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || LeftChild) )
        {
          if ( v12 <= (unsigned __int64)LeftChild )
            goto LABEL_8;
          v8 = v3 - 1;
        }
        v6 = v3;
        v7 = 1;
        v3 = v3->LeftChild;
      }
      else
      {
        if ( Parent[2].Parent == a2[2].Parent && Parent->LeftChild == LeftChild )
        {
LABEL_8:
          v9 = v3 == 0LL;
          break;
        }
        v6 = v3;
        v7 = 0;
        v3 = v3->RightChild;
      }
      if ( !v3 )
        goto LABEL_8;
    }
  }
  if ( !v9 )
    v8 = v5;
  v14 = (_RTL_SPLAY_LINKS *)((unsigned __int64)&v8[1] & -(__int64)(v8 != 0LL));
  if ( v14 )
  {
    v17 = v14 - 1;
    v18 = v14[-1].Parent;
    v19 = v14 - 1;
    if ( v18 )
    {
      v20 = a2->LeftChild;
      do
      {
        if ( v20 < v18->LeftChild || v20 == v18->LeftChild && (!a2->RightChild || v18->RightChild) )
          break;
        v19 = v18;
        v18 = v18->Parent;
      }
      while ( v18 );
    }
    if ( !v19->Parent )
      v17[2].Parent = a2;
    a2->Parent = v19->Parent;
    v19->Parent = a2;
    *(_QWORD *)(a1 + 8) = RtlSplay(v14);
    v21 = a2[2].Parent;
    if ( v21 > v17->RightChild )
    {
      v17->RightChild = v21;
      while ( 1 )
      {
        v23 = RtlRealSuccessor(v14);
        v24 = v23;
        if ( !v23 )
          break;
        v22 = v23 - 1;
        if ( v23[-1].Parent->LeftChild > v17->RightChild )
          break;
        if ( !LOBYTE(v17->LeftChild) && LOBYTE(v22->LeftChild) )
          FsRtlSplitLocks(&v23[-1], 0LL, 0LL, 0LL);
        v17[2].Parent->Parent = v22->Parent;
        v17[2].Parent = v22[2].Parent;
        if ( v22->RightChild > v17->RightChild )
        {
          if ( LOBYTE(v22->LeftChild) )
            LOBYTE(v17->LeftChild) = 1;
          v17->RightChild = v22->RightChild;
        }
        RtlDeleteNoSplay(v24, (PRTL_SPLAY_LINKS *)(a1 + 8));
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v24[-1]);
      }
    }
    if ( LOBYTE(v17->LeftChild) )
      FsRtlSplitLocks(&v14[-1], 0LL, 0LL, 0LL);
  }
  else
  {
    v15 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
    if ( !v15 )
      return (char)v15;
    v16 = v15 + 1;
    v15[1].Parent = v15 + 1;
    v15[1].LeftChild = 0LL;
    v15[1].RightChild = 0LL;
    LOBYTE(v15->LeftChild) = 0;
    v15[2].Parent = a2;
    v15->Parent = a2;
    v15->RightChild = a2[2].Parent;
    a2->Parent = 0LL;
    if ( v6 )
    {
      if ( v7 )
        v6->LeftChild = v16;
      else
        v6->RightChild = v16;
      v16->Parent = v6;
      v16 = RtlSplay(v16);
    }
    *(_QWORD *)(a1 + 8) = v16;
  }
  LOBYTE(v15) = 1;
  return (char)v15;
}
