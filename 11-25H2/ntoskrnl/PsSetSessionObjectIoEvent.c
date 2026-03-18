/*
 * XREFs of PsSetSessionObjectIoEvent @ 0x140AA6AC8
 * Callers:
 *     IopSessionChangeWorker @ 0x14044BFC0 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

LONG __fastcall PsSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 136LL), 0, 0);
}
