/*
 * XREFs of UnlockVerifierSection @ 0x140096964
 * Callers:
 *     FxDestroy @ 0x140081CD8 (FxDestroy.c)
 *     FxLibraryCommonUnregisterClient @ 0x14008E7E0 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1400808C0 (WPP_IFR_SF_dq.c)
 */

void __fastcall UnlockVerifierSection(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int _a1; // ebx

  if ( FxLibraryGlobals.VerifierSectionHandle )
  {
    _a1 = _InterlockedDecrement(&FxLibraryGlobals.VerifierSectionHandleRefCount);
    MmUnlockPagableImageSection(FxLibraryGlobals.VerifierSectionHandle);
    WPP_IFR_SF_dq(FxDriverGlobals, 4u, 0x11u, 0xCu, WPP_globals_cpp_Traceguids, _a1, FxDriverGlobals);
  }
}
