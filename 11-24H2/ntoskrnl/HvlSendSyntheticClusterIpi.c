/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1403C8710
 * Callers:
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1403C6780 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x1403C8838 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvcallpNoHypervisorPresent @ 0x1404AD690 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceHvHypercall @ 0x1404CDEEC (EtwTraceHvHypercall.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  __int64 v10; // [rsp+20h] [rbp-38h]
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF

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
    HIDWORD(v10) = 0;
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      v7 = 0LL;
      for ( i = &unk_140FCC223; ; i += 4 )
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
    LODWORD(v10) = 65547;
    memset(v11, 0, sizeof(v11));
    if ( (BYTE4(xmmword_140FC5B10) & 0x10) != 0 )
    {
      v3 = 1;
      EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v11, 0xA0000010);
    }
    else
    {
      v3 = 0;
    }
    v4 = HvcallCodeVa();
    if ( v3 )
    {
      LOBYTE(v5) = 1;
      ((void (__fastcall *)(_OWORD *, __int64, __int64, _QWORD, __int64))EtwTraceHvHypercall)(v11, 11LL, v5, 0LL, v10);
    }
    return v4 != 0 ? 0xC0000001 : 0;
  }
}
