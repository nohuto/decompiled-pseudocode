/*
 * XREFs of PopCalculateIdleInformation @ 0x1402B5AAC
 * Callers:
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopDripsWatchdogCallbackWorker @ 0x14075EC80 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A1C834 (PopDripsWatchdogStartWatchdog.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB7570 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1402B5BB4 (PpmQueryPlatformStateResidency.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 */

__int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 PlatformStateResidency; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  __int64 result; // rax
  _QWORD *v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v14; // [rsp+70h] [rbp+18h]

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
  PlatformStateResidency = PpmQueryPlatformStateResidency((unsigned int)dword_140E27F00);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(v3 + 72);
    v11 = dword_140E27F00;
    do
    {
      v1 += PpmConvertTimeTo(*v10, 1000000LL);
      if ( v11 != -1 && v8 == v11 )
      {
        v12 = PpmConvertTimeTo(*v10, 1000000LL);
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
