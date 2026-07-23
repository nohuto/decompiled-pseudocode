/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140745F00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_140E67178);
  if ( dword_140E671B4 == 2 )
  {
    KeReleaseGuardedMutex(&stru_140E67178);
  }
  else
  {
    dword_140E671B4 = 1;
    while ( qword_140E67168 != &qword_140E67168 )
    {
      v2 = qword_140E67170;
      if ( *(PVOID **)qword_140E67170 != &qword_140E67168
        || (v3 = (PVOID *)*((_QWORD *)qword_140E67170 + 1), *v3 != qword_140E67170) )
      {
        __fastfail(3u);
      }
      qword_140E67170 = (PVOID)*((_QWORD *)qword_140E67170 + 1);
      *v3 = &qword_140E67168;
      ExFreePoolWithTag(v2, 0);
      --dword_140E671B0;
    }
    KeReleaseGuardedMutex(&stru_140E67178);
    if ( qword_140E671B8 )
      KeSetEvent(qword_140E671B8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
