/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140747C10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_140E67028);
  if ( dword_140E67064 == 2 )
  {
    KeReleaseGuardedMutex(&stru_140E67028);
  }
  else
  {
    dword_140E67064 = 1;
    while ( qword_140E67018 != &qword_140E67018 )
    {
      v2 = qword_140E67020;
      if ( *(PVOID **)qword_140E67020 != &qword_140E67018
        || (v3 = (PVOID *)*((_QWORD *)qword_140E67020 + 1), *v3 != qword_140E67020) )
      {
        __fastfail(3u);
      }
      qword_140E67020 = (PVOID)*((_QWORD *)qword_140E67020 + 1);
      *v3 = &qword_140E67018;
      ExFreePoolWithTag(v2, 0);
      --dword_140E67060;
    }
    KeReleaseGuardedMutex(&stru_140E67028);
    if ( qword_140E67068 )
      KeSetEvent(qword_140E67068, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
