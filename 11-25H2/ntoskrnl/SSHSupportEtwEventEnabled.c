/*
 * XREFs of SSHSupportEtwEventEnabled @ 0x1404781A8
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140A48E10 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A74694 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9151C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall SSHSupportEtwEventEnabled(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwEventEnabled(SshpTraceHandle, a2);
}
