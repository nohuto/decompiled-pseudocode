/*
 * XREFs of SSHSupportEtwEventEnabled @ 0x140474570
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140A425B0 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A70884 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A91E4C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall SSHSupportEtwEventEnabled(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwEventEnabled(SshpTraceHandle, a2);
}
