/*
 * XREFs of SSHSupportEtwEventEnabled @ 0x140477F70
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140A4B850 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A76764 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9561C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall SSHSupportEtwEventEnabled(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwEventEnabled(SshpTraceHandle, a2);
}
