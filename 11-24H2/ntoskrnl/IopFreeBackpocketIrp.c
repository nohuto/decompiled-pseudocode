/*
 * XREFs of IopFreeBackpocketIrp @ 0x140596328
 * Callers:
 *     IopFreeReserveIrp @ 0x1404D420C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == qword_140F8C7D8 )
  {
    v2 = (struct _KEVENT *)&word_140F8C7F0;
    qword_140F8C7E8 = 0LL;
    _InterlockedExchange(&dword_140F8C7E0, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140F8C808 )
  {
    v2 = &stru_140F8C820;
    qword_140F8C818 = 0LL;
    _InterlockedExchange(&dword_140F8C810, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140F8C838;
  *(_QWORD *)&a1->Type = qword_140F8C838;
  qword_140F8C838 = a1;
  return result;
}
