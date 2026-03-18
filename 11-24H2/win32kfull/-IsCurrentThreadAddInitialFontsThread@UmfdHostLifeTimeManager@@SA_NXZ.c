/*
 * XREFs of ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x140113BD8
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24208LL) == (_QWORD)KeGetCurrentThread();
}
