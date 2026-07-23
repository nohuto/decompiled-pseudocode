/*
 * XREFs of MiClonePteReadonly @ 0x140496434
 * Callers:
 *     MiPteForTrimmedProto @ 0x140202660 (MiPteForTrimmedProto.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiClonePteReadonly(unsigned __int64 a1)
{
  _KPROCESS *Process; // rdx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  IdealProcessorAssignmentBlock = Process[1].IdealProcessorAssignmentBlock;
  if ( !IdealProcessorAssignmentBlock )
    return 0LL;
  do
  {
    if ( a1 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
    {
      IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
    }
    else
    {
      if ( a1 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
        return IdealProcessorAssignmentBlock
            && *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16]
            && Process[2].ActiveProcessors[4].Bitmap[0] > *(_QWORD *)&IdealProcessorAssignmentBlock->IdealProcessor[8];
      IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
    }
  }
  while ( IdealProcessorAssignmentBlock );
  return IdealProcessorAssignmentBlock
      && *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16]
      && Process[2].ActiveProcessors[4].Bitmap[0] > *(_QWORD *)&IdealProcessorAssignmentBlock->IdealProcessor[8];
}
