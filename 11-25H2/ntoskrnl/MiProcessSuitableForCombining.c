/*
 * XREFs of MiProcessSuitableForCombining @ 0x140239DD8
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140679840 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x1406799B8 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1128) && !(unsigned int)MiIsStoreProcess();
}
