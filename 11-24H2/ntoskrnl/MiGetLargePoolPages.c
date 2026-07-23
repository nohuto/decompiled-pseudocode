/*
 * XREFs of MiGetLargePoolPages @ 0x14034B858
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiObtainPoolCharges @ 0x14044DFCC (MiObtainPoolCharges.c)
 *     MiReturnExcessPoolCharges @ 0x14044F9D8 (MiReturnExcessPoolCharges.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetLargePoolPages(__int64 a1)
{
  __int64 v2; // rcx
  _OWORD v4[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]

  v5 = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v4, 0, sizeof(v4));
  v6 = 0;
  if ( !(unsigned int)MiObtainPoolCharges(v2, 0LL) )
    return 3221225626LL;
  MiInitializeDemandCoalesceContext(v4, 512LL, *(_QWORD *)(a1 + 8) >> 9, 1);
  MiGetLargePageChain(
    *(_DWORD *)(a1 + 96),
    *(_QWORD *)(a1 + 8),
    *(_BYTE *)(a1 + 102),
    (__int64)v4,
    (__int64 *)(a1 + 16));
  if ( !*(_QWORD *)(a1 + 32) )
  {
    MiReturnExcessPoolCharges(*(_QWORD *)(a1 + 8), 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
