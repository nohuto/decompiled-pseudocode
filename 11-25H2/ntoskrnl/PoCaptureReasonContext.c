/*
 * XREFs of PoCaptureReasonContext @ 0x140425AF8
 * Callers:
 *     NtSetTimer @ 0x1402EB3F0 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402EB680 (NtSetTimerEx.c)
 *     PoRegisterSystemState @ 0x1404257E0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1404258AC (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x140425A60 (PoCreatePowerRequest.c)
 *     PoCreatePowerLimitRequest @ 0x14073EA40 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x14073ED10 (PoSetPowerLimitValue.c)
 *     PoCreateThermalRequest @ 0x14073FCD0 (PoCreateThermalRequest.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     NtSetThreadExecutionState @ 0x140962C60 (NtSetThreadExecutionState.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C1C1FC (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C5611C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x14041FD98 (PopCaptureReasonContext.c)
 *     PoGetRequester @ 0x1404E911C (PoGetRequester.c)
 *     Feature_2395269435__private_IsEnabledDeviceUsageNoInline @ 0x1405C87C4 (Feature_2395269435__private_IsEnabledDeviceUsageNoInline.c)
 *     PoGetRequesterOld @ 0x1405C8818 (PoGetRequesterOld.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(__int64 a1, char a2, __int64 a3, char a4, bool *a5, __int64 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Requester; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  __int128 v18; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-10h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *a6 = 0LL;
  if ( a1 && a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_OWORD *)a1;
      v19 = *(_OWORD *)(a1 + 16);
      v20 = *(_QWORD *)(a1 + 32);
      a1 = (__int64)&v18;
    }
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
    v17 = Requester;
  }
  else
  {
    Requester = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( Requester >= 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_2395269435__private_IsEnabledDeviceUsageNoInline(v9, v8, v11, v12, v17, v18);
    v14 = *a6;
    LOBYTE(v15) = a2;
    if ( IsEnabledDeviceUsageNoInline )
    {
      Requester = PoGetRequester(v15, a3, v14);
      if ( Requester < 0 && *a6 )
      {
        ExFreePoolWithTag((PVOID)*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    else
    {
      PoGetRequesterOld(v15, a3, v14);
    }
  }
  return (unsigned int)Requester;
}
