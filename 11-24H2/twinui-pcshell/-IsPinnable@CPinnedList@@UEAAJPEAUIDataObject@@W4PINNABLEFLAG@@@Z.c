/*
 * XREFs of ?IsPinnable@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x1806927B0
 * Callers:
 *     ?IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z @ 0x180688180 (-IsPinnable@CPinnedList@@W7EAAJPEAUIDataObject@@W4PINNABLEFLAG@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::IsPinnable(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
}
