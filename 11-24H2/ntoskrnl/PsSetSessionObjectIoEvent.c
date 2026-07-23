/*
 * XREFs of PsSetSessionObjectIoEvent @ 0x140AA7058
 * Callers:
 *     IopSessionChangeWorker @ 0x1404426C0 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall PsSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 136LL), 0, 0);
}
