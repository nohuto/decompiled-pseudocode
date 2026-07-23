/*
 * XREFs of ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140608E40
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1402F7140 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  PMDL PagesForMdl; // rax

  v2 = *(_QWORD *)(a1 + 7024);
  v4 = *(_DWORD *)(a1 + 7016);
  v5 = 0;
  v6 = a2;
  if ( !(_WORD)v4
    && (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        (PHYSICAL_ADDRESS)0x10000LL,
                        v4,
                        MmCached,
                        0x4Du)) != 0LL
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        0LL,
                        *(unsigned int *)(a1 + 7016),
                        MmCached,
                        0xDu)) != 0LL )
  {
    *(_QWORD *)(v2 + 8 * v6) = PagesForMdl;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
