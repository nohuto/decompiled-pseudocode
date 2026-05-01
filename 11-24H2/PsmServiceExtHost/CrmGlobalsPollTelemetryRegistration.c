/*
 * XREFs of CrmGlobalsPollTelemetryRegistration @ 0x180065FD0
 * Callers:
 *     CrmGlobalsPeriodicTelemetry @ 0x180065D10 (CrmGlobalsPeriodicTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsPollTelemetryRegistration(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 *i; // rax
  __int64 v9; // rdx

  RtlAcquireSRWLockShared(a2);
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56); ++a4 )
  {
    if ( *((_DWORD *)i + 89) || !*((_DWORD *)i + 31) )
    {
      v9 = a4;
      *(_DWORD *)(a1 + 4LL * a4 + 768) |= a3;
      *((_DWORD *)i + 89) = 0;
    }
    else
    {
      v9 = a4;
    }
    if ( *((_DWORD *)i + 90) || *((_DWORD *)i + 31) == 1 )
    {
      *(_DWORD *)(a1 + 4 * v9 + 836) |= a3;
      *((_DWORD *)i + 90) = 0;
    }
    i = (__int64 *)*i;
  }
  RtlReleaseSRWLockShared(a2);
  return a4;
}
