/*
 * XREFs of MiProcessSuitableForCombining @ 0x1402FB97C
 * Callers:
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x1406850D0 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140685248 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1128) && !(unsigned int)MiIsStoreProcess(a1);
}
