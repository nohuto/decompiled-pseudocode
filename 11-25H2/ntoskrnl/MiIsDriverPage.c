/*
 * XREFs of MiIsDriverPage @ 0x14036D6BC
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     MiImageContainsVa @ 0x14036D08C (MiImageContainsVa.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 */

__int64 *__fastcall MiIsDriverPage(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 *DataTableEntryByAddress; // rbx
  __int64 v6; // r8
  unsigned __int8 v7; // r11

  v3 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = (__int64 *)MmFindDataTableEntryByAddress(v3);
  if ( !DataTableEntryByAddress && a2 )
  {
    for ( DataTableEntryByAddress = (__int64 *)qword_140E2D648;
          DataTableEntryByAddress != &qword_140E2D648;
          DataTableEntryByAddress = (__int64 *)*DataTableEntryByAddress )
    {
      if ( MiImageContainsVa((__int64)DataTableEntryByAddress, v3) )
        goto LABEL_2;
    }
    DataTableEntryByAddress = 0LL;
  }
LABEL_2:
  MmUnlockLoadedModuleListShared(v7, v4, v6);
  return DataTableEntryByAddress;
}
