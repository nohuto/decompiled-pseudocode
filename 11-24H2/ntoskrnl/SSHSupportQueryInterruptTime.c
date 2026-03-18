/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1404B1668
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407673B8 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SshpTracingRundownCollectionState @ 0x140A76764 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9561C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
