/*
 * XREFs of FsRtlCheckNoExclusiveConflict @ 0x140375B44
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x140375C80 (FsRtlFastCheckLockForWrite.c)
 *     FsRtlFastCheckLockForRead @ 0x140376630 (FsRtlFastCheckLockForRead.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 */

char __fastcall FsRtlCheckNoExclusiveConflict(
        __int64 a1,
        _RTL_SPLAY_LINKS **a2,
        _RTL_SPLAY_LINKS **a3,
        int a4,
        _RTL_SPLAY_LINKS *a5,
        _RTL_SPLAY_LINKS *a6)
{
  _RTL_SPLAY_LINKS *v6; // rax
  PRTL_SPLAY_LINKS v8; // rcx
  _RTL_SPLAY_LINKS *v9; // r11
  _RTL_SPLAY_LINKS *v10; // rbx
  char v14; // bp
  bool v15; // zf
  _RTL_SPLAY_LINKS *v16; // r9
  _RTL_SPLAY_LINKS *RightChild; // r10
  _RTL_SPLAY_LINKS *Parent; // r8

  v6 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v14 = 1;
  v15 = v6 == 0LL;
  if ( v6 )
  {
    v16 = *a2;
    while ( 1 )
    {
      RightChild = v6[2].RightChild;
      v9 = v6;
      if ( RightChild >= v16 )
      {
        Parent = v6[1].Parent;
        if ( Parent || v6[1].LeftChild )
          break;
      }
      if ( RightChild == *a3 && v6[1].Parent == v16 )
        goto LABEL_22;
      v10 = v6;
      v6 = v6->RightChild;
LABEL_17:
      if ( !v6 )
      {
LABEL_8:
        v15 = v6 == 0LL;
        goto LABEL_9;
      }
    }
    if ( Parent <= *a3 && (*a3 != (_RTL_SPLAY_LINKS *)-1LL || v16) )
    {
      if ( Parent <= v16 )
        goto LABEL_8;
LABEL_22:
      v8 = v6;
    }
    v10 = v6;
    v6 = v6->LeftChild;
    goto LABEL_17;
  }
LABEL_9:
  if ( !v15 )
    v8 = v9;
  while ( v8 && *a3 >= v8[1].Parent )
  {
    if ( *a2 <= v8[2].RightChild && (v8[2].Parent != a5 || v8[2].LeftChild != a6 || HIDWORD(v8[1].RightChild) != a4) )
    {
      v14 = 0;
      break;
    }
    v8 = RtlRealSuccessor(v8);
  }
  if ( v10 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v10);
  return v14;
}
