/*
 * XREFs of MiFreeReadListPages @ 0x140956090
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 *i; // r8
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *j; // r8

  v2 = 0LL;
  v3 = MiPageChainCount(a1 + 40);
  for ( i = MiUnlinkPageChainHead(a1 + 40); i; i = MiUnlinkPageChainHead(a1 + 40) )
  {
    if ( !v2 )
      v2 = *((_QWORD *)qword_140E2FF88 + (((unsigned __int64)i[5] >> 43) & 0x3FF));
    MiReleaseFreshPage((__int64)i, v4, (__int64)i);
  }
  v6 = a1 + 64;
  v7 = 5LL;
  do
  {
    v8 = MiPageChainCount(v6);
    for ( j = MiUnlinkPageChainHead(v9); j; j = MiUnlinkPageChainHead(v6) )
    {
      if ( !v2 )
        v2 = *((_QWORD *)qword_140E2FF88 + (((unsigned __int64)j[5] >> 43) & 0x3FF));
      MiReleaseFreshPage((__int64)j, v10, (__int64)j);
    }
    v3 += v8;
    v6 += 24LL;
    --v7;
  }
  while ( v7 );
  if ( v3 )
    MiReturnFaultCharges(v2, v3);
}
