/*
 * XREFs of PsSetSessionObjectIoEvent @ 0x140AAC088
 * Callers:
 *     IopSessionChangeWorker @ 0x14044B580 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall PsSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 136LL), 0, 0);
}
