/*
 * XREFs of PopCalculateIdleInformation @ 0x140486AEC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1EE1C (PopDripsWatchdogStartWatchdog.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB83D0 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1403B1DAC (PpmConvertTimeTo.c)
 *     PpmQueryPlatformStateResidency @ 0x140486BF4 (PpmQueryPlatformStateResidency.c)
 */

ULONGLONG __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 PlatformStateResidency; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  ULONGLONG result; // rax
  unsigned __int64 *v10; // rsi
  int v11; // edi
  ULONGLONG v12; // rax
  ULONGLONG v14; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    v3 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v14 = 0LL;
  PlatformStateResidency = PpmQueryPlatformStateResidency((unsigned int)dword_140E27B80);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v10 = (unsigned __int64 *)(v3 + 72);
    v11 = dword_140E27B80;
    do
    {
      v1 += PpmConvertTimeTo(*v10, 0xF4240uLL);
      if ( v11 != -1 && v8 == v11 )
      {
        v12 = PpmConvertTimeTo(*v10, 0xF4240uLL);
        v7 = *((_DWORD *)v10 - 6);
        v14 = v12;
      }
      ++v8;
      v10 += 128;
    }
    while ( v8 < v4 );
    v2 = a1;
  }
  result = v14;
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v14;
  *(_QWORD *)(v2 + 16) = PlatformStateResidency;
  *(_DWORD *)(v2 + 24) = v7;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
