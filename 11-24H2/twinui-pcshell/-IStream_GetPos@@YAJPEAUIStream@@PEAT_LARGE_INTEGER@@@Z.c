/*
 * XREFs of ?IStream_GetPos@@YAJPEAUIStream@@PEAT_LARGE_INTEGER@@@Z @ 0x180691708
 * Callers:
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z @ 0x180694DB0 (-SaveShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAUIStream@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IStream_GetPos(struct IStream *a1, union _LARGE_INTEGER *a2)
{
  return (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, union _LARGE_INTEGER *))(*(_QWORD *)a1 + 40LL))(
           a1,
           0LL,
           1LL,
           a2);
}
