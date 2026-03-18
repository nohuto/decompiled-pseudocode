/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x14067C980
 * Callers:
 *     <none>
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 */

unsigned __int64 __fastcall MmGetImageRetpolineCodePage(unsigned __int64 a1, _QWORD *a2)
{
  __int64 *DataTableEntryByAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r11
  unsigned __int64 result; // rax

  if ( a1 == PsNtosImageBase || a1 == PsHalImageBase )
  {
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
    v5 = DataTableEntryByAddress[6]
       + *((unsigned int *)DataTableEntryByAddress + 16)
       + (unsigned __int64)(unsigned int)(dword_140E374AC + dword_140E374B0);
    MmUnlockLoadedModuleListShared(v6);
    result = v5;
    *a2 = (unsigned int)(dword_140E2D73C << 12);
  }
  return result;
}
