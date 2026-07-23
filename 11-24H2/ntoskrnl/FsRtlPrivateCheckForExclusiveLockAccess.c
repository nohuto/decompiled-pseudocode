/*
 * XREFs of FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402E3120
 * Callers:
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     RtlSplay @ 0x1402E38E0 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1404F80C0 (FsRtlFindFirstOverlapInNode.c)
 */

char __fastcall FsRtlPrivateCheckForExclusiveLockAccess(__int64 a1, _RTL_SPLAY_LINKS **a2)
{
  _RTL_SPLAY_LINKS *v2; // r8
  _RTL_SPLAY_LINKS *v3; // rbx
  _RTL_SPLAY_LINKS *v6; // rax
  _RTL_SPLAY_LINKS *v8; // r8
  _RTL_SPLAY_LINKS *v9; // rcx
  _RTL_SPLAY_LINKS *RightChild; // r10
  _RTL_SPLAY_LINKS *v11; // r11
  _RTL_SPLAY_LINKS *v12; // r9
  _RTL_SPLAY_LINKS *v13; // rdx
  _RTL_SPLAY_LINKS *v14; // rsi
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *LeftChild; // r10
  _RTL_SPLAY_LINKS *v17; // rax
  _RTL_SPLAY_LINKS *v18; // r11
  _RTL_SPLAY_LINKS *v19; // rax
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // rax
  _RTL_SPLAY_LINKS *v23; // rdx

  v2 = *(_RTL_SPLAY_LINKS **)(a1 + 8);
  v3 = 0LL;
  if ( !v2 )
    goto LABEL_2;
  v23 = *a2;
  v18 = 0LL;
  while ( 1 )
  {
    v14 = v2 - 1;
    Parent = v2[-1].Parent;
    if ( v2[-1].RightChild < v23 )
      break;
    LeftChild = Parent->LeftChild;
    if ( !LeftChild && !Parent->RightChild )
      break;
    v17 = a2[5];
    if ( LeftChild <= v17 && (v17 != (_RTL_SPLAY_LINKS *)-1LL || v23) )
    {
      if ( LeftChild <= v23 )
        goto LABEL_32;
      v18 = v2 - 1;
    }
    v3 = v2;
    v2 = v2->LeftChild;
LABEL_31:
    if ( !v2 )
      goto LABEL_32;
  }
  if ( Parent[2].Parent != a2[5] || Parent->LeftChild != v23 )
  {
    v3 = v2;
    v2 = v2->RightChild;
    goto LABEL_31;
  }
LABEL_32:
  if ( v2 )
    v18 = v14;
  v19 = v18 + 1;
  v20 = -(__int64)v18;
  if ( ((unsigned __int64)v19 & -(__int64)(v20 != 0)) != 0 )
  {
    v21 = ((unsigned __int64)v19 & -(__int64)(v20 != 0)) - 24;
    v22 = *(_BYTE *)(v21 + 8) ? FsRtlFindFirstOverlapInNode(v21, a2, a2 + 5) : *(_QWORD *)v21;
    if ( v22 && (a2[1] || *(_QWORD *)(v22 + 16)) )
      return 0;
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = RtlSplay(v3);
    v3 = 0LL;
  }
LABEL_2:
  v6 = *(_RTL_SPLAY_LINKS **)(a1 + 16);
  if ( !v6 )
    goto LABEL_3;
  v8 = *a2;
  v3 = 0LL;
  v9 = 0LL;
  while ( 2 )
  {
    RightChild = v6[2].RightChild;
    v11 = v6;
    if ( RightChild >= v8 && ((v12 = v6[1].Parent) != 0LL || v6[1].LeftChild) )
    {
      v13 = a2[5];
      if ( v12 <= v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || v8) )
      {
        if ( v12 <= v8 )
          break;
LABEL_25:
        v9 = v6;
      }
      v3 = v6;
      v6 = v6->LeftChild;
    }
    else
    {
      if ( RightChild == a2[5] && v6[1].Parent == v8 )
        goto LABEL_25;
      v3 = v6;
      v6 = v6->RightChild;
    }
    if ( v6 )
      continue;
    break;
  }
  if ( v6 )
    v9 = v11;
  if ( v9 && (a2[1] || v9[1].LeftChild) )
    return 0;
LABEL_3:
  if ( v3 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v3);
  return 1;
}
