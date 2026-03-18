/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x14020852C
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14020A144 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404959DC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C5A10 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     MiStoreGetVadForAddress @ 0x140207B58 (MiStoreGetVadForAddress.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rsi
  __int64 VadForAddress; // rax
  _OWORD v7[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadForAddress = MiStoreGetVadForAddress(a1);
  return MiDecommitPages(
           (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
           (unsigned int)((__int64)((((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
           0,
           (_DWORD)Process,
           VadForAddress,
           0,
           0LL,
           (__int64)v7);
}
