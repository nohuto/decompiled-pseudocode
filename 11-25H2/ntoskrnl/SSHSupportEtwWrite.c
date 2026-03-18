/*
 * XREFs of SSHSupportEtwWrite @ 0x1404A3BCC
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140757944 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpFlushBlockerDataCache @ 0x140A48E10 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A74694 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A9151C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
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
