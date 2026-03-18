/*
 * XREFs of ?CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z @ 0x1801E4380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C1294 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1801E4830 (-GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1802025B0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@details@wil@@QEAA_NXZ @ 0x18025143C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CalcApprovedPresentDuration(
        CGlobalCompositionSurfaceInfo *this,
        struct IOverlayMonitorTarget *a2)
{
  unsigned int v4; // edi
  unsigned int PresentDuration; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // r14d
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  unsigned int v18; // r13d
  unsigned __int64 v19; // r15
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // r15d
  int v23; // r12d
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // [rsp+30h] [rbp-18h]
  unsigned int v29; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+60h] BYREF
  unsigned int v33; // [rsp+ACh] [rbp+64h]

  v4 = 0;
  PresentDuration = CGlobalCompositionSurfaceInfo::GetPresentDuration(this);
  v6 = *((_QWORD *)this + 26);
  v7 = PresentDuration;
  v31 = 0;
  if ( v6 )
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 184LL))(v6, &v31);
  else
    v8 = 0;
  result = (*(__int64 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)a2 + 280LL))(a2);
  v28 = result;
  v11 = result;
  if ( result )
  {
    v12 = 2;
    if ( v7 == *((_DWORD *)this + 106) && v31 == *((_DWORD *)this + 107) && v8 == *((_BYTE *)this + 432) )
    {
      v4 = *((_DWORD *)this + 105);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
      {
        v20 = -1;
        if ( v8 )
          v20 = v31;
        McTemplateU0qqq_EventWriteTransfer(v10, &CustomDurationUseCachedDuration, v7, v20, v4);
      }
    }
    else
    {
      *((_DWORD *)this + 107) = v31;
      *((_DWORD *)this + 106) = v7;
      *((_BYTE *)this + 432) = v8;
    }
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) != 8LL
      && (*(unsigned __int8 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)a2 + 32LL))(a2) )
    {
      v18 = v7;
      (*(void (__fastcall **)(struct IOverlayMonitorTarget *, unsigned int *))(*(_QWORD *)a2 + 160LL))(a2, &v32);
      v19 = 10000000 * (unsigned __int64)v33 / v32;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency>::__private_IsEnabled(
                              &`wil::Feature<__WilFeatureTraits_Feature_MultimonPrimaryMinFrequency>::GetImpl'::`2'::impl,
                              10000000 * (unsigned __int64)v33 % v32)
        && CCommonRegistryData::MultimonPrimaryMinFrequency
        && (unsigned int)v19 <= 0x989680u / CCommonRegistryData::MultimonPrimaryMinFrequency )
      {
        LODWORD(v19) = 0x989680u / CCommonRegistryData::MultimonPrimaryMinFrequency;
      }
      if ( v7 > (unsigned int)v19 )
      {
        do
        {
          v21 = v7 / v12++;
          v18 = v21;
        }
        while ( v21 > (unsigned int)v19 );
      }
      v7 = v18;
      v11 = v28;
    }
    v29 = 0;
    v30 = 0;
    if ( v8 )
    {
      v22 = 1;
      while ( 1 )
      {
        v23 = v7 / v22;
        v32 = v31 / v22;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v11 + 312LL))(
                v11,
                v7 / v22,
                &v29,
                &v30);
        v14 = v24;
        if ( v24 < 0 )
          break;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
          McTemplateU0qqqq_EventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&CustomDurationIterationResult,
            v23,
            v32,
            v29,
            v30);
        v25 = -1;
        v26 = -1;
        if ( v29 )
          v26 = v23 - v29;
        v27 = v30;
        if ( v30 )
          v25 = v30 - v23;
        if ( v26 >= v25 )
          v26 = v25;
        else
          v27 = v29;
        if ( v26 <= v32 )
        {
          v4 = v27;
          goto LABEL_17;
        }
        ++v22;
        if ( !v29 || v22 > 5 )
          goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x2EFu, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v11 + 312LL))(
              v11,
              v7,
              &v29,
              &v30);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x2D1u, 0LL);
      }
      else
      {
        v4 = v30;
        v15 = v30 - v7;
        if ( (int)(v30 - v7) < 0 )
          v15 = v7 - v30;
        v16 = v7 - v29;
        v17 = -v16;
        if ( v16 > 0 )
          v17 = v16;
        if ( v17 < v15 )
          v4 = v29;
LABEL_17:
        if ( v14 >= 0 )
        {
          *((_DWORD *)this + 105) = v4;
          return v4;
        }
      }
    }
    *((_DWORD *)this + 106) = 0;
    *((_DWORD *)this + 107) = 0;
    *((_BYTE *)this + 432) = 0;
    return v4;
  }
  return result;
}
