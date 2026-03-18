/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x140A43B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x140248410 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x14024AE90 (RtlDeleteNoSplay.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403DF554 (FsRtlEmptyFreePoolList.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  RTL_SPLAY_LINKS *v2; // rbx
  char v5; // bp
  PRTL_SPLAY_LINKS v6; // rax
  PRTL_SPLAY_LINKS v7; // r15
  RTL_SPLAY_LINKS *v8; // rbx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _QWORD *v11; // rax
  _QWORD *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v5 = 1;
  if ( TunnelMaxEntries )
  {
    v12[1] = v12;
    v12[0] = v12;
    ExAcquireFastMutex(&Cache->Mutex);
    v6 = Cache->Cache;
    while ( v6 )
    {
      if ( v6[2].Parent < (_RTL_SPLAY_LINKS *)DirectoryKey )
      {
        if ( v2 )
          goto LABEL_13;
        v6 = v6->RightChild;
      }
      else
      {
        if ( v6[2].Parent <= (_RTL_SPLAY_LINKS *)DirectoryKey )
          v2 = v6;
        v6 = v6->LeftChild;
      }
    }
    while ( v2 )
    {
LABEL_13:
      v7 = RtlRealSuccessor(v2);
      if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
        break;
      if ( v5 )
      {
        Cache->Cache = RtlDelete(v2);
        v5 = 0;
      }
      else
      {
        RtlDeleteNoSplay(v2, &Cache->Cache);
      }
      v8 = v2 + 1;
      Parent = v8->Parent;
      if ( v8->Parent->LeftChild != v8
        || (LeftChild = v8->LeftChild, LeftChild->Parent != v8)
        || (LeftChild->Parent = Parent,
            Parent->LeftChild = LeftChild,
            --Cache->NumEntries,
            v11 = v12[0],
            *((_QWORD ***)v12[0] + 1) != v12) )
      {
        __fastfail(3u);
      }
      v8->Parent = (_RTL_SPLAY_LINKS *)v12[0];
      v8->LeftChild = (_RTL_SPLAY_LINKS *)v12;
      v11[1] = v8;
      v12[0] = &v8->Parent;
      v2 = v7;
    }
    KeReleaseGuardedMutex(&Cache->Mutex);
    FsRtlEmptyFreePoolList(v12);
  }
}
