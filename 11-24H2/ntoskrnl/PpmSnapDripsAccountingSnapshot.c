/*
 * XREFs of PpmSnapDripsAccountingSnapshot @ 0x14032D84C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x14032D92C (PpmConvertTimeTo.c)
 *     PopDiagTraceDripsHistogram @ 0x14032D990 (PopDiagTraceDripsHistogram.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PpmEventTraceDripsAccountingSnapshot @ 0x140AA78E8 (PpmEventTraceDripsAccountingSnapshot.c)
 */

__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _QWORD v12[26]; // [rsp+30h] [rbp-108h] BYREF

  result = (unsigned int)dword_140E27DC0;
  v5 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_140E27DC0 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(((unsigned __int64)(unsigned int)dword_140E27DC0 << 10) + *(_QWORD *)(PpmPlatformStates + 48)
                                                                            + 232LL);
    do
    {
      v12[v5] = PpmConvertTimeTo(*v9 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v5 * 8), 10000000LL);
      ++v5;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    PpmEventTraceDripsAccountingSnapshot(v10, v12);
    return PopDiagTraceDripsHistogram(v6, a2, a3, v11, (__int64)v12);
  }
  return result;
}
