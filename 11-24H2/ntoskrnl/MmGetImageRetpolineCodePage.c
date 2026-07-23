/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x14067DB60
 * Callers:
 *     <none>
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 */

unsigned __int64 __fastcall MmGetImageRetpolineCodePage(PVOID a1, _QWORD *a2)
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
    DataTableEntryByAddress = MmFindDataTableEntryByAddress((unsigned __int64)a1);
    v5 = DataTableEntryByAddress[6]
       + *((unsigned int *)DataTableEntryByAddress + 16)
       + (unsigned __int64)(unsigned int)(dword_140E375EC + dword_140E375F0);
    MmUnlockLoadedModuleListShared(v6);
    result = v5;
    *a2 = (unsigned int)(dword_140E2D87C << 12);
  }
  return result;
}
