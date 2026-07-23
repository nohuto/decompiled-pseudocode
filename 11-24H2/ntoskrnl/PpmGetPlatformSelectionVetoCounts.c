/*
 * XREFs of PpmGetPlatformSelectionVetoCounts @ 0x1404AF9CC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetPlatformSelectionVetoCounts(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r9

  *a2 = 0LL;
  *a3 = 0LL;
  result = a1;
  if ( PpmPlatformStates )
  {
    if ( a1 < *(_DWORD *)PpmPlatformStates )
    {
      v4 = *(_QWORD *)(PpmPlatformStates + 48);
      v5 = (unsigned __int64)(unsigned int)result << 10;
      *a2 = *(_QWORD *)(v5 + v4 + 104);
      result = *(_QWORD *)(v5 + v4 + 96);
      *a3 = result;
    }
  }
  return result;
}
