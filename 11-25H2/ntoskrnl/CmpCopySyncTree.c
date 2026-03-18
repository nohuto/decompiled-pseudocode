/*
 * XREFs of CmpCopySyncTree @ 0x1407D2550
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpCloneHwProfile @ 0x1407C391C (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x1407D28C8 (CmpPreserveSystemHiveData.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 */

__int64 __fastcall CmpCopySyncTree(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 Pool; // rax
  struct _PRIVILEGE_SET *v11; // rbx
  unsigned int v12; // edi

  Pool = CmpAllocatePool(0x100uLL);
  v11 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 8) = 0;
    *(_DWORD *)(Pool + 12) &= 0xFFFFFFF8;
    *(_BYTE *)(Pool + 16) &= 0xFCu;
    *(_DWORD *)Pool = a2;
    *(_DWORD *)(Pool + 4) = a4;
    v12 = CmpCopySyncTree2(Pool, 512LL, 0LL, a1, a3, a5, a6);
    CmSiFreeMemory(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
