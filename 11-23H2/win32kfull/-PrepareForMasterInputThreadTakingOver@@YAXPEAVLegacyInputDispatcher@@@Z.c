/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C009E670
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C01398B4 (Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage.c)
 *     EndPointerDeviceContacts @ 0x1C013B014 (EndPointerDeviceContacts.c)
 *     ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AA31C (--C-$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ.c)
 */

void __fastcall __noreturn PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  EnterCrit(1LL, 0LL);
  SetThreadPriority();
  if ( gptiManipulationThread )
    SetThreadBasePriority(*gptiManipulationThread, 16LL);
  EndPointerDeviceContacts();
}
