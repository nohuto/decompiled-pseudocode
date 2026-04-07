/*
 * XREFs of ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18002CAFC
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18002C4BC (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800200CC (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002CDC0 (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002D098 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CGlobalLightSet::AddNewSharedDistantLightWithType(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v13; // eax
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rsi
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, __int64, HANDLE *); // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  HANDLE v26; // rcx
  bool v27; // cc
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v29; // [rsp+28h] [rbp-48h] BYREF
  HANDLE hObject; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  __int64 v32[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  int v34; // [rsp+58h] [rbp-18h]
  int Buffer; // [rsp+60h] [rbp-10h] BYREF
  __int64 v36; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v6 = a2;
  v8 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v32[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v31 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         v32,
         &v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v9,
      (int)v28);
    goto LABEL_14;
  }
  v28 = 0LL;
  v11 = v31;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v31 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  v13 = v12(v11, &v28);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 89LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v13,
      (int)v28);
LABEL_21:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    goto LABEL_14;
  }
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v28)[9])(v28, a3);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 90LL;
    goto LABEL_18;
  }
  v14 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v28;
  v33 = *a4;
  v34 = *((_DWORD *)a4 + 2);
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v14[11])(v28, &v33);
  v10 = v13;
  if ( v13 < 0 )
  {
    v23 = 91LL;
    goto LABEL_18;
  }
  v29 = 0LL;
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
  v16 = **v28;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v29);
  v17 = v16(v15, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, &v29);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v17,
      (int)v28);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v29);
    goto LABEL_21;
  }
  hObject = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v8 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v19 = v18(v8, v29, &hObject);
  v10 = v19;
  if ( v19 < 0 )
  {
    v24 = (unsigned int)v19;
    v25 = 99LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v24,
      (int)v28);
    v26 = hObject;
    v27 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_27;
  }
  v20 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v6, hObject);
  v10 = v20 | 0x10000000;
  if ( v20 < 0 )
  {
    v24 = v10;
    v25 = 100LL;
    goto LABEL_25;
  }
  Buffer = v6;
  v21 = v29;
  v29 = 0LL;
  v36 = v21;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      (int)v28);
    v26 = hObject;
    v27 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_27:
    if ( v27 )
      CloseHandle(v26);
    goto LABEL_20;
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  v10 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
  return v10;
}
