/*
 * XREFs of ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AA31C
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C001C414 (MasterInputThreadPrepareForRitTakeover.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C009E670 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGDINPUTPROCESSORgpTouchProcessor<CTouchProcessor *>::operator->(__int64 a1)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1) + 3424);
}
