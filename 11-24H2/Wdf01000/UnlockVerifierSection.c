/*
 * XREFs of UnlockVerifierSection @ 0x1400969AC
 * Callers:
 *     FxDestroy @ 0x140081CC8 (FxDestroy.c)
 *     FxLibraryCommonUnregisterClient @ 0x14008E840 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x140080380 (WPP_IFR_SF_dq.c)
 */

void __fastcall UnlockVerifierSection(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int _a1; // ebx

  if ( ImageSectionHandle )
  {
    _a1 = _InterlockedDecrement(dword_1400C80A0);
    MmUnlockPagableImageSection(ImageSectionHandle);
    WPP_IFR_SF_dq(FxDriverGlobals, 4u, 0x11u, 0xCu, WPP_globals_cpp_Traceguids, _a1, FxDriverGlobals);
  }
}
