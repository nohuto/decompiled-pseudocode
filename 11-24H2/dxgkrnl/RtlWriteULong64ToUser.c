/*
 * XREFs of RtlWriteULong64ToUser @ 0x14018D0B8
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1400547F0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C260 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x1400A3030 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140064FF6 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}
