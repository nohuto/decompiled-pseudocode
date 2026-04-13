/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004F198
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180048094 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003B984 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180047CE8 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180047EA4 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180047F9C (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ??$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x180048800 (--$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA?AW4HealthEvaluationResult@234@W45234@@Z @ 0x180056CE4 (-ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA-AW4H.c)
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180058E5C (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  const WCHAR *v5; // rdi
  const WCHAR *v6; // rdx
  _DWORD *v7; // rsi
  const WCHAR *v8; // rdx
  _DWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned __int16 v13; // si
  __int16 v14; // si
  const wchar_t *v15; // rax
  _QWORD *v16; // rax
  const wchar_t *v17; // rax
  HKEY v18; // r8
  __int64 v19; // rdx
  char v20; // cl
  char v21; // dl
  const wchar_t *v22; // rax
  _QWORD *v23; // rax
  const wchar_t *v24; // rax
  _QWORD *v25; // rax
  const wchar_t *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  std::_Ref_count_base *v29; // rcx
  LPDWORD pcbData; // [rsp+30h] [rbp-D0h]
  DWORD v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v32; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v33; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v35; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[3]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-80h]
  _QWORD v38[3]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v40[512]; // [rsp+B0h] [rbp-50h] BYREF

  v32 = (const wchar_t *)a2;
  v4 = (_DWORD *)(a1 + 8);
  *(_WORD *)(a1 + 249) = 256;
  v31[0] = 92;
  v5 = (const WCHAR *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 240) < 8uLL )
    v6 = (const WCHAR *)(a1 + 216);
  else
    v6 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v6, 0LL, 8u, 0LL, (PVOID)(a1 + 8), v31) || v31[0] <= 4 || *(_BYTE *)v4 != 4 )
  {
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    memset_0((void *)(a1 + 16), 0, 0x58uLL);
  }
  v7 = (_DWORD *)(a1 + 104);
  *(_WORD *)(a1 + 251) = 256;
  v31[0] = 36;
  if ( *((_QWORD *)v5 + 3) < 8uLL )
    v8 = v5;
  else
    v8 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v8, L"PlacementReported", 8u, 0LL, (PVOID)(a1 + 104), v31)
    || v31[0] <= 4
    || *(_BYTE *)v7 != 4 )
  {
    *v7 = 0;
    *(_BYTE *)v7 = 4;
    *(_OWORD *)(a1 + 112) = 0LL;
    *(_OWORD *)(a1 + 128) = 0LL;
  }
  v9 = (_DWORD *)(a1 + 144);
  *(_WORD *)(a1 + 253) = 256;
  v31[0] = 36;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v5, L"HealthEvaluation", 8u, 0LL, (PVOID)(a1 + 144), v31)
    || v31[0] <= 4
    || *(_BYTE *)v9 != 4 )
  {
    *v9 = 0;
    *(_BYTE *)v9 = 4;
    *(_OWORD *)(a1 + 152) = 0LL;
    *(_OWORD *)(a1 + 168) = 0LL;
  }
  *(_QWORD *)v31 = 0LL;
  GetSystemTimeAsFileTime((LPFILETIME)v31);
  v10 = v31[0] + ((unsigned __int64)v31[1] << 32);
  v11 = *(_QWORD *)(a1 + 152);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  if ( (v12 & 2) != 0 )
    v13 = 2;
  else
    v13 = (v12 & 1) != 0;
  v14 = CreativeFramework::Health::details::BaseScenarioEvents::ResolveHealthResultWithTolerance(a1, v13);
  CreativeFramework::Health::details::HealthTrackingInfo::ToString(a1 + 16, v38);
  LODWORD(pcbData) = *(_DWORD *)(a1 + 136);
  StringCchPrintfW(
    v40,
    0x200uLL,
    (size_t *)L"{ %llu; %llu; %llu; %u }",
    *(_QWORD *)(a1 + 112),
    *(_QWORD *)(a1 + 120),
    *(_QWORD *)(a1 + 128),
    pcbData);
  std::wstring::wstring((__int64)v36);
  v15 = (const wchar_t *)v36;
  if ( v37 >= 8 )
    v15 = (const wchar_t *)v36[0];
  v33 = v15;
  v16 = v38;
  if ( v39 >= 8 )
    v16 = (_QWORD *)v38[0];
  v34 = v16;
  v35 = (_QWORD *)v12;
  LOWORD(v31[0]) = v14;
  v17 = (const wchar_t *)(a1 + 184);
  if ( *(_QWORD *)(a1 + 208) >= 8uLL )
    v17 = *(const wchar_t **)v17;
  v32 = v17;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    &v32,
    (__int16 *)v31,
    (__int64 *)&v35);
  v18 = (HKEY)*(unsigned __int16 *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 152) <= *(_QWORD *)(a1 + 168) || (v19 = *(unsigned __int8 *)(a1 + 177), *(_BYTE *)(a1 + 177)) )
    v19 = 1LL;
  if ( (_WORD)v18 != v14 || !v11 || 864000000000LL * v19 + v11 <= v10 )
  {
    *(_WORD *)(a1 + 160) = v14;
    *(_QWORD *)(a1 + 152) = v10;
    if ( (_WORD)v18 == v14 )
    {
      v20 = *(_BYTE *)(a1 + 177);
      v21 = v20 + 1;
      if ( v20 == -1 )
        v21 = -1;
    }
    else
    {
      v21 = 1;
    }
    *(_BYTE *)(a1 + 177) = v21;
    *(_BYTE *)(a1 + 253) = 1;
    v22 = (const wchar_t *)v36;
    v34 = (_QWORD *)v12;
    LOWORD(v31[0]) = v14;
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( v37 >= 8 )
        v22 = (const wchar_t *)v36[0];
      v32 = v22;
      v23 = v38;
      if ( v39 >= 8 )
        v23 = (_QWORD *)v38[0];
      v35 = v23;
      v24 = (const wchar_t *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v24 = *(const wchar_t **)v24;
      v33 = v24;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        &v33,
        (__int16 *)v31,
        (__int64 *)&v34);
    }
    else
    {
      if ( v37 >= 8 )
        v22 = (const wchar_t *)v36[0];
      v32 = v22;
      v25 = v38;
      if ( v39 >= 8 )
        v25 = (_QWORD *)v38[0];
      v35 = v25;
      v26 = (const wchar_t *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v26 = *(const wchar_t **)v26;
      v33 = v26;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        &v33,
        (__int16 *)v31,
        (__int64 *)&v34);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
    a1,
    (const BYTE *)(a1 + 144),
    v18,
    (_BYTE *)(a1 + 253),
    (_BYTE *)(a1 + 254));
  LOBYTE(v27) = 1;
  std::wstring::_Tidy(v36, v27, 0LL);
  LOBYTE(v28) = 1;
  std::wstring::_Tidy(v38, v28, 0LL);
  v29 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
}
