/*
 * XREFs of ?PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18014D32C
 * Callers:
 *     ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x1801F1690 (-v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ.c)
 *     ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180224820 (-PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@Applicati.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18014DD28 (-GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Intern.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EEABC (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapper::PushBoundsToAppView(__int64 a1, int a2)
{
  __int64 v2; // rbx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v4; // rcx
  char v5; // si
  bool v6; // si
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rax
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // edx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  int v30; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r8
  int v34; // eax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // r8
  int v38; // eax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  int v44; // eax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  int v50; // eax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  int v53; // eax
  int v54; // [rsp+20h] [rbp-20h]
  __int128 v55; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v57; // [rsp+60h] [rbp+20h] BYREF
  __int64 v58; // [rsp+70h] [rbp+30h] BYREF
  __int64 v59; // [rsp+78h] [rbp+38h] BYREF

  v2 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  if ( !(_DWORD)v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)0x80070490LL,
      v54);
  v4 = 0LL;
  v57 = 0LL;
  v5 = *(_BYTE *)(a1 + 512) & 1;
  if ( (*(_BYTE *)(a1 + 656) & 1) != v5 )
  {
    v57 = 0LL;
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v27 + 40LL))(*v27, &v58);
    LOBYTE(v29) = v5;
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v28 + 64LL))(*v28, (unsigned int)v2, v29);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v30,
        v54);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    v4 = v57;
  }
  v6 = (*(_DWORD *)(a1 + 512) & 2) != 0;
  if ( ((*(_DWORD *)(a1 + 656) & 2) != 0) != v6 )
  {
    v57 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v31 + 40LL))(*v31, &v58);
    LOBYTE(v33) = v6;
    v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v32 + 72LL))(*v32, (unsigned int)v2, v33);
    if ( v34 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v34,
        v54);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
    v4 = v57;
  }
  if ( *(float *)(a1 + 632) != *(float *)(a1 + 480)
    || *(float *)(a1 + 636) != *(float *)(a1 + 484)
    || *(float *)(a1 + 640) != *(float *)(a1 + 488)
    || *(float *)(a1 + 644) != *(float *)(a1 + 492) )
  {
    v7 = 0LL;
    v57 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      v7 = v57;
    }
    if ( !v7 && *(_DWORD *)(a1 + 304) )
    {
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                       *(_QWORD *)(a1 + 288),
                       &v59);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 40LL))(*v8, &v58);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v9 + 56LL))(
              *v9,
              *(unsigned int *)(a1 + 304),
              0LL,
              &v57);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v10,
          v54);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v12 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL))(*v11, &v58);
    v13 = *v12;
    v14 = **v12;
    v55 = *(_OWORD *)(a1 + 480);
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v14 + 104))(v13, (unsigned int)v2, &v55);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x138,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v15,
        v54);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    v4 = v57;
  }
  if ( *(_DWORD *)(a1 + 520) != *(_DWORD *)(a1 + 664) )
  {
    v57 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v35 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v35 + 40LL))(*v35, &v58);
    LOBYTE(v37) = *(_BYTE *)(a1 + 520);
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v36 + 120LL))(*v36, (unsigned int)v2, v37);
    if ( v38 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v38,
        v54);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
    v4 = v57;
  }
  v16 = *(_DWORD *)(a1 + 524);
  if ( v16 != *(_DWORD *)(a1 + 668) )
  {
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_25;
      v57 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
      v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v59);
      v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v39 + 40LL))(*v39, &v58);
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v40 + 88LL))(*v40, (unsigned int)v2, 1LL);
      if ( v41 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x14E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v41,
          v54);
    }
    else
    {
      v57 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
      v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v59);
      v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v42 + 40LL))(*v42, &v58);
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v43 + 88LL))(*v43, (unsigned int)v2, 0LL);
      if ( v44 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x148,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v44,
          v54);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
    v4 = v57;
  }
LABEL_25:
  v17 = *(_DWORD *)(a1 + 532);
  if ( v17 == *(_DWORD *)(a1 + 676) )
    goto LABEL_26;
  if ( v17 )
  {
    if ( v17 != 1 )
      goto LABEL_26;
    v57 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v45 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v45 + 40LL))(*v45, &v58);
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v46 + 80LL))(*v46, (unsigned int)v2, 2LL);
    if ( v47 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v47,
        v54);
  }
  else
  {
    v57 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v49 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v48 + 40LL))(*v48, &v58);
    v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v49 + 80LL))(*v49, (unsigned int)v2, 1LL);
    if ( v50 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v50,
        v54);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
  v4 = v57;
LABEL_26:
  if ( *(_DWORD *)(a1 + 536) != *(_DWORD *)(a1 + 680) )
  {
    v18 = 0LL;
    v57 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      v18 = v57;
    }
    if ( !v18 && *(_DWORD *)(a1 + 304) )
    {
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v59);
      v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v19 + 40LL))(*v19, &v58);
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v20 + 56LL))(
              *v20,
              *(unsigned int *)(a1 + 304),
              0LL,
              &v57);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v21,
          v54);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v22 + 40LL))(*v22, &v58);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v23 + 208LL))(
            *v23,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 536));
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v24,
        v54);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    v4 = v57;
  }
  if ( *(_DWORD *)(a1 + 672) != *(_DWORD *)(a1 + 528) )
  {
    v57 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v57);
    v51 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v59);
    v52 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v51 + 40LL))(*v51, &v58);
    v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v52 + 176LL))(
            *v52,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 528));
    if ( v53 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x174,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v53,
        v54);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
    v4 = v57;
  }
  v25 = *(unsigned int *)(a1 + 540);
  if ( (_DWORD)v25 != *(_DWORD *)(a1 + 684) )
  {
    PushWindowTransparencyModeToWindow(v2, v25, *(unsigned int *)(a1 + 628));
    v4 = v57;
  }
  if ( v4 )
  {
    v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 56LL))(v4);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v26,
        v54);
    v4 = v57;
  }
  *(_OWORD *)(a1 + 648) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(a1 + 664) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(a1 + 680) = *(_QWORD *)(a1 + 536);
  *(_OWORD *)(a1 + 632) = *(_OWORD *)(a1 + 480);
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
}
