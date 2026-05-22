/*
 * XREFs of ??$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoEdgyNotificationSourceClientProxy@@@Z @ 0x18005C1B4
 * Callers:
 *     ?OnEdgyNotificationSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005C060 (-OnEdgyNotificationSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIInputSiteTransformClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001C708 (--$As@UIInputSiteTransformClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?push_back@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAX$$QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x18003B3C4 (-push_back@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003B994 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003BAA4 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall InputSite::AttachObject<BamoEdgyNotificationSourceClientProxy>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _OWORD *); // rdi
  _OWORD *Transform; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-39h] BYREF
  __int64 v10; // [rsp+28h] [rbp-31h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v14[4]; // [rsp+50h] [rbp-9h] BYREF

  if ( a3 )
  {
    v5 = a3 + 8;
    v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(a3 + 8);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v9);
    v12 = a2;
    v13[0] = v5;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v13);
    std::vector<InputSite::AttachedInputObjectEntry>::push_back(a1 + 488, &v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    v11 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(&v9, &v11) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, a1);
    v10 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(&v9, &v10) >= 0 )
    {
      if ( *(_BYTE *)(a1 + 480) )
      {
        v6 = v10;
        v7 = *(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v10 + 24LL);
        Transform = LegacyInputSinkData::GetTransform(a1 + 48, v14);
        v7(v6, Transform);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
}
