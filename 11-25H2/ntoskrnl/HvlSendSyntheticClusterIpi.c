/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x140267530
 * Callers:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 * Callees:
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14026778C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AC0A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1404C62C0 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     EtwTraceHvHypercall @ 0x1404CE10C (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  char v3; // di
  __int16 v4; // bx
  __int64 v5; // r8
  __int64 v7; // rcx
  _BYTE *i; // rdx
  unsigned __int64 v9; // rbx
  _OWORD v10[2]; // [rsp+28h] [rbp-30h] BYREF

  if ( (HvlpFlags & 0x80u) != 0 && (unsigned __int16)KiActiveGroups > 1u )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(a1, a2);
    else
      return HvlpFastSendSyntheticClusterIpiEx(a1, a2);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      v7 = 0LL;
      for ( i = &unk_140FCC263; ; i += 4 )
      {
        if ( (v2 & 1) != 0 )
          v7 |= 1LL << *(i - 2);
        v9 = v2 >> 1;
        if ( !v9 )
          break;
        if ( (v9 & 1) != 0 )
          v7 |= 1LL << *i;
        v2 = v9 >> 1;
        if ( !v2 )
          break;
      }
    }
    memset(v10, 0, sizeof(v10));
    if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
    {
      v3 = 1;
      EtwGetKernelTraceTimestamp(v10, 2684354576LL);
    }
    else
    {
      v3 = 0;
    }
    v4 = HvcallCodeVa();
    if ( v3 )
    {
      LOBYTE(v5) = 1;
      EtwTraceHvHypercall(v10, 11LL, v5);
    }
    return v4 != 0 ? 0xC0000001 : 0;
  }
}
