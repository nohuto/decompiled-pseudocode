/*
 * XREFs of PoDestroyReasonContext @ 0x140331BA4
 * Callers:
 *     PoRegisterSystemState @ 0x1403310B0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140331200 (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140331C00 (PoCreatePowerRequest.c)
 *     ExpDeleteTimer @ 0x140331F50 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1403320A0 (NtCancelTimer.c)
 *     NtSetTimer @ 0x140332480 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x140332710 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     PoCreatePowerLimitRequest @ 0x14074AB10 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x14074ADE0 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 *     PoCreateThermalRequest @ 0x14074BDA0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14074BEB0 (PoDeleteThermalRequest.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2D2F8 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C6809C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
