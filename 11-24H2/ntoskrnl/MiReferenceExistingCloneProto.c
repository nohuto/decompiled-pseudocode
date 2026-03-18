/*
 * XREFs of MiReferenceExistingCloneProto @ 0x1404636A8
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x1402F99D8 (MiReferenceCloneProto.c)
 */

__int64 __fastcall MiReferenceExistingCloneProto(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        _QWORD *a4,
        unsigned __int64 *a5)
{
  _KPROCESS *Process; // r10
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  *a5 = 0LL;
  IdealProcessorAssignmentBlock = Process[1].IdealProcessorAssignmentBlock;
  if ( !IdealProcessorAssignmentBlock )
    return 1LL;
  do
  {
    if ( a2 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
    {
      IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
    }
    else
    {
      if ( a2 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
        break;
      IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
    }
  }
  while ( IdealProcessorAssignmentBlock );
  if ( !IdealProcessorAssignmentBlock || !*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16] )
    return 1LL;
  result = MiReferenceCloneProto(
             a1,
             *(_QWORD *)(*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[20] + 24LL),
             a2,
             a3,
             a4);
  if ( (_DWORD)result )
  {
    if ( (a3 & 1) != 0 )
      *a5 = a2;
  }
  return result;
}
