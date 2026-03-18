/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x14027015C
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x140257700 (EtwTraceTimedEvent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x140270B5C (HvlpAffinityToVirtualAffinity.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1406A9E90 (HvcallpExtendedFastHypercall.c)
 */

int __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // r9d
  char v6; // bl
  int result; // eax
  __int64 v8; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v9[2]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v11; // [rsp+70h] [rbp+37h]

  v8 = 2LL;
  v3 = a1;
  v4 = (a3 == 0 ? 4 : 0) | 2;
  if ( a1 )
    v4 = a3 == 0 ? 4 : 0;
  if ( a2 )
  {
    v11 = HvlpAffinityToVirtualAffinity(*(_QWORD *)(a2 + 8));
  }
  else
  {
    v5 = v4 | 1;
    v11 = 0LL;
  }
  v10[1] = v5;
  v10[0] = v3;
  LODWORD(v8) = 65538;
  memset(v9, 0, sizeof(v9));
  if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
  {
    v6 = 1;
    EtwGetKernelTraceTimestamp(v9, 2684354576LL);
  }
  else
  {
    v6 = 0;
  }
  result = HvcallpExtendedFastHypercall(v8, v10, 24LL);
  if ( v6 )
  {
    v8 = 0x100000002LL;
    return EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v8, 8, 0x500E02u, (__int64)v9);
  }
  return result;
}
