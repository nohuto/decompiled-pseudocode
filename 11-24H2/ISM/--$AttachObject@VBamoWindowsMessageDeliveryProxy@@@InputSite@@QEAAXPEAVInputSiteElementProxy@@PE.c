/*
 * XREFs of ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x180056E4C
 * Callers:
 *     ?OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180056CB0 (-OnWindowsMessageDeliveryChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x180037F44 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180038534 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall InputSite::AttachObject<BamoWindowsMessageDeliveryProxy>(__int64 a1, __int64 a2, __int64 a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  char *v6; // rdx
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rdi
  void (__fastcall *v13)(__int64, _OWORD *); // r14
  _OWORD *Transform; // rax
  __int64 v15; // [rsp+20h] [rbp-39h] BYREF
  __int64 v16; // [rsp+28h] [rbp-31h] BYREF
  __int64 v17; // [rsp+30h] [rbp-29h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-21h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-9h] BYREF

  if ( a3 )
  {
    v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a3 + 8);
    v18[1] = a3 + 8;
    if ( a3 != -8 )
      ((void (__fastcall *)(__int64))(*v5)[1])(a3 + 8);
    v17 = a2;
    v18[0] = (__int64)v5;
    if ( v5 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[1])(v5);
    v6 = *(char **)(a1 + 496);
    if ( v6 == *(char **)(a1 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        (char **)(a1 + 488),
        v6,
        &v17);
    }
    else
    {
      *(_QWORD *)v6 = a2;
      v11 = (__int64 *)(v6 + 8);
      *v11 = 0LL;
      if ( v11 != v18 )
      {
        *v11 = (__int64)v5;
        v18[0] = 0LL;
      }
      *(_QWORD *)(a1 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
    v16 = 0LL;
    v7 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    if ( v7(v5, &GUID_fc9627fe_ee9e_4718_b797_19522e5898d2, &v16) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, a1);
    v15 = 0LL;
    v8 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    if ( v8(v5, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, &v15) >= 0 && *(_BYTE *)(a1 + 480) )
    {
      v12 = v15;
      v13 = *(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v15 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(a1 + 48, v19);
      v13(v12, Transform);
    }
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
  }
}
