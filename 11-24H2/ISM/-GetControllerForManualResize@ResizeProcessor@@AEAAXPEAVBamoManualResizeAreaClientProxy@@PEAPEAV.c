/*
 * XREFs of ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180150D3C
 * Callers:
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180152448 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800238F0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18002DA20 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ??$As@UIManualResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003865C (--$As@UIManualResizeAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D664 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063F10 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?_Tidy@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ @ 0x180065F30 (-_Tidy@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800A8B18 (--0-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014FA48 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ResizeProcessor::GetControllerForManualResize(
        ResizeProcessor *this,
        struct BamoManualResizeAreaClientProxy *a2,
        struct BamoResizeControllerClientProxy **a3,
        struct InputSite **a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  struct BamoManualResizeAreaClientProxy *v16; // rbx
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rsi
  __int64 (__fastcall *v18)(struct IInputSiteHierarchyManager *, _BYTE *, _QWORD); // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 *i; // rdi
  struct BamoResizeControllerClientProxy *v22; // rbx
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _BYTE v26[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  _QWORD v29[3]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v30[32]; // [rsp+60h] [rbp-20h] BYREF
  struct BamoResizeControllerClientProxy *v31; // [rsp+C0h] [rbp+40h] BYREF
  struct BamoManualResizeAreaClientProxy *v32; // [rsp+D0h] [rbp+50h]

  v31 = this;
  *a3 = 0LL;
  *a4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  std::vector<InputSite *>::vector<InputSite *>(v29, (__int64)InputSiteManager + 56);
  v8 = (__int64 *)v29[0];
  v9 = (__int64 *)v29[1];
  while ( v8 != v9 )
  {
    v10 = *v8;
    v11 = 0LL;
    v31 = 0LL;
    v12 = *(_QWORD *)(v10 + 488);
    v13 = *(_QWORD *)(v10 + 496);
    if ( v12 != v13 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualResizeAreaClientProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                    (__int64 *)&v31) >= 0 )
          break;
        v12 += 16LL;
      }
      while ( v12 != v13 );
      v11 = (__int64)v31;
    }
    v14 = v11 - 8;
    v15 = -v11;
    v16 = (struct BamoManualResizeAreaClientProxy *)(v14 & -(__int64)(v15 != 0));
    v32 = v16;
    if ( v16 )
      (**(void (__fastcall ***)(__int64))v16)(v14 & -(__int64)(v15 != 0));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    if ( v16 && v16 == a2 )
    {
      InputSite::GetIdForNamespace(*v8, (__int64)v26, 0);
      InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
      v18 = *(__int64 (__fastcall **)(struct IInputSiteHierarchyManager *, _BYTE *, _QWORD))(*(_QWORD *)InputSiteHierarchyManager
                                                                                           + 24LL);
      v19 = (_QWORD *)std::optional<unsigned __int64>::value((__int64)v26);
      v20 = v18(InputSiteHierarchyManager, v30, *v19);
      if ( &v27 != (__int128 *)v20 )
      {
        std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v27);
        v27 = *(_OWORD *)v20;
        v28 = *(_QWORD *)(v20 + 16);
        *(_QWORD *)v20 = 0LL;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = 0LL;
      }
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v30);
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v16 + 8LL))(v16);
      break;
    }
    if ( v16 )
      (*(void (__fastcall **)(struct BamoManualResizeAreaClientProxy *))(*(_QWORD *)v16 + 8LL))(v16);
    ++v8;
  }
  for ( i = (__int64 *)v27; i != *((__int64 **)&v27 + 1); ++i )
  {
    InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*i, (__int64 *)&v31);
    v22 = v31;
    if ( v31 )
    {
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
      v24 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v22 + 1) + 64LL))((__int64)v22 + 8);
      v25 = *v24 - *v23;
      if ( *v24 == *v23 )
        v25 = v24[1] - v23[1];
      if ( !v25 )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v31);
        *a3 = v22;
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(i);
        *a4 = (struct InputSite *)*i;
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v31);
        break;
      }
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v31);
  }
  std::vector<InputSite *>::_Tidy((__int64)v29);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v27);
}
