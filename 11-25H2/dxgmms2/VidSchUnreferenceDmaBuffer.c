/*
 * XREFs of VidSchUnreferenceDmaBuffer @ 0x1400909F8
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x14003BD20 (VidMmUnreferenceDmaBuffer.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x14002F320 (VidSchiSignalRegisteredEvent.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003BD20 (VidMmUnreferenceDmaBuffer.c)
 */

void __fastcall VidSchUnreferenceDmaBuffer(__int64 a1, __int64 a2)
{
  VidMmUnreferenceDmaBuffer(a2, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1912));
  *(_QWORD *)(a1 + 1760) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(a1 + 1728), 0, 0);
  VidSchiSignalRegisteredEvent(a1, (struct _KEVENT **)(a1 + 1944));
}
