/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1404ABEF8
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x140766E18 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SshpTracingRundownCollectionState @ 0x140A70884 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A91E4C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
