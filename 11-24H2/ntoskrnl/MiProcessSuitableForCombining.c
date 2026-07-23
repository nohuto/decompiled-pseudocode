/*
 * XREFs of MiProcessSuitableForCombining @ 0x1403435EC
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140686200 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(_DWORD *)(a1 + 500) & 0xC00u) >= 0xC00
      && !*(_QWORD *)(a1 + 1128)
      && !(unsigned int)MiIsStoreProcess(a1, 3072LL, a3, a4);
}
