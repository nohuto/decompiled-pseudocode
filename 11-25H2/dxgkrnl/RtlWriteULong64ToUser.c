/*
 * XREFs of RtlWriteULong64ToUser @ 0x14018AE78
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140054BA0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C800 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x1400A1030 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1400653D6 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}
