/*
 * XREFs of MiGetLargePoolPages @ 0x1402EA218
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x14036EEE0 (MiInitializeDemandCoalesceContext.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiObtainPoolCharges @ 0x140458B1C (MiObtainPoolCharges.c)
 *     MiReturnExcessPoolCharges @ 0x14045A588 (MiReturnExcessPoolCharges.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetLargePoolPages(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  _OWORD v5[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]

  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v5, 0, sizeof(v5));
  v7 = 0;
  if ( !(unsigned int)MiObtainPoolCharges(v2, 0LL) )
    return 3221225626LL;
  MiInitializeDemandCoalesceContext(v5, 512LL, *(_QWORD *)(a1 + 8) >> 9, 1LL);
  v3 = a1 + 16;
  LOBYTE(v3) = *(_BYTE *)(a1 + 102);
  MiGetLargePageChain(*(_DWORD *)(a1 + 96), *(_QWORD *)(a1 + 8), v3, (unsigned int)v5, a1 + 16);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    MiReturnExcessPoolCharges(*(_QWORD *)(a1 + 8), 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
