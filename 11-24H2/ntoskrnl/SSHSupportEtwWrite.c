/*
 * XREFs of SSHSupportEtwWrite @ 0x14049EA8C
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140766D64 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpFlushBlockerDataCache @ 0x140A425B0 (SshpFlushBlockerDataCache.c)
 *     SshpTracingRundownCollectionState @ 0x140A70884 (SshpTracingRundownCollectionState.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140A91E4C (SshpTracingWriteCollectionStateChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
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
