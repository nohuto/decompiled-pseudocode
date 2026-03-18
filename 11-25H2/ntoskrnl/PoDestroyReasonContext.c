/*
 * XREFs of PoDestroyReasonContext @ 0x1404E90C0
 * Callers:
 *     ExpDeleteTimer @ 0x1402EAEC0 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1402EB010 (NtCancelTimer.c)
 *     NtSetTimer @ 0x1402EB3F0 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402EB680 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     PoRegisterSystemState @ 0x1404257E0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1404258AC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140425A60 (PoCreatePowerRequest.c)
 *     PoCreatePowerLimitRequest @ 0x14073EA40 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x14073ED10 (PoSetPowerLimitValue.c)
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 *     PoCreateThermalRequest @ 0x14073FCD0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14073FDE0 (PoDeleteThermalRequest.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     NtSetThreadExecutionState @ 0x140962C60 (NtSetThreadExecutionState.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C1C1FC (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C5611C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  void *v5; // rcx

  v4 = P;
  if ( !*(_DWORD *)P )
  {
    P = (_QWORD *)P[1];
    if ( P )
      ObfDereferenceObjectWithTag(P, 0x67446F50u);
  }
  if ( (unsigned int)Feature_2395269435__private_IsEnabledDeviceUsageNoInline(P, a2, a3, a4) )
  {
    if ( *(_DWORD *)v4 )
    {
      v5 = (void *)v4[3];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x78435250u);
    }
  }
  ExFreePoolWithTag(v4, 0x78435250u);
}
