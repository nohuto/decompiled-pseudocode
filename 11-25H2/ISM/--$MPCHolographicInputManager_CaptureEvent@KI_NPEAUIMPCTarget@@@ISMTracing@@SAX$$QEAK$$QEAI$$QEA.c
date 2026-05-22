/*
 * XREFs of ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800BB5D8
 * Callers:
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011A64 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800BCB48 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent<unsigned long,unsigned int,bool,IMPCTarget *>(
        unsigned int *a1,
        unsigned int *a2,
        bool *a3,
        struct IMPCTarget **a4)
{
  ISMTracing *v8; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_CaptureEvent_(v8, *a1, *a2, *a3, *a4);
  }
}
