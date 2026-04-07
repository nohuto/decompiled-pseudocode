/*
 * XREFs of ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x1800472BC
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x1800469F8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CGlobalLightSet::AddNewSharedDistantLightWithType(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v14; // eax
  int v15; // eax
  __int64 (__fastcall **v16)(_QWORD, _QWORD, _QWORD); // rax
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rsi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v35; // [rsp+28h] [rbp-38h] BYREF
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-28h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+48h] [rbp-18h]
  _DWORD Buffer[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v41; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL);
  v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[1])(v8);
  v35 = 0LL;
  v9 = **v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  v10 = v9(v8, &GUID_e42fe149_110c_481f_ba46_d398ccad5c79, &v35);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v10,
      (int)v34);
    v26 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( v8 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  v34 = 0LL;
  v12 = v35;
  v13 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
  v14 = v13(v12, &v34);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v14,
      (int)v34);
    v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v30)[2])(v30);
    }
    v31 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    goto LABEL_37;
  }
  v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v34)[9])(v34, a3);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v15,
      (int)v34);
    v32 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v32)[2])(v32);
    }
    v33 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_37;
  }
  v16 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v34;
  v38 = *a4;
  v39 = *((_DWORD *)a4 + 2);
  v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v16[11])(v34, &v38);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v17,
      (int)v34);
LABEL_40:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v37);
    return v11;
  }
  v36 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
  v19 = **v34;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  v20 = v19(v18, &GUID_41a6d7c2_2e5d_4bc1_b09e_8f0a03e3d8d3, &v36);
  v11 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v20,
      (int)v34);
    v27 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    if ( v34 )
    {
      v34 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v28)[2])(v28);
    }
    v29 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
LABEL_37:
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
    return v11;
  }
  Buffer[1] = 0;
  Buffer[0] = a2;
  v21 = v36;
  v36 = 0LL;
  v41 = v21;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), Buffer, 0x10u, 0LL) )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      (int)v34);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    goto LABEL_40;
  }
  v22 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
  if ( v34 )
  {
    v34 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v23)[2])(v23);
  }
  v24 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
  return 0LL;
}
