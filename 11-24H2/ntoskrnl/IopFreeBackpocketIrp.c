/*
 * XREFs of IopFreeBackpocketIrp @ 0x140593358
 * Callers:
 *     IopFreeReserveIrp @ 0x1404CD41C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == qword_140F8C898 )
  {
    v2 = (struct _KEVENT *)&word_140F8C8B0;
    qword_140F8C8A8 = 0LL;
    _InterlockedExchange(&dword_140F8C8A0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140F8C8C8 )
  {
    v2 = &stru_140F8C8E0;
    qword_140F8C8D8 = 0LL;
    _InterlockedExchange(&dword_140F8C8D0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140F8C8F8;
  *(_QWORD *)&a1->Type = qword_140F8C8F8;
  qword_140F8C8F8 = a1;
  return result;
}
