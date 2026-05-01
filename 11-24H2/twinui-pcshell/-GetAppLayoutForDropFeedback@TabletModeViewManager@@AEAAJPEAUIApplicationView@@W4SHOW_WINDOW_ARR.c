/*
 * XREFs of ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805216E4
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x180521430 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805220E0 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x180077634 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1806C6BC8 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeViewManager::GetAppLayoutForDropFeedback(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  const struct _GUID *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, GUID *, __int64 *); // rdi
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  void *v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v21[40]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a4 = 0LL;
  v20 = 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v9 = v8(v7, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a3 == 1 )
    {
      memset(v21, 0, sizeof(v21));
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 24LL))(v20, v21);
      *(_OWORD *)v21 = *(_OWORD *)&v21[24];
      v19 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      v12 = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)v21, v11, &v19);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x247,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_6:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
        goto LABEL_16;
      }
      v18 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      v13 = CAppLayoutItem::s_CreateInstance_View(a2, 1LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v18);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 586LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        goto LABEL_6;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v18 + 104LL))(v18, 0LL, &v21[24]);
      (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v18 + 104LL))(v18, 1LL, &v21[24]);
      v13 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 224LL))(v19, v18, 0LL, 0LL);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 589LL;
        goto LABEL_9;
      }
      v15 = v19;
      v16 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v19;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      v13 = v16(v15, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v20);
      v10 = v13;
      if ( v13 < 0 )
      {
        v14 = 590LL;
        goto LABEL_9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    *a4 = v20;
    v10 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  return v10;
}
