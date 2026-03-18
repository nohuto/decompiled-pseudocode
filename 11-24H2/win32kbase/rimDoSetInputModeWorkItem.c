/*
 * XREFs of rimDoSetInputModeWorkItem @ 0x1401E3D74
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E3CB8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 */

void __fastcall rimDoSetInputModeWorkItem(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  RIMLockExclusive(v1 + 760);
  RIMSetInputManagerInputMode(v1, *(_DWORD *)(a1 + 96));
  RIMUnlockExclusive(v1 + 760);
}
