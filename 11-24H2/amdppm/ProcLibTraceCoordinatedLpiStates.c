/*
 * XREFs of ProcLibTraceCoordinatedLpiStates @ 0x14003E790
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003EA10 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibTraceCoordinatedLpiRundown @ 0x14003E7DC (ProcLibTraceCoordinatedLpiRundown.c)
 */

__int64 ProcLibTraceCoordinatedLpiStates()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int *)qword_140015CA0;
  v1 = 0;
  if ( qword_140015CA0 && *(_DWORD *)qword_140015CA0 )
  {
    do
    {
      result = ProcLibTraceCoordinatedLpiRundown(&v0[8 * v1 + 2 + 2 * v1]);
      ++v1;
    }
    while ( v1 < *v0 );
  }
  return result;
}
