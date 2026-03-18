/*
 * XREFs of ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxLoadUserApiHook @ 0x1401D111C (xxxLoadUserApiHook.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     _RegisterUserApiHook @ 0x140284A8C (_RegisterUserApiHook.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsInsideUserApiHook(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2) + 64256) >= 0;
}
