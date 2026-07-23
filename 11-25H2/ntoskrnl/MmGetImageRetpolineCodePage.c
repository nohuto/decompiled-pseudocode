/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1406711C0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 */

unsigned __int64 __fastcall MmGetImageRetpolineCodePage(PVOID a1, _QWORD *a2)
{
  PVOID v2; // rt1
  __int64 *DataTableEntryByAddress; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // r11
  unsigned __int64 result; // rax

  v2 = *(PVOID *)&KeNumberProcessorsGroup0[9];
  if ( a1 == v2 || a1 == PsHalImageBase )
  {
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress((unsigned __int64)a1);
    v6 = DataTableEntryByAddress[6]
       + *((unsigned int *)DataTableEntryByAddress + 16)
       + (unsigned __int64)(unsigned int)(dword_140E3726C + dword_140E37270);
    MmUnlockLoadedModuleListShared(v9, v7, v8);
    result = v6;
    *a2 = (unsigned int)(dword_140E2D4FC << 12);
  }
  return result;
}
