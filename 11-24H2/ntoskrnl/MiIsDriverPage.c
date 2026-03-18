/*
 * XREFs of MiIsDriverPage @ 0x1402C80A4
 * Callers:
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1402C9B38 (MiImageContainsVa.c)
 */

__int64 *__fastcall MiIsDriverPage(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 *DataTableEntryByAddress; // rbx
  unsigned __int8 v5; // r11

  v3 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(v3);
  if ( !DataTableEntryByAddress && a2 )
  {
    for ( DataTableEntryByAddress = (__int64 *)qword_140E2D888;
          DataTableEntryByAddress != &qword_140E2D888;
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
