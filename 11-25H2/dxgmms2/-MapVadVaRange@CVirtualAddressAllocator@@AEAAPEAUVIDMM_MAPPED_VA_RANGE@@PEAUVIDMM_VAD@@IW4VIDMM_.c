/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1400B700C
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int64 v11; // rsi
  __int64 **v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  char v20; // cl
  __int64 v22; // rcx
  unsigned int v23; // edx

  v11 = a10;
  if ( a4 == 3 )
  {
    v15 = a5;
  }
  else
  {
    switch ( a4 )
    {
      case 1:
        v14 = (__int64 **)a5;
        break;
      case 4:
        v14 = *(__int64 ***)(a5 + 56);
        break;
      case 5:
        v14 = *(__int64 ***)(a5 + 24);
        break;
      default:
        goto LABEL_8;
    }
    if ( !v14 )
      goto LABEL_8;
    v15 = **v14;
  }
  if ( v15 )
    v11 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
LABEL_8:
  v16 = v11 - a6;
  v17 = operator new(144LL, 0x39346956u, 256LL);
  v18 = v17;
  if ( v17 )
  {
    *(_QWORD *)(v17 + 88) = a8;
    *(_QWORD *)(v17 + 96) = a7;
    *(_DWORD *)(v17 + 72) = 0;
    *(_QWORD *)v17 = a2;
    *(_QWORD *)(v17 + 64) = a5;
    *(_QWORD *)(v17 + 80) = a6;
    *(_QWORD *)(v17 + 104) = a9;
    *(_QWORD *)(v17 + 112) = a10 + a9;
    *(_QWORD *)(v17 + 120) = a6;
    *(_QWORD *)(v17 + 128) = (v16 >> 12) & -(__int64)(v16 < a10);
    v19 = *(_DWORD *)(v17 + 72);
    v20 = a4 ^ *(_DWORD *)(v18 + 72);
    *(_DWORD *)(v18 + 136) = 1;
    *(_DWORD *)(v18 + 72) = v19 ^ v20 & 0xF ^ ((unsigned __int16)(v19 ^ v20 & 0xF) ^ (unsigned __int16)(16 * a3)) & 0x3F0;
    if ( a4 == 6 )
      *(_QWORD *)(v18 + 96) |= 4uLL;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_QWORD *)(v18 + 40) = 0LL;
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_OWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 24) = 0LL;
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, a3, (struct VIDMM_MAPPED_VA_RANGE *)v18) >= 0 )
      return v18;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2208;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v18, v23);
  }
  else
  {
    _InterlockedIncrement(&dword_1400817C4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2199;
    DxgkLogInternalTriageEvent(v22, 262145LL);
  }
  return 0LL;
}
