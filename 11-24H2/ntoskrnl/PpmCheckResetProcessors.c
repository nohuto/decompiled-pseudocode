/*
 * XREFs of PpmCheckResetProcessors @ 0x1405D6BC0
 * Callers:
 *     PpmCheckArmPeriod @ 0x1404AC5B4 (PpmCheckArmPeriod.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckResetProcessors(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 i; // rdi
  unsigned int j; // esi
  __int64 v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    result = PopExecuteOnTargetProcessors(a1 + 24, (__int64)PpmCheckReset, 0LL, 0LL);
    if ( *(_DWORD *)(a1 + 296) )
    {
      do
      {
        result = v1;
        v4 = *(_QWORD *)(a1 + 312) + 1192LL * v1;
        if ( *(_DWORD *)(v4 + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)v4);
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 296) );
    }
  }
  else
  {
    result = PopExecuteOnTargetProcessors((__int64)&PpmCheckRegistered, (__int64)PpmCheckReset, 0LL, 0LL);
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        result = j;
        v7 = *(_QWORD *)(i + 312) + 1192LL * j;
        if ( *(_DWORD *)(v7 + 16) == 1 )
          result = PpmResetPerfTimes(*(_QWORD *)v7);
      }
    }
  }
  return result;
}
