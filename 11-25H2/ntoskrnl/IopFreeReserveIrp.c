/*
 * XREFs of IopFreeReserveIrp @ 0x1404D4334
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140592CC8 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1, __int64 a2)
{
  struct _KEVENT *v2; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v2 = (struct _KEVENT *)&word_140F8BFF0;
    _InterlockedExchange(&dword_140F8BFE8, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140F8C018;
    _InterlockedExchange(&dword_140F8C010, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == qword_140F8C030 )
  {
    v2 = &stru_140F8C040;
    _InterlockedExchange(&dword_140F8C038, 0);
    return KeSetEvent(v2, 1, 0);
  }
  LOBYTE(a2) = 1;
  return IopFreeBackpocketIrp(a1, a2);
}
