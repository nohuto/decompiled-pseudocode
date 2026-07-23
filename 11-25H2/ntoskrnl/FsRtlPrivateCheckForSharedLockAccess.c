/*
 * XREFs of FsRtlPrivateCheckForSharedLockAccess @ 0x140375A34
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 */

char __fastcall FsRtlPrivateCheckForSharedLockAccess(__int64 a1, __int64 a2)
{
  _RTL_SPLAY_LINKS *v2; // rax
  char v5; // si
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS *v8; // rdi
  PRTL_SPLAY_LINKS v9; // rcx
  _RTL_SPLAY_LINKS *RightChild; // r10
  _RTL_SPLAY_LINKS *v11; // r11
  _RTL_SPLAY_LINKS *Parent; // r9
  unsigned __int64 v13; // rdx

  v2 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  v5 = 1;
  if ( !v2 )
    return v5;
  v7 = *(_RTL_SPLAY_LINKS **)a2;
  v8 = 0LL;
  v9 = 0LL;
  do
  {
    RightChild = v2[2].RightChild;
    v11 = v2;
    if ( RightChild >= v7 && ((Parent = v2[1].Parent) != 0LL || v2[1].LeftChild) )
    {
      v13 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int64)Parent > v13 || v13 == -1LL && !v7 )
        goto LABEL_22;
      if ( Parent <= v7 )
        break;
    }
    else if ( RightChild != *(_RTL_SPLAY_LINKS **)(a2 + 40) || v2[1].Parent != v7 )
    {
      v8 = v2;
      v2 = v2->RightChild;
      continue;
    }
    v9 = v2;
LABEL_22:
    v8 = v2;
    v2 = v2->LeftChild;
  }
  while ( v2 );
  if ( v2 )
    v9 = v11;
  while ( v9 && v9[1].Parent <= (_RTL_SPLAY_LINKS *)*(_QWORD *)(a2 + 40) )
  {
    if ( (v9[2].Parent != *(_RTL_SPLAY_LINKS **)(a2 + 24)
       || v9[2].LeftChild != *(_RTL_SPLAY_LINKS **)(a2 + 32)
       || HIDWORD(v9[1].RightChild) != *(_DWORD *)(a2 + 20))
      && (*(_QWORD *)(a2 + 8) || v9[1].LeftChild) )
    {
      v5 = 0;
      break;
    }
    v9 = RtlRealSuccessor(v9);
  }
  if ( v8 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v8);
  return v5;
}
