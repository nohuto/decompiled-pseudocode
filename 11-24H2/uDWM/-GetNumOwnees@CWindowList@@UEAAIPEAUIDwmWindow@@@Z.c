/*
 * XREFs of ?GetNumOwnees@CWindowList@@UEAAIPEAUIDwmWindow@@@Z @ 0x1800F04B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::GetNumOwnees(CWindowList *this, struct IDwmWindow *a2)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) + 632);
}
