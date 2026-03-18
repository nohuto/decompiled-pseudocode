/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x1404F8648
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 PpmResetDripsAccountingSnapshot()
{
  __int64 result; // rax
  __int64 *v1; // rdx
  __int64 v2; // r8
  _QWORD *v3; // rcx

  result = (unsigned int)dword_140E27DC0;
  if ( PpmPlatformStates && dword_140E27DC0 != -1 )
  {
    v1 = (__int64 *)(((unsigned __int64)(unsigned int)dword_140E27DC0 << 10)
                   + *(_QWORD *)(PpmPlatformStates + 48)
                   + 232LL);
    v2 = 26LL;
    v3 = &PpmDripsAccountingSnapshot;
    do
    {
      result = *v1;
      v1 += 4;
      *v3++ = result;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
