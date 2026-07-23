/*
 * XREFs of FsRtlCheckNoSharedConflict @ 0x140375DBC
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x140375C80 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1404F8300 (FsRtlFindFirstOverlapInNode.c)
 */

bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, _RTL_SPLAY_LINKS **a2, _RTL_SPLAY_LINKS **a3)
{
  _RTL_SPLAY_LINKS *v3; // r9
  _RTL_SPLAY_LINKS *v4; // r11
  _RTL_SPLAY_LINKS *v5; // rdi
  _RTL_SPLAY_LINKS *v6; // rbx
  bool v9; // zf
  _RTL_SPLAY_LINKS *v10; // r10
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  __int64 v13; // rbx

  v3 = *(_RTL_SPLAY_LINKS **)(a1 + 8);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v9 = v3 == 0LL;
  if ( v3 )
  {
    v10 = *a2;
    while ( 1 )
    {
      v4 = v3 - 1;
      Parent = v3[-1].Parent;
      if ( v3[-1].RightChild >= v10 && ((LeftChild = Parent->LeftChild) != 0LL || Parent->RightChild) )
      {
        if ( LeftChild <= *a3 && (*a3 != (_RTL_SPLAY_LINKS *)-1LL || v10) )
        {
          if ( LeftChild <= v10 )
            goto LABEL_8;
          v6 = v3 - 1;
        }
        v5 = v3;
        v3 = v3->LeftChild;
      }
      else
      {
        if ( Parent[2].Parent == *a3 && Parent->LeftChild == v10 )
        {
LABEL_8:
          v9 = v3 == 0LL;
          break;
        }
        v5 = v3;
        v3 = v3->RightChild;
      }
      if ( !v3 )
        goto LABEL_8;
    }
  }
  if ( !v9 )
    v6 = v4;
  v13 = (unsigned __int64)&v6[1] & -(__int64)(v6 != 0LL);
  if ( v5 )
    *(_QWORD *)(a1 + 8) = RtlSplay(v5);
  if ( !v13 )
    return 1;
  if ( *(_BYTE *)(v13 - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(v13 - 24, a2, a3) == 0;
  return 0;
}
