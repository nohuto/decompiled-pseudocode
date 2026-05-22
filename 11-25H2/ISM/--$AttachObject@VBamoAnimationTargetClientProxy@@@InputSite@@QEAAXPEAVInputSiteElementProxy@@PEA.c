/*
 * XREFs of ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005CAF8
 * Callers:
 *     ?OnAnimationTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005C9A0 (-OnAnimationTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInputSiteTransformClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001C708 (--$As@UIInputSiteTransformClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18003B4B4 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003B994 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003BAA4 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall InputSite::AttachObject<BamoAnimationTargetClientProxy>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  char *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, _OWORD *); // r14
  _OWORD *Transform; // rax
  __int64 v13; // [rsp+20h] [rbp-39h] BYREF
  __int64 v14; // [rsp+28h] [rbp-31h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v18[4]; // [rsp+50h] [rbp-9h] BYREF

  if ( a3 )
  {
    v5 = a3 + 8;
    v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(a3 + 8);
    if ( a3 != -8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(a3 + 8);
    v16 = a2;
    v17[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(char **)(a1 + 496);
    if ( v6 == *(char **)(a1 + 504) )
    {
      std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
        (char **)(a1 + 488),
        v6,
        &v16);
    }
    else
    {
      *(_QWORD *)v6 = a2;
      v9 = (__int64 *)(v6 + 8);
      *v9 = 0LL;
      if ( v9 != v17 )
      {
        *v9 = v5;
        v17[0] = 0LL;
      }
      *(_QWORD *)(a1 + 496) += 16LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
    v14 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v15, &v14) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, a1);
    v13 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v15, &v13) >= 0
      && *(_BYTE *)(a1 + 480) )
    {
      v10 = v13;
      v11 = *(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v13 + 24LL);
      Transform = LegacyInputSinkData::GetTransform(a1 + 48, v18);
      v11(v10, Transform);
    }
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
