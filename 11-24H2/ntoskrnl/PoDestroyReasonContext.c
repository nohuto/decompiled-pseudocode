/*
 * XREFs of PoDestroyReasonContext @ 0x1402BC528
 * Callers:
 *     PoRegisterSystemState @ 0x1402B9710 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B9970 (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x1402BC580 (PoCreatePowerRequest.c)
 *     ExpDeleteTimer @ 0x1402BCCD0 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402BCF30 (NtCancelTimer.c)
 *     NtSetTimer @ 0x1402BD310 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402BD5A0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     PoCreatePowerLimitRequest @ 0x140748E40 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x140749110 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PoCreateThermalRequest @ 0x14074A0D0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14074A1E0 (PoDeleteThermalRequest.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2F418 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C6A210 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_DWORD *)P )
    goto LABEL_5;
  v2 = (void *)P[1];
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  if ( *(_DWORD *)P )
  {
LABEL_5:
    v3 = (void *)P[3];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x78435250u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
