/*
 * XREFs of MiFreeReadListPages @ 0x140939A40
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x1409399B0 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rdi
  __int64 *i; // r8
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 *j; // r8

  v2 = 0LL;
  v3 = MiPageChainCount(a1 + 40);
  for ( i = MiUnlinkPageChainHead(a1 + 40); i; i = MiUnlinkPageChainHead(a1 + 40) )
  {
    if ( !v2 )
      v2 = *((_QWORD *)qword_140E300C8 + (((unsigned __int64)i[5] >> 43) & 0x3FF));
    MiReleaseFreshPage((__int64)i);
  }
  v5 = a1 + 64;
  v6 = 5LL;
  do
  {
    v7 = MiPageChainCount(v5);
    for ( j = MiUnlinkPageChainHead(v8); j; j = MiUnlinkPageChainHead(v5) )
    {
      if ( !v2 )
        v2 = *((_QWORD *)qword_140E300C8 + (((unsigned __int64)j[5] >> 43) & 0x3FF));
      MiReleaseFreshPage((__int64)j);
    }
    v3 += v7;
    v5 += 24LL;
    --v6;
  }
  while ( v6 );
  if ( v3 )
    MiReturnFaultCharges(v2, v3);
}
