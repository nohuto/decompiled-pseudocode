/*
 * XREFs of MiIsDriverPage @ 0x1402BA964
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1404A2444 (MiImageContainsVa.c)
 */

__int64 *__fastcall MiIsDriverPage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 *DataTableEntryByAddress; // rbx
  unsigned __int8 v5; // r11

  v3 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = (__int64 *)MmFindDataTableEntryByAddress(v3);
  if ( !DataTableEntryByAddress && a2 )
  {
    for ( DataTableEntryByAddress = (__int64 *)qword_140E2D9C8;
          DataTableEntryByAddress != &qword_140E2D9C8;
          DataTableEntryByAddress = (__int64 *)*DataTableEntryByAddress )
    {
      if ( (unsigned int)MiImageContainsVa(DataTableEntryByAddress, v3) )
        goto LABEL_2;
    }
    DataTableEntryByAddress = 0LL;
  }
LABEL_2:
  MmUnlockLoadedModuleListShared(v5);
  return DataTableEntryByAddress;
}
