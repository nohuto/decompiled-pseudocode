/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8
 * Callers:
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002D824 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00AABCC (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FF260 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL);
}
