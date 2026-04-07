/*
 * XREFs of ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180038AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800392C0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ??$As@UIVisual2@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual2@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800399FC (--$As@UIVisual2@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009DE70 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009E0E8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CSpriteVisual::Initialize(CSpriteVisual *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  _QWORD *v4; // r12
  __int64 *v5; // rax
  int v6; // ebx
  __int64 (__fastcall *v7)(__int64, _QWORD, HANDLE *); // rdi
  HANDLE v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, char *); // rdi
  char *v12; // r15
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, char *); // rbx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  int v21; // eax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v23)(_QWORD, GUID *, __int64 *); // rbx
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64 *); // rdi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  HANDLE v40; // rcx
  bool v41; // cc
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // [rsp+20h] [rbp-38h] BYREF
  __int64 v65; // [rsp+28h] [rbp-30h] BYREF
  __int64 v66; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v67[8]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  __int64 v69; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v70; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v71; // [rsp+B0h] [rbp+58h] BYREF
  HANDLE hObject; // [rsp+B8h] [rbp+60h] BYREF

  hObject = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 216LL);
  v4 = (_QWORD *)((char *)this + 152);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)this + 19);
  v6 = v3(v2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v5);
  if ( v6 < 0 )
  {
    v57 = 16LL;
    goto LABEL_78;
  }
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v2 + 224LL);
  v8 = hObject;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)v67);
    CloseHandle(v8);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v67);
  }
  hObject = 0LL;
  v6 = v7(v2, *v4, &hObject);
  if ( v6 < 0 )
  {
    v57 = 17LL;
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v57,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v6,
      v64);
    v40 = hObject;
    v41 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_40:
    if ( v41 )
      CloseHandle(v40);
    return (unsigned int)v6;
  }
  v6 = CVisual::InitializeFromSharedHandle(this, hObject);
  if ( v6 < 0 )
  {
    v57 = 22LL;
    goto LABEL_78;
  }
  v69 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v2)(
         v2,
         &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
         &v69);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v9,
      v64);
    v61 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    goto LABEL_39;
  }
  v10 = v69;
  v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v69 + 176LL);
  v12 = (char *)this + 144;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  v13 = v11(v10, (char *)this + 144);
  v6 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v13,
      v64);
    v51 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    goto LABEL_39;
  }
  v71 = 0LL;
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v12;
  v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v12;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
  v16 = v15(v14, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v71);
  v6 = v16;
  if ( v16 < 0 )
  {
    v62 = 31LL;
LABEL_93:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v62,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v16,
      v64);
LABEL_98:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v69);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    return (unsigned int)v6;
  }
  v17 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 20);
  v16 = v17(v2, (char *)this + 160);
  v6 = v16;
  if ( v16 < 0 )
  {
    v62 = 34LL;
    goto LABEL_93;
  }
  v70 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  v19 = **v18;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
  v20 = v19(v18, &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06, &v70);
  v6 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v20,
      v64);
    v37 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    goto LABEL_39;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v70 + 88LL))(
          v70,
          _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
  v6 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v21,
      v64);
    v58 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v59 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v60 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    goto LABEL_39;
  }
  v64 = 0LL;
  v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  v23 = **v22;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
  v24 = v23(v22, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v64);
  v6 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v24,
      v64);
    v47 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v50 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    goto LABEL_39;
  }
  v65 = 0LL;
  v25 = v64;
  v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 360LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
  v27 = v26(v25, &v65);
  v6 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v27,
      v64);
    v52 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    goto LABEL_39;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 72LL))(v65, v71);
  v6 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v28,
      v64);
    v42 = v65;
    if ( v65 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
LABEL_39:
    v40 = hObject;
    v41 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_40;
  }
  v66 = 0LL;
  v29 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual2>(
          (char *)this + 144,
          &v66);
  v6 = v29;
  if ( v29 < 0 )
  {
    v63 = 50LL;
LABEL_97:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v63,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v29,
      v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v66);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
    goto LABEL_98;
  }
  v29 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v66 + 88LL))(
          v66,
          _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
  v6 = v29;
  if ( v29 < 0 )
  {
    v63 = 51LL;
    goto LABEL_97;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(*v4, *((_QWORD *)this + 20));
  v6 = v29;
  if ( v29 < 0 )
  {
    v63 = 54LL;
    goto LABEL_97;
  }
  v30 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
