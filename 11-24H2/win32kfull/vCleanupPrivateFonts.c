/*
 * XREFs of vCleanupPrivateFonts @ 0x140199500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x140199568 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall vCleanupPrivateFonts(int a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  if ( *(_QWORD *)(v2 + 20344) )
  {
    SEMOBJ<17>::SEMOBJ<17>(&v4, v2 + 4872);
    v3[0] = *(_QWORD *)(v2 + 20408);
    if ( v3[0] )
      PUBLIC_PFTOBJ::bCleanupPFT(v3, 0LL, 0LL);
    SEMOBJ<17>::vUnlock(&v4);
  }
}
