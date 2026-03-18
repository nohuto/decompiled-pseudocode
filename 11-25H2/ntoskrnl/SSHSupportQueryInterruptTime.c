/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1404B0668
 * Callers:
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1407579F8 (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SshpTracingRundownCollectionState @ 0x140A74694 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9151C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
