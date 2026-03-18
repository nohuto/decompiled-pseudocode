/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140199488
 * Callers:
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199298 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x140199568 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall RegistryNotificaionEnumerationEnd(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( *(_QWORD *)(v3 + 20344) )
  {
    SEMOBJ<17>::SEMOBJ<17>(&v5, v3 + 4872);
    v4[0] = *(_QWORD *)(v3 + 20416);
    if ( v4[0] )
      PUBLIC_PFTOBJ::bCleanupPFT(v4, 1LL, a1);
    SEMOBJ<17>::vUnlock(&v5);
  }
}
