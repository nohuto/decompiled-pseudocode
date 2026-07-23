/*
 * XREFs of PoCaptureReasonContext @ 0x1402BC6B8
 * Callers:
 *     PoRegisterSystemState @ 0x1402B9710 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B9970 (PopPowerRequestCreateUserModeRequest.c)
 *     PoCreatePowerRequest @ 0x1402BC580 (PoCreatePowerRequest.c)
 *     NtSetTimer @ 0x1402BD310 (NtSetTimer.c)
 *     NtSetTimerEx @ 0x1402BD5A0 (NtSetTimerEx.c)
 *     PoCreatePowerLimitRequest @ 0x140748E40 (PoCreatePowerLimitRequest.c)
 *     PoSetPowerLimitValue @ 0x140749110 (PoSetPowerLimitValue.c)
 *     PoCreateThermalRequest @ 0x14074A0D0 (PoCreateThermalRequest.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2F418 (PopInitializeHighPerfPowerRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140C6A210 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopCaptureReasonContext @ 0x14041069C (PopCaptureReasonContext.c)
 *     PoGetRequester @ 0x1404E12D0 (PoGetRequester.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoCaptureReasonContext(__int128 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  char v7; // di
  __int64 result; // rax
  __int64 v9; // rcx
  int Requester; // edi
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      v11 = *a1;
      v12 = a1[1];
      v13 = *((_QWORD *)a1 + 4);
      a1 = &v11;
    }
    LOBYTE(a2) = v7;
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    result = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( (int)result >= 0 )
  {
    LOBYTE(v9) = v7;
    Requester = PoGetRequester(v9, a3, *a6);
    if ( Requester < 0 )
    {
      if ( *a6 )
      {
        ExFreePoolWithTag(*a6, 0x78435250u);
        *a6 = 0LL;
      }
    }
    return (unsigned int)Requester;
  }
  return result;
}
