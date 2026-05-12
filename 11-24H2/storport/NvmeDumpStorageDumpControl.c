/*
 * XREFs of NvmeDumpStorageDumpControl @ 0x14019FD40
 * Callers:
 *     <none>
 * Callees:
 *     NvmeDumpFreeStorageDumpInfo @ 0x14019F97C (NvmeDumpFreeStorageDumpInfo.c)
 *     NvmeDumpPopulateMiniportDumpInfo @ 0x14019FB64 (NvmeDumpPopulateMiniportDumpInfo.c)
 */

__int64 __fastcall NvmeDumpStorageDumpControl(_QWORD *a1, int a2, __int64 a3)
{
  if ( a2 == 2 )
    return NvmeDumpPopulateMiniportDumpInfo(*(_QWORD *)(a1[6] + 16LL), a1[7], a3);
  if ( a2 == 7 )
    return NvmeDumpFreeStorageDumpInfo(a3, a1);
  return 3221225659LL;
}
