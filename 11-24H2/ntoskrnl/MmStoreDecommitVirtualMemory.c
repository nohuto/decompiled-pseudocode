/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x1402F62C8
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402F6AF8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14048F854 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404BF6E4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiStoreGetVadForAddress @ 0x1402F5754 (MiStoreGetVadForAddress.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _KPROCESS *Process; // rsi
  __int64 VadForAddress; // rax
  _OWORD v9[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadForAddress = MiStoreGetVadForAddress(a1, a2, a3, a4);
  return MiDecommitPages(
           (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
           (unsigned int)((__int64)((((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
           0,
           (__int64)Process,
           VadForAddress,
           0,
           0LL,
           (__int64)v9);
}
