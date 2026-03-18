/*
 * XREFs of IopFreeBackpocketIrp @ 0x140592CC8
 * Callers:
 *     IopFreeReserveIrp @ 0x1404D4334 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == qword_140F8C058 )
  {
    v2 = (struct _KEVENT *)&word_140F8C070;
    qword_140F8C068 = 0LL;
    _InterlockedExchange(&dword_140F8C060, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140F8C088 )
  {
    v2 = &stru_140F8C0A0;
    qword_140F8C098 = 0LL;
    _InterlockedExchange(&dword_140F8C090, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140F8C0B8;
  *(_QWORD *)&a1->Type = qword_140F8C0B8;
  qword_140F8C0B8 = a1;
  return result;
}
