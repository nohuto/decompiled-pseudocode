/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x14073BBF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_140E66D68);
  if ( dword_140E66DA4 == 2 )
  {
    KeReleaseGuardedMutex(&stru_140E66D68);
  }
  else
  {
    dword_140E66DA4 = 1;
    while ( qword_140E66D58 != &qword_140E66D58 )
    {
      v2 = qword_140E66D60;
      if ( *(PVOID **)qword_140E66D60 != &qword_140E66D58
        || (v3 = (PVOID *)*((_QWORD *)qword_140E66D60 + 1), *v3 != qword_140E66D60) )
      {
        __fastfail(3u);
      }
      qword_140E66D60 = (PVOID)*((_QWORD *)qword_140E66D60 + 1);
      *v3 = &qword_140E66D58;
      ExFreePoolWithTag(v2, 0);
      --dword_140E66DA0;
    }
    KeReleaseGuardedMutex(&stru_140E66D68);
    if ( qword_140E66DA8 )
      KeSetEvent(qword_140E66DA8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
