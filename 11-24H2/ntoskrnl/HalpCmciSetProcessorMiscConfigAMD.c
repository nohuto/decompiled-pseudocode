/*
 * XREFs of HalpCmciSetProcessorMiscConfigAMD @ 0x1404FB3C4
 * Callers:
 *     HalpCmciSetProcessorConfigAMD @ 0x14047D7E0 (HalpCmciSetProcessorConfigAMD.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpCmciSetProcessorMiscConfigAMD(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a3 < 0 && (a3 & 0x2000000000000000LL) == 0 )
  {
    if ( (a3 & 0x4000000000000000LL) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 68) & 0xFFFLL;
      if ( !v5 )
        v5 = 1LL;
      if ( (_BYTE)a4 )
      {
        a3 = a3 & 0xFFFAF000FFFFFFFFuLL | ((~v5 & 0xFFF) << 32) | 0xA000000000000LL;
        if ( !HalpMcaScalableRasSupported )
          a3 = a3 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
      }
      else
      {
        a3 &= 0xFFF0F000FFFFFFFFuLL;
        if ( !HalpMcaScalableRasSupported )
          a3 &= 0xFF0FFFFFFFFFFFFFuLL;
      }
    }
    return guard_dispatch_icall_no_overrides(a5, a2, a3, a4);
  }
  return result;
}
