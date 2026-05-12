/*
 * XREFs of StorDeleteDictionary @ 0x140055FA8
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorDeleteDictionary(__int64 a1)
{
  if ( *(_DWORD *)a1 )
    return 3221225729LL;
  ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x74636944u);
  return 0LL;
}
