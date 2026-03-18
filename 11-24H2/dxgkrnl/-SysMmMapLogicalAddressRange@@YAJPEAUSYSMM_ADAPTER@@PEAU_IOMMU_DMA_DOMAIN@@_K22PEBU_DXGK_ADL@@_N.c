/*
 * XREFs of ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x1402865D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x140056FDC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysMmMapLogicalAddressRange(
        struct SYSMM_ADAPTER *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        const struct _DXGK_ADL *a6,
        bool a7)
{
  __int64 v7; // rcx
  __int16 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rax
  const wchar_t *v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  unsigned __int64 v20; // [rsp+68h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF

  v21 = a3;
  if ( !SmmUseIommuV3Interface() )
    return 3221225485LL;
  if ( (((unsigned __int16)a5 | (unsigned __int16)(v9 | v8)) & 0xFFF) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v11 = 1134LL;
    v12 = L"Unaligned address";
    goto LABEL_14;
  }
  if ( !v10 )
  {
    if ( (*(_DWORD *)(v7 + 88) & 0x10) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v11 = 1149LL;
      v12 = L"The global adapter domain can be used only with GpuVaIommuGlobalRequired";
      v13 = 262146LL;
LABEL_15:
      WdLogGlobalForLineNumber = v11;
      DxgkLogInternalTriageEvent(0LL, v13, 0xFFFFFFFFLL, v12, v11, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v10 = *(_QWORD *)(v7 + 112);
  }
  if ( v9 >> 12 > *(unsigned int *)a6 - (a5 >> 12) )
  {
    WdLogSingleEntry0(2LL);
    v11 = 1159LL;
    v12 = L"Unaligned AdlOffset";
LABEL_14:
    v13 = 0x40000LL;
    goto LABEL_15;
  }
  v14 = *((_DWORD *)a6 + 1);
  v15 = *((_QWORD *)a6 + 1);
  v18[1] = 0;
  if ( (v14 & 1) != 0 )
  {
    v19 = v15 << 12;
    v18[0] = 1;
    v20 = v9;
  }
  else
  {
    v18[0] = 2;
    v19 = v15 + 8 * (a5 >> 12);
    v20 = v9 >> 12;
  }
  v17 = 0LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_140161568)(
           v10,
           2 * !a7 + 1,
           v18,
           &v21,
           0LL,
           0LL,
           &v17);
}
