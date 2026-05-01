/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x180434290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EEABC (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18043382C (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v2; // rcx
  int v3; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  bool v8; // di
  WindowWrapper *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int *v12; // r14
  __int64 v13; // r8
  int v14; // eax
  WindowWrapper *v15; // rdi
  _QWORD *v16; // rax
  __int64 **v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  WindowWrapper *v21; // r15
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r8
  int v25; // eax
  int v26; // edx
  unsigned int *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  int v33; // eax
  int v34; // edx
  unsigned int *v35; // rsi
  _QWORD *v36; // rax
  _QWORD *v37; // rax
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
  int v48; // edx
  int v49; // eax
  __int128 v50; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v52; // [rsp+60h] [rbp+30h] BYREF
  __int64 v53; // [rsp+68h] [rbp+38h] BYREF
  __int64 v54; // [rsp+70h] [rbp+40h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = 0LL;
  v52 = 0LL;
  v3 = *((_DWORD *)this + 126);
  if ( (*((_BYTE *)this + 640) & 1) != (v3 & 1) )
  {
    v52 = 0LL;
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                     *((_QWORD *)this + 35),
                     &v54);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v53);
    LOBYTE(v6) = v3 & 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 128LL))(
           *v5,
           *((unsigned int *)this + 88),
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v7,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v3 = *((_DWORD *)this + 126);
    v2 = v52;
  }
  v8 = (v3 & 2) != 0;
  v9 = (WindowWrapper *)((char *)this - 8);
  if ( ((*((_DWORD *)this + 160) & 2) != 0) == v8 )
  {
    v12 = (unsigned int *)((char *)this + 352);
    v15 = (WindowWrapper *)((char *)this - 8);
  }
  else
  {
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, &v53);
    v12 = (unsigned int *)((char *)this + 352);
    LOBYTE(v13) = v8;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v11 + 136LL))(
            *v11,
            *((unsigned int *)this + 88),
            v13);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x107,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v14,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v15 = (WindowWrapper *)((char *)this - 8);
    v2 = v52;
  }
  if ( *((float *)this + 154) != *((float *)this + 118)
    || *((float *)this + 155) != *((float *)this + 119)
    || *((float *)this + 156) != *((float *)this + 120)
    || *((float *)this + 157) != *((float *)this + 121) )
  {
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v17 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v16 + 40LL))(*v16, &v53);
    v18 = *v17;
    v19 = **v17;
    v12 = (unsigned int *)((char *)this + 352);
    v50 = *(_OWORD *)((char *)this + 472);
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v19 + 176))(
            v18,
            *((unsigned int *)this + 88),
            &v50);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x110,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v20,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v9 = (WindowWrapper *)((char *)this - 8);
    v15 = (WindowWrapper *)((char *)this - 8);
    v2 = v52;
  }
  if ( *((_DWORD *)this + 128) != *((_DWORD *)this + 162) )
  {
    v52 = 0LL;
    v21 = v9;
    if ( v2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      v21 = v15;
    }
    WindowWrapper::GetBatch(v9, &v52);
    v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v22 + 40LL))(*v22, &v53);
    LOBYTE(v24) = *((_BYTE *)this + 512);
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v23 + 192LL))(*v23, *v12, v24);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v25,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v9 = v21;
    v12 = (unsigned int *)((char *)this + 352);
    v2 = v52;
  }
  v26 = *((_DWORD *)this + 129);
  v27 = v12;
  if ( v26 != *((_DWORD *)this + 163) )
  {
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_41;
      v52 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v9, &v52);
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v54);
      v29 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v28 + 40LL))(*v28, &v53);
      v27 = (unsigned int *)((char *)this + 352);
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v29 + 160LL))(
              *v29,
              *((unsigned int *)this + 88),
              1LL);
      if ( v30 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x126,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v30,
          v50);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    }
    else
    {
      v52 = 0LL;
      if ( v2 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
      WindowWrapper::GetBatch(v9, &v52);
      v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v54);
      v32 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v31 + 40LL))(*v31, &v53);
      v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v32 + 160LL))(*v32, *v12, 0LL);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x120,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v33,
          v50);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
      v27 = (unsigned int *)((char *)this + 352);
    }
    v2 = v52;
  }
LABEL_41:
  v34 = *((_DWORD *)this + 131);
  v35 = v27;
  if ( v34 == *((_DWORD *)this + 165) )
    goto LABEL_55;
  if ( v34 )
  {
    if ( v34 != 1 )
      goto LABEL_55;
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v36 + 40LL))(*v36, &v53);
    v35 = (unsigned int *)((char *)this + 352);
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v37 + 144LL))(
            *v37,
            *((unsigned int *)this + 88),
            2LL);
    if ( v38 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v38,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
  }
  else
  {
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v39 + 40LL))(*v39, &v53);
    v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v40 + 144LL))(*v40, *v27, 1LL);
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x135,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v41,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v35 = (unsigned int *)((char *)this + 352);
  }
  v2 = v52;
LABEL_55:
  if ( *((_DWORD *)this + 132) != *((_DWORD *)this + 166) )
  {
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v42 + 40LL))(*v42, &v53);
    v35 = (unsigned int *)((char *)this + 352);
    v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v43 + 224LL))(
            *v43,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 132));
    if ( v44 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v44,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v2 = v52;
  }
  if ( *((_DWORD *)this + 164) != *((_DWORD *)this + 130) )
  {
    v52 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 16LL))(v2);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v52);
    v45 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v54);
    v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v45 + 40LL))(*v45, &v53);
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v46 + 208LL))(
            *v46,
            *v35,
            *((unsigned int *)this + 130));
    if ( v47 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v47,
        v50);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
    v2 = v52;
  }
  v48 = *((_DWORD *)this + 133);
  if ( v48 != *((_DWORD *)this + 167) )
  {
    PushWindowTransparencyModeToWindow((HWND)*((int *)this + 74), v48, *((_DWORD *)this + 153));
    v2 = v52;
  }
  if ( v2 )
  {
    v49 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v49 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x157,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v49,
        v50);
  }
  *(_OWORD *)((char *)this + 632) = *((_OWORD *)this + 31);
  *(_OWORD *)((char *)this + 648) = *((_OWORD *)this + 32);
  *((_QWORD *)this + 83) = *((_QWORD *)this + 66);
  *(_OWORD *)((char *)this + 616) = *(_OWORD *)((char *)this + 472);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v52);
}
