/*
 * XREFs of MiReleaseReadListResources @ 0x1409399B0
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  void **v3; // rdi
  void ***v4; // rbx
  void **v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (void **)(a1 + 24);
    while ( 1 )
    {
      v4 = (void ***)*v3;
      if ( *v3 == v3 )
        break;
      if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v5;
      v6 = 0LL;
      for ( v5[1] = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn((__int64 *)v4[v6 + 3], *((unsigned int *)v4[v6 + 3] + 11), 4);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
