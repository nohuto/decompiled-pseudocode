/*
 * XREFs of SSHSupportEtwWrite @ 0x1404A3E6C
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140767304 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpFlushBlockerDataCache @ 0x140A4B850 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A76764 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9561C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 */

NTSTATUS __fastcall SSHSupportEtwWrite(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  return EtwWriteEx(SshpTraceHandle, a2, 0LL, 0, 0LL, 0LL, a4, a5);
}
