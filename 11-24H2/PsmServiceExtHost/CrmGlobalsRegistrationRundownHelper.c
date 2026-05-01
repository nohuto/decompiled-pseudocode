/*
 * XREFs of CrmGlobalsRegistrationRundownHelper @ 0x18002FACC
 * Callers:
 *     CrmGlobalsRundown @ 0x18002F93C (CrmGlobalsRundown.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmLogActivityUpdate @ 0x18002E520 (CrmLogActivityUpdate.c)
 *     CrmLogActivityCoordinatorTelemetry @ 0x18002FC20 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmActivityTelemetryUpdateCurrentStates @ 0x18002FE00 (CrmActivityTelemetryUpdateCurrentStates.c)
 *     CrmLogRegistrationRundownStart @ 0x18002FF98 (CrmLogRegistrationRundownStart.c)
 *     CrmLogRegistrationRundownStop @ 0x180030060 (CrmLogRegistrationRundownStop.c)
 */

__int64 __fastcall CrmGlobalsRegistrationRundownHelper(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 *i; // rbx

  v2 = a1 - 32;
  v4 = MEMORY[0x7FFE0008];
  CrmLogRegistrationRundownStart(a1 - 32);
  CempLockAcquireExclusive(v2);
  for ( i = *(__int64 **)(v2 + 56); i != (__int64 *)(v2 + 56); i = (__int64 *)*i )
  {
    CrmLogActivityUpdate(
      i[7],
      *((_DWORD *)i + 17),
      *(_QWORD *)(v2 + 16),
      0,
      0,
      0,
      3,
      3,
      *((_DWORD *)i + 25),
      *((_DWORD *)i + 25),
      *((_DWORD *)i + 26),
      *((_DWORD *)i + 26),
      0,
      i[17],
      v4);
    CrmActivityTelemetryUpdateCurrentStates(i);
    if ( v2 == qword_1800EAA60 )
    {
      CrmLogActivityCoordinatorTelemetry(i + 30, *(_QWORD *)(v2 + 144), v4);
    }
    else if ( *((_DWORD *)i + 16) == 1301 && *a2 < 2u )
    {
      if ( (unsigned int)CrmLogActivityCoordinatorTelemetry(i + 30, *(_QWORD *)(v2 + 144), v4) )
        ++*a2;
    }
    i[17] = v4;
  }
  *(_DWORD *)(v2 + 8) = 0;
  RtlReleaseSRWLockExclusive(v2);
  CrmLogRegistrationRundownStop(v2);
  return 0LL;
}
