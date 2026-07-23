/*
 * XREFs of ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140454400
 * Callers:
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404542F8 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z @ 0x14045455C (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@0@Z.c)
 *     ?StLazyWorkMgrInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14045491C (-StLazyWorkMgrInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     StLcInitialize @ 0x140454D68 (StLcInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmCrEncInitialize @ 0x140A79724 (SmCrEncInitialize.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StInitialize(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax

  memset_0((void *)(a1 + 1), 0, 0x1AAFuLL);
  *(_BYTE *)a1 = 2;
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 80, a1 + 2416);
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 2416, 0LL);
  *(_OWORD *)(a1 + 4760) = 0LL;
  *(_OWORD *)(a1 + 4776) = 0LL;
  *(_OWORD *)(a1 + 4792) = 0LL;
  *(_QWORD *)(a1 + 4808) = 0LL;
  SmCrEncInitialize(a1 + 4864);
  v2 = *(_DWORD *)(a1 + 5016);
  *(_DWORD *)(a1 + 5024) = 3;
  *(_DWORD *)(a1 + 5016) = v2 & 0xFFFFFFF8 | 6;
  memset_0((void *)(a1 + 5080), 0, 0x510uLL);
  *(_QWORD *)(a1 + 5072) = a1 + 5096;
  *(_QWORD *)(a1 + 5088) = MEMORY[0xFFFFF78000000008] + 600000000LL;
  *(_QWORD *)(a1 + 6400) = 500LL;
  *(_QWORD *)(a1 + 6416) = 1000LL;
  *(_QWORD *)(a1 + 6432) = 3000LL;
  *(_QWORD *)(a1 + 6448) = 5000LL;
  *(_QWORD *)(a1 + 6464) = 10000LL;
  *(_QWORD *)(a1 + 6480) = 20000LL;
  *(_QWORD *)(a1 + 6496) = 50000LL;
  *(_QWORD *)(a1 + 6512) = 100000LL;
  StLcInitialize(a1 + 6376);
  ST_STORE<SM_TRAITS>::StLazyWorkMgrInitialize(a1 + 6536);
  InitializeSListHead((PSLIST_HEADER)(a1 + 4848));
  v3 = *(_DWORD *)(a1 + 6768) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 6776) = 6;
  result = v3 | 6;
  *(_DWORD *)(a1 + 6768) = result;
  return result;
}
