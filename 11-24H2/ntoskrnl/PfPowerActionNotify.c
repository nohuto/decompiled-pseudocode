/*
 * XREFs of PfPowerActionNotify @ 0x140B6CE28
 * Callers:
 *     PfIoPowerEventNotify @ 0x140743DD4 (PfIoPowerEventNotify.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA72C8 (PopDispatchSuperfetchNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C9DA0 (PfpServiceMainThreadUnboost.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5D1E0 (PfpScenCtxPrefetchWait.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6F6D0 (PfpStartLoggingHardFaultEvents.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  int v7; // ebx
  unsigned int v8; // r8d
  int v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-30h]
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  v9 = 0;
  v14 = 0;
  v12 = 0LL;
  v10 = (unsigned int)(2 * a1);
  v13 = 0LL;
  v11 = 0LL;
  if ( (a2 & 1) != 0 )
    LODWORD(v10) = (2 * a1) | 1;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 5 && (unsigned int)(a3 - 2) <= 2 )
        {
          v14 = 0;
          *(_QWORD *)&v13 = 0x200000001LL;
          DWORD2(v13) = 1;
          HIDWORD(v13) = dword_140E67004;
          PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfpLogScenarioEventCallback, 0, (__int64)&v13);
        }
LABEL_7:
        HIDWORD(v10) = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_8:
        LODWORD(v11) = 28;
        *((_QWORD *)&v11 + 1) = 8LL;
        DWORD1(v11) = dword_140E66FCC
                    + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                      + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
        v12 = &v10;
        return PfpPartitionIterate(PfpPartitionLogEventCallback, 0, (__int64)&v11);
      }
      PfpPartitionIterate(PfpPowerActionStartScenarioTracingCallback, 4, (__int64)&qword_140E66FD0);
      if ( dword_140E67000 == 5 )
        PfSnBeginBootPhase(4u);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        PfpPartitionIterate(
          (__int64 (__fastcall *)(_QWORD, _QWORD))PfpPowerActionSleepSystemPhaseCallback,
          4,
          (__int64)&v9);
        if ( v9 )
        {
          v7 = 5;
          if ( a3 == 5 )
          {
            v8 = HIDWORD(qword_140E66E04);
            if ( dword_140E67000 == 5 )
              v8 = dword_140E66E0C;
            else
              v7 = 2;
          }
          else
          {
            v8 = qword_140E66E04;
            v7 = 1;
          }
          HIDWORD(v10) = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140E66FD0, v7, v8);
        }
        PfpServiceMainThreadUnboost(0LL);
        goto LABEL_8;
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140E66FD0);
  }
  return result;
}
