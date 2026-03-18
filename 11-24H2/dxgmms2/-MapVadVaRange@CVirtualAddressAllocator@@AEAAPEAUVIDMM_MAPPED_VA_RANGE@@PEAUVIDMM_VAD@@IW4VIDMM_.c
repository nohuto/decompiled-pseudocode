/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x14009AD34
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10,
        char a11)
{
  __int64 v13; // rdi
  unsigned __int64 v15; // rbx
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v17; // rbx
  PVOID v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // edx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v22; // r9
  char *v23; // r8
  char *v24; // rcx
  char **v25; // rdx
  __int64 v26; // rcx
  __int64 **v27; // rdx
  __int64 *v28; // rax
  __int64 v30; // rcx

  v13 = a3;
  v15 = a10;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(a4, a5);
  if ( VidMmGlobalAllocFromOwner )
    v15 = *(_QWORD *)(*VidMmGlobalAllocFromOwner + 16LL);
  v17 = v15 - a6;
  v18 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( !v18
    || (v19 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v18,
                (__int64)a2,
                a9,
                a9 + a10,
                v13,
                (__int64)a5,
                a6,
                a4,
                a7,
                a8,
                (v17 >> 12) & -(__int64)(v17 < a10),
                a6,
                0)) == 0 )
  {
    _InterlockedIncrement(&dword_1400817E4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2571;
    DxgkLogInternalTriageEvent(v30, 262145LL);
    return 0LL;
  }
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a11 )
    {
      if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, v13, (struct VIDMM_MAPPED_VA_RANGE *)v19) < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2600;
        goto LABEL_8;
      }
      return v19;
    }
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(a4, (__int64)a5);
    v22 = VidMmAllocFromOwner;
    v23 = (char *)(v19 + 8);
    v24 = (char *)a2 + 16 * v13 + 8 * v13 + 104;
    v25 = (char **)*((_QWORD *)v24 + 1);
    if ( *v25 == v24 )
    {
      *(_QWORD *)v23 = v24;
      *(_QWORD *)(v19 + 16) = v25;
      *v25 = v23;
      *((_QWORD *)v24 + 1) = v23;
      if ( !VidMmAllocFromOwner )
      {
LABEL_14:
        *(_DWORD *)(v19 + 72) |= 0x8000u;
        return v19;
      }
      v26 = VidMmAllocFromOwner + 144;
      v27 = *(__int64 ***)(VidMmAllocFromOwner + 152);
      v28 = (__int64 *)(v19 + 32);
      if ( *v27 == (__int64 *)(v22 + 144) )
      {
        *v28 = v26;
        *(_QWORD *)(v19 + 40) = v27;
        *v27 = v28;
        *(_QWORD *)(v22 + 152) = v28;
        goto LABEL_14;
      }
    }
    __fastfail(3u);
  }
  if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, v13, (struct VIDMM_MAPPED_VA_RANGE *)v19) >= 0 )
    return v19;
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 2611;
LABEL_8:
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v19, v20);
  return 0LL;
}
