/*
 * XREFs of ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@@Z @ 0x18002C6C8
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18002C4BC (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800200CC (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002CD64 (--$As@UICompositionLight@Composition@UI@Windows@@@-$ComPtr@UISpotLight@Composition@UI@Windows@@@.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002CDC0 (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002D098 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CGlobalLightSet::AddNewRevealSpotLightWithType(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rsi
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, __int64, HANDLE *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  HANDLE v22; // rcx
  bool v23; // cc
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  HANDLE hObject; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  int Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v28 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v27 = 0LL;
  v7 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         &v28,
         &v27);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7,
      v24);
    goto LABEL_21;
  }
  v24 = 0LL;
  v9 = v27;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  v11 = v10(v9, &v24);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 200LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 72LL))(v24, a3);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 201LL;
    goto LABEL_31;
  }
  if ( (_DWORD)v4 != 1 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      v8 = -2147024809;
      v19 = 2147942487LL;
      v18 = 225LL;
      goto LABEL_33;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
    v8 = v11;
    if ( v11 < 0 )
    {
      v18 = 216LL;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 152LL))(v24);
      v8 = v11;
      if ( v11 < 0 )
      {
        v18 = 217LL;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL))(v24);
        v8 = v11;
        if ( v11 < 0 )
        {
          v18 = 218LL;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 136LL))(v24, 0xFFFFFFFFLL);
          v8 = v11;
          if ( v11 < 0 )
          {
            v18 = 219LL;
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 200LL))(v24);
            v8 = v11;
            if ( v11 < 0 )
            {
              v18 = 220LL;
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 216LL))(v24, 0xFFFFFFFFLL);
              v8 = v11;
              if ( v11 >= 0 )
                goto LABEL_14;
              v18 = 221LL;
            }
          }
        }
      }
    }
LABEL_31:
    v19 = (unsigned int)v11;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v19,
      v24);
LABEL_36:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 207LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 152LL))(v24);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 208LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL))(v24);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 209LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 136LL))(v24, 0xFFFFFFFFLL);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 210LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 200LL))(v24);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 211LL;
    goto LABEL_31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 216LL))(v24, 0xFFFFFFFFLL);
  v8 = v11;
  if ( v11 < 0 )
  {
    v18 = 212LL;
    goto LABEL_31;
  }
LABEL_14:
  v25 = 0LL;
  v12 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpotLight>::As<Windows::UI::Composition::ICompositionLight>(
          &v24,
          &v25);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v12,
      v24);
LABEL_35:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v25);
    goto LABEL_36;
  }
  hObject = 0LL;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v6 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v14 = v13(v6, v25, &hObject);
  v8 = v14;
  if ( v14 < 0 )
  {
    v20 = (unsigned int)v14;
    v21 = 234LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v20,
      v24);
    v22 = hObject;
    v23 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_53;
  }
  v15 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v4, hObject);
  v8 = v15 | 0x10000000;
  if ( v15 < 0 )
  {
    v20 = v8;
    v21 = 235LL;
    goto LABEL_51;
  }
  Buffer = v4;
  v16 = v25;
  v25 = 0LL;
  v30 = v16;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      v24);
    v22 = hObject;
    v23 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_53:
    if ( v23 )
      CloseHandle(v22);
    goto LABEL_35;
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  v8 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  return v8;
}
