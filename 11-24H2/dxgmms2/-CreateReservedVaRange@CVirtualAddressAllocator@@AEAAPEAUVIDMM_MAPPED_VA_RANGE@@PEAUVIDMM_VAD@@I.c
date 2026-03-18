/*
 * XREFs of ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400BE130
 * Callers:
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400BCFA0 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::CreateReservedVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a6,
        unsigned __int64 a7)
{
  PVOID v10; // rax
  struct VIDMM_MAPPED_VA_RANGE *v11; // rax
  struct VIDMM_VAD *v12; // rdx
  VIDMM_MAPPED_VA_RANGE *v13; // rbx
  __int64 v15; // rcx
  unsigned int v16; // edx

  v10 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v10
    && (v11 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v10,
                                                (__int64)a2,
                                                a4,
                                                a4 + a5,
                                                0,
                                                0LL,
                                                0LL,
                                                (*(_BYTE *)&a6.0 & 4) != 0 ? 6 : 0,
                                                a6.Value,
                                                a7,
                                                0LL,
                                                0LL,
                                                0),
        (v13 = v11) != 0LL) )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(this, v12, 0, v11) >= 0 )
      return v13;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2502;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v13, v16);
  }
  else
  {
    _InterlockedIncrement(&dword_1400817E4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2496;
    DxgkLogInternalTriageEvent(v15, 262145LL);
  }
  return 0LL;
}
