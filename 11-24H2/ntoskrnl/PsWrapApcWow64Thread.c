/*
 * XREFs of PsWrapApcWow64Thread @ 0x1405E3630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsWrapApcWow64Thread(PVOID *ApcContext, PVOID *ApcRoutine)
{
  _KPROCESS *Process; // rax
  __int16 v3; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v3 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v3 == 332 || v3 == 452 )
      *ApcRoutine = (PVOID)(-4LL * (_QWORD)*ApcRoutine);
  }
  return 0;
}
