/*
 * XREFs of IopFreeReserveIrp @ 0x1404D420C
 * Callers:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140596328 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1, __int64 a2)
{
  struct _KEVENT *v2; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v2 = (struct _KEVENT *)&word_140F8C770;
    _InterlockedExchange(&dword_140F8C768, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140F8C798;
    _InterlockedExchange(&dword_140F8C790, 0);
    return KeSetEvent(v2, 1, 0);
  }
  if ( a1 == qword_140F8C7B0 )
  {
    v2 = &stru_140F8C7C0;
    _InterlockedExchange(&dword_140F8C7B8, 0);
    return KeSetEvent(v2, 1, 0);
  }
  LOBYTE(a2) = 1;
  return IopFreeBackpocketIrp(a1, a2);
}
