/*
 * XREFs of ProcLibTraceCoordinatedLpiStates @ 0x14003D540
 * Callers:
 *     ProcLibTraceControlCallback @ 0x14003D7C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibTraceCoordinatedLpiRundown @ 0x14003D58C (ProcLibTraceCoordinatedLpiRundown.c)
 */

__int64 ProcLibTraceCoordinatedLpiStates()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx
  __int64 result; // rax

  v0 = (unsigned int *)qword_140014C68;
  v1 = 0;
  if ( qword_140014C68 && *(_DWORD *)qword_140014C68 )
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
