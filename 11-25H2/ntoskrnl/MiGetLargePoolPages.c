/*
 * XREFs of MiGetLargePoolPages @ 0x140378D28
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiReturnExcessPoolCharges @ 0x140378924 (MiReturnExcessPoolCharges.c)
 *     MiInitializeDemandCoalesceContext @ 0x140378AD0 (MiInitializeDemandCoalesceContext.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiObtainPoolCharges @ 0x1403790F8 (MiObtainPoolCharges.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
    MiReturnExcessPoolCharges(*(_QWORD *)(a1 + 8), 0);
    return 3221225626LL;
  }
  return 0LL;
}
