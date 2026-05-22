/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D42E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x1800CC7B8 (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D038C (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D0B10 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800D18D4 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$_Uhas.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D630C (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceAdded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4)
{
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  const char *v20; // r9
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int *v24; // [rsp+20h] [rbp-3F8h] BYREF
  std::_Ref_count_base *v25; // [rsp+28h] [rbp-3F0h]
  __int64 v26; // [rsp+38h] [rbp-3E0h] BYREF
  std::_Ref_count_base *v27; // [rsp+40h] [rbp-3D8h]
  _BYTE v28[16]; // [rsp+48h] [rbp-3D0h] BYREF
  _BYTE v29[952]; // [rsp+58h] [rbp-3C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+0h]
  unsigned int v31; // [rsp+430h] [rbp+18h] BYREF

  v31 = a3;
  try
  {
    std::make_shared<LegacyDeviceInfo,>(&v24);
    *v24 = v31;
    v24[1] = a2;
    v24[2] = 1548;
    v8 = a4;
    v7 = v29;
    v12 = 7LL;
    v9 = 7LL;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      *(v7 - 1) = v8[7];
      v8 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    v10 = v24 + 149;
    v11 = v29;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      *(v10 - 1) = v11[7];
      v11 += 8;
      --v12;
    }
    while ( v12 );
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v11 + 6);
    std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Try_emplace<unsigned long const &,>(
      (float *)(a1 + 2912),
      (__int64)v28,
      &v31);
    v13 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v26, &v24);
    v14 = *v13;
    *v13 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v14;
    v16 = v13[1];
    v13[1] = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v16;
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(
            *(_QWORD *)(a1 + 16),
            v24,
            *(_QWORD *)(a1 + 24));
    v19 = v17;
    if ( v17 >= 0 )
    {
      if ( RawInputProvidersTracing::IsEnabled(v18) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v22,
          (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Added_(v23, v31, a2, (char *)a4 + 10);
      }
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v17);
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      result = v19;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x353,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v20);
  }
  return result;
}
