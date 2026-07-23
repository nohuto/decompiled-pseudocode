/*
 * XREFs of IopFreeReserveIrp @ 0x1404CD41C
 * Callers:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140593358 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1, __int64 a2)
{
  struct _KEVENT *v2; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v2 = (struct _KEVENT *)&word_140F8C830;
    _InterlockedExchange(&dword_140F8C828, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140F8C858;
    _InterlockedExchange(&dword_140F8C850, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == qword_140F8C870 )
  {
    v2 = &stru_140F8C880;
    _InterlockedExchange(&dword_140F8C878, 0);
    return KeSetEvent(v2, 1, 0);
  }
  LOBYTE(a2) = 1;
  return IopFreeBackpocketIrp(a1, a2);
}
