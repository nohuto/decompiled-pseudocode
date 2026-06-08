/*
 * XREFs of ProcLibTraceCoordinatedLpiStates @ 0x140040870
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibTraceCoordinatedLpiRundown @ 0x14002BD5C (ProcLibTraceCoordinatedLpiRundown.c)
 */

void ProcLibTraceCoordinatedLpiStates()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx

  v0 = (unsigned int *)qword_140019848;
  v1 = 0;
  if ( qword_140019848 && *(_DWORD *)qword_140019848 )
  {
    do
    {
      ProcLibTraceCoordinatedLpiRundown((__int64)&v0[8 * v1 + 2 + 2 * v1]);
      ++v1;
    }
    while ( v1 < *v0 );
  }
}
