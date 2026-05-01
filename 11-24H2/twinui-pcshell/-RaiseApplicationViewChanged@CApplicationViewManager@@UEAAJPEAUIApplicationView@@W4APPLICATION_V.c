/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0
 * Callers:
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002D384 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002D6C0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016DF60 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180189100 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180189C58 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1801B9670 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1801C2CC0 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1801D8A90 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1801D8D30 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801E9010 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::operator() @ 0x18030D0C0 (_lambda_4963465e0f00482d68929271c70599ba_--operator().c)
 *     _lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator() @ 0x18030D1A0 (_lambda_67a01f9610c8ee33e005e0a83cb8b51b_--operator().c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x18030D334 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--operator().c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18030E240 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180025228 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002FC18 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800306C0 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180030930 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800FFCA4 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ??_GRefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1800FFD04 (--_GRefAndObject@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflect.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, LPMALLOC *),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  void **v11; // rax
  void **v12; // rdi
  void **v13; // rsi
  int v14; // edi
  char *v15; // rax
  int *v16; // rax
  char *v17; // rax
  __int64 v18; // rbx
  int v19; // r13d
  __int64 v20; // rsi
  void **v21; // r12
  __int64 v22; // rax
  struct IObjectArray *v23; // rcx
  __int64 v24; // rcx
  int (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v26; // rdi
  __int64 v27; // r9
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r14
  struct IObjectArray *v31; // rcx
  struct IObjectArray *v32; // rcx
  __int64 v33; // rcx
  int (__fastcall ***v34)(_QWORD, _QWORD, _QWORD); // rcx
  struct IObjectArray *v35; // rcx
  unsigned __int64 v37; // r13
  __int64 v38; // rcx
  char *v39; // rdx
  void *v40; // rbx
  HANDLE ProcessHeap; // rax
  void *v42; // rbx
  HANDLE v43; // rax
  void *v44; // rdi
  HANDLE v45; // rax
  int (__fastcall *v46)(_QWORD, GUID *, LPMALLOC *); // rbx
  int v47; // eax
  LPMALLOC v48; // rcx
  __int64 v49; // rdx
  LPMALLOC ppMalloc; // [rsp+20h] [rbp-E0h] BYREF
  struct IObjectArray *v51; // [rsp+28h] [rbp-D8h] BYREF
  char *v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  char v55; // [rsp+50h] [rbp-B0h] BYREF
  int (__fastcall ***v56)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  struct IObjectArray *v59; // [rsp+78h] [rbp-88h] BYREF
  void **v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  char v62; // [rsp+8Ch] [rbp-74h]
  __int128 v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  LPVOID lpMem[2]; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+D8h] [rbp-28h]
  __int128 v70; // [rsp+E8h] [rbp-18h]
  __int128 v71; // [rsp+F8h] [rbp-8h]
  __int128 v72; // [rsp+108h] [rbp+8h]
  __int128 v73; // [rsp+118h] [rbp+18h]
  __int128 v74; // [rsp+128h] [rbp+28h]
  __int128 v75; // [rsp+138h] [rbp+38h]
  __int128 v76; // [rsp+148h] [rbp+48h]
  __int128 v77; // [rsp+158h] [rbp+58h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  __int128 v79; // [rsp+170h] [rbp+70h]
  int v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  int *v82; // [rsp+190h] [rbp+90h]
  char *v83; // [rsp+198h] [rbp+98h]
  _QWORD v84[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v85; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v86; // [rsp+1C0h] [rbp+C0h]
  char v87; // [rsp+1C8h] [rbp+C8h]
  int (__fastcall ***v88)(_QWORD, _QWORD, _QWORD); // [rsp+1D0h] [rbp+D0h]
  unsigned int v89; // [rsp+1D8h] [rbp+D8h]
  __int64 v90; // [rsp+1E0h] [rbp+E0h]
  struct IObjectArray *v91; // [rsp+1E8h] [rbp+E8h]
  void **v92; // [rsp+1F0h] [rbp+F0h] BYREF
  int v93; // [rsp+1F8h] [rbp+F8h] BYREF
  char v94; // [rsp+1FCh] [rbp+FCh]
  __int128 v95; // [rsp+200h] [rbp+100h]
  __int128 v96; // [rsp+210h] [rbp+110h]
  unsigned int v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  void *v99; // [rsp+230h] [rbp+130h]
  char v100; // [rsp+238h] [rbp+138h]
  int v101; // [rsp+240h] [rbp+140h]
  _OWORD v102[9]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v103; // [rsp+2D8h] [rbp+1D8h]
  __int128 v104; // [rsp+2E0h] [rbp+1E0h]
  int v105; // [rsp+2F0h] [rbp+1F0h]
  __int64 v106; // [rsp+2F8h] [rbp+1F8h]
  int *v107; // [rsp+300h] [rbp+200h]
  void *v108; // [rsp+308h] [rbp+208h] BYREF
  _QWORD v109[3]; // [rsp+310h] [rbp+210h] BYREF
  int v110; // [rsp+328h] [rbp+228h]
  _DWORD *v111; // [rsp+330h] [rbp+230h]
  char v112; // [rsp+338h] [rbp+238h]
  void **v113; // [rsp+340h] [rbp+240h] BYREF
  int v114; // [rsp+348h] [rbp+248h] BYREF
  char v115; // [rsp+34Ch] [rbp+24Ch]
  __int128 v116; // [rsp+350h] [rbp+250h]
  __int128 v117; // [rsp+360h] [rbp+260h]
  int v118; // [rsp+370h] [rbp+270h] BYREF
  const char *v119; // [rsp+378h] [rbp+278h]
  void *v120; // [rsp+380h] [rbp+280h]
  char v121; // [rsp+388h] [rbp+288h]
  int v122; // [rsp+390h] [rbp+290h]
  _OWORD v123[9]; // [rsp+398h] [rbp+298h] BYREF
  void *v124; // [rsp+428h] [rbp+328h]
  __int128 v125; // [rsp+430h] [rbp+330h]
  int v126; // [rsp+440h] [rbp+340h]
  __int64 v127; // [rsp+448h] [rbp+348h]
  int *v128; // [rsp+450h] [rbp+350h]
  void *v129[4]; // [rsp+458h] [rbp+358h] BYREF
  int v130; // [rsp+478h] [rbp+378h]
  int *v131; // [rsp+480h] [rbp+380h]
  char v132; // [rsp+488h] [rbp+388h]
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+3E8h]

  v114 = 0;
  v115 = 0;
  v121 = 0;
  v118 = 0;
  v119 = "RaiseApplicationViewChange";
  v120 = 0LL;
  v122 = 0;
  v125 = 0LL;
  memset_0(v123, 0, 0x98uLL);
  v126 = 1;
  v127 = 0LL;
  v128 = &v114;
  v129[0] = 0LL;
  v129[1] = 0LL;
  v129[2] = &v113;
  v129[3] = 0LL;
  v130 = 0;
  v131 = &v118;
  v132 = 0;
  v113 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(&v113, a2, a3, a4);
  v51 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 88), &v51);
  LODWORD(v9) = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    if ( a3 == 7 )
    {
      ppMalloc = 0LL;
      v46 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppMalloc);
      if ( v46(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &ppMalloc) >= 0 )
      {
        v47 = ((__int64 (__fastcall *)(LPMALLOC, _QWORD))ppMalloc->lpVtbl->Free)(ppMalloc, 0LL);
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x270,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v47);
      }
      v48 = ppMalloc;
      if ( ppMalloc )
      {
        ppMalloc = 0LL;
        ((void (__fastcall *)(LPMALLOC))v48->lpVtbl->Release)(v48);
      }
    }
    (*(void (__fastcall **)(_QWORD, int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *), _QWORD))(**(_QWORD **)(a1 + 456)
                                                                                             + 40LL))(
      *(_QWORD *)(a1 + 456),
      a2,
      a3);
    v10 = *(_QWORD *)(a1 + 536);
    if ( a2 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *)))(*a2)[1])(a2);
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v88 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
    v89 = a3;
    v90 = a4;
    v91 = v51;
    if ( v51 )
      ((void (__fastcall *)(struct IObjectArray *))v51->lpVtbl->AddRef)(v51);
    v92 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v93 = 0;
    v94 = 0;
    v100 = 0;
    v97 = 0;
    v98 = 0LL;
    v99 = 0LL;
    v101 = 0;
    v104 = 0LL;
    memset_0(v102, 0, 0x98uLL);
    v105 = 1;
    v106 = 0LL;
    v107 = &v93;
    v108 = 0LL;
    v109[0] = 0LL;
    v109[1] = &v92;
    v109[2] = 0LL;
    v110 = 0;
    v111 = 0LL;
    v112 = 0;
    if ( v129[0] )
    {
      v107 = v128;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        &v108,
        v129);
    }
    else
    {
      v11 = (void **)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 2) = 0;
        *((_BYTE *)v11 + 12) = 0;
        *((_DWORD *)v11 + 2) = v114;
        *((_BYTE *)v11 + 12) = v115;
        *((_OWORD *)v11 + 1) = v116;
        *((_OWORD *)v11 + 2) = v117;
        v114 = 0;
        v115 = 0;
        *((_OWORD *)v11 + 3) = 0LL;
        *((_OWORD *)v11 + 4) = 0LL;
        *((_DWORD *)v11 + 12) = v118;
        v11[7] = (void *)v119;
        v13 = v11 + 8;
        if ( *((_BYTE *)v11 + 72) )
        {
          v40 = *v13;
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v40);
          *((_BYTE *)v12 + 72) = 0;
        }
        *v13 = 0LL;
        *v13 = v120;
        v120 = 0LL;
        *((_BYTE *)v12 + 72) = v121;
        v121 = 0;
        *((_DWORD *)v12 + 20) = v122;
        *(_OWORD *)(v12 + 11) = v123[0];
        *(_OWORD *)(v12 + 13) = v123[1];
        *(_OWORD *)(v12 + 15) = v123[2];
        *(_OWORD *)(v12 + 17) = v123[3];
        *(_OWORD *)(v12 + 19) = v123[4];
        *(_OWORD *)(v12 + 21) = v123[5];
        *(_OWORD *)(v12 + 23) = v123[6];
        *(_OWORD *)(v12 + 25) = v123[7];
        *(_OWORD *)(v12 + 27) = v123[8];
        v12[29] = v124;
        *((_OWORD *)v12 + 15) = v125;
        v125 = 0LL;
        *((_DWORD *)v12 + 64) = v126;
        v12[33] = 0LL;
        if ( v108 && _InterlockedExchangeAdd((volatile signed __int32 *)v108, 0xFFFFFFFF) == 1 && v108 )
          wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v108);
        v108 = v12;
        v107 = (int *)(v12 + 1);
        if ( v129[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v129[0], 0xFFFFFFFF) == 1 && v129[0] )
          wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v129[0]);
        v129[0] = v108;
        if ( v108 )
          _InterlockedIncrement((volatile signed __int32 *)v108);
        v128 = v107;
        v131 = v107 + 10;
      }
    }
    v111 = v107 + 10;
    v92 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v56 = v88;
    v88 = 0LL;
    v57 = v89;
    v58 = v90;
    v90 = 0LL;
    v59 = v91;
    v91 = 0LL;
    v14 = v110;
    v60 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v61 = v93;
    v62 = v94;
    v63 = v95;
    v64 = v96;
    v93 = 0;
    v94 = 0;
    *(_OWORD *)lpMem = 0LL;
    v65 = v97;
    v66 = v98;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) )
    {
      v42 = lpMem[0];
      v43 = GetProcessHeap();
      HeapFree(v43, 0, v42);
    }
    lpMem[0] = v99;
    v99 = 0LL;
    LOBYTE(lpMem[1]) = v100;
    v100 = 0;
    v68 = v101;
    v69 = v102[0];
    v70 = v102[1];
    v71 = v102[2];
    v72 = v102[3];
    v73 = v102[4];
    v74 = v102[5];
    v75 = v102[6];
    v76 = v102[7];
    v77 = v102[8];
    v78 = v103;
    v79 = v104;
    v104 = 0LL;
    v80 = v105;
    v81 = 0LL;
    v15 = (char *)v108;
    v83 = (char *)v108;
    v108 = 0LL;
    v84[0] = 0LL;
    v84[1] = &v60;
    v84[2] = 0LL;
    v85 = 0;
    v86 = 0LL;
    v87 = 0;
    if ( v14 )
    {
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v84);
      v15 = v83;
    }
    if ( v15 )
      v16 = (int *)(v15 + 8);
    else
      v16 = &v61;
    v82 = v16;
    v86 = v16 + 10;
    v107 = &v93;
    if ( v110 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v109);
    v60 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v17 = (char *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = (__int64)v17;
    if ( v17 )
    {
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v17 + 8));
      *(_DWORD *)(v18 + 44) = 1;
      *(_QWORD *)v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
      *(_QWORD *)(v18 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)(v18 + 48) = 0LL;
      if ( (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(v18 + 48) != &v56 )
      {
        *(_QWORD *)(v18 + 48) = v56;
        v56 = 0LL;
      }
      *(_DWORD *)(v18 + 56) = v57;
      *(_QWORD *)(v18 + 64) = 0LL;
      if ( (__int64 *)(v18 + 64) != &v58 )
      {
        *(_QWORD *)(v18 + 64) = v58;
        v58 = 0LL;
      }
      *(_QWORD *)(v18 + 72) = 0LL;
      if ( (struct IObjectArray **)(v18 + 72) != &v59 )
      {
        *(_QWORD *)(v18 + 72) = v59;
        v59 = 0LL;
      }
      v19 = v85;
      *(_QWORD *)(v18 + 80) = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      v20 = v18 + 88;
      *(_DWORD *)(v18 + 88) = 0;
      *(_BYTE *)(v18 + 92) = 0;
      *(_DWORD *)(v18 + 88) = v61;
      *(_BYTE *)(v18 + 92) = v62;
      *(_OWORD *)(v18 + 96) = v63;
      *(_OWORD *)(v18 + 112) = v64;
      v61 = 0;
      v62 = 0;
      *(_OWORD *)(v18 + 128) = 0LL;
      *(_OWORD *)(v18 + 144) = 0LL;
      *(_DWORD *)(v18 + 128) = v65;
      *(_QWORD *)(v18 + 136) = v66;
      v21 = (void **)(v18 + 144);
      if ( *(_BYTE *)(v18 + 152) )
      {
        v44 = *v21;
        v45 = GetProcessHeap();
        HeapFree(v45, 0, v44);
        *(_BYTE *)(v18 + 152) = 0;
      }
      *v21 = 0LL;
      *v21 = lpMem[0];
      lpMem[0] = 0LL;
      *(_BYTE *)(v18 + 152) = lpMem[1];
      LOBYTE(lpMem[1]) = 0;
      *(_DWORD *)(v18 + 160) = v68;
      *(_OWORD *)(v18 + 168) = v69;
      *(_OWORD *)(v18 + 184) = v70;
      *(_OWORD *)(v18 + 200) = v71;
      *(_OWORD *)(v18 + 216) = v72;
      *(_OWORD *)(v18 + 232) = v73;
      *(_OWORD *)(v18 + 248) = v74;
      *(_OWORD *)(v18 + 264) = v75;
      *(_OWORD *)(v18 + 280) = v76;
      *(_OWORD *)(v18 + 296) = v77;
      *(_QWORD *)(v18 + 312) = v78;
      *(_OWORD *)(v18 + 320) = v79;
      v79 = 0LL;
      *(_DWORD *)(v18 + 336) = v80;
      *(_QWORD *)(v18 + 344) = 0LL;
      *(_QWORD *)(v18 + 360) = v83;
      v83 = 0LL;
      *(_QWORD *)(v18 + 368) = 0LL;
      *(_QWORD *)(v18 + 376) = v18 + 80;
      *(_QWORD *)(v18 + 384) = 0LL;
      *(_DWORD *)(v18 + 392) = 0;
      *(_QWORD *)(v18 + 400) = 0LL;
      *(_BYTE *)(v18 + 408) = 0;
      if ( v19 )
        wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(v18 + 368));
      v22 = *(_QWORD *)(v18 + 360);
      if ( v22 )
        v20 = v22 + 8;
      *(_QWORD *)(v18 + 352) = v20;
      *(_QWORD *)(v18 + 400) = v20 + 40;
      v82 = &v61;
      if ( v85 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v84);
      *(_QWORD *)(v18 + 80) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
      *(_QWORD *)v18 = off_18070BA50;
      *(_QWORD *)(v18 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    }
    else
    {
      v18 = 0LL;
    }
    v52 = (char *)v18;
    v54 = v18;
    ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v60);
    v23 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v23->lpVtbl->Release)(v23);
    }
    v24 = v58;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v25)[2])(v25);
    }
    if ( !v18 )
    {
      LODWORD(v9) = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)0x8007000ELL);
LABEL_68:
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v92);
      v32 = v91;
      if ( v91 )
      {
        v91 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v32->lpVtbl->Release)(v32);
      }
      v33 = v90;
      if ( v90 )
      {
        v90 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v34)[2])(v34);
      }
      if ( (v9 & 0x80000000) != 0LL )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28A,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
      }
      else
      {
        v35 = v51;
        if ( v51 )
        {
          v51 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v35->lpVtbl->Release)(v35);
        }
        LODWORD(v9) = 0;
      }
      goto LABEL_78;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(v10 + 80));
    v53 = v10 + 80;
    if ( !*(_QWORD *)(v10 + 40) )
    {
      LODWORD(v9) = -2147467260;
      v49 = 105LL;
      goto LABEL_116;
    }
    v26 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    LODWORD(v9) = 0;
    v27 = *(_QWORD *)(v10 + 56);
    v28 = *(_QWORD *)(v10 + 72);
    if ( v27 != v28 )
      goto LABEL_91;
    v29 = v27 + 1;
    LODWORD(v9) = -2147024774;
    if ( v29 > 0xFFFFFFFE || (v9 = 0LL, v29 <= v28) )
    {
      if ( (v9 & 0x80000000) == 0LL )
      {
LABEL_91:
        v38 = *(_QWORD *)(v10 + 56);
        *(_QWORD *)(v10 + 56) = v38 + 1;
        v39 = (char *)(*(_QWORD *)(v10 + 48) + 8 * v38);
        if ( v39 )
        {
          *(_QWORD *)v39 = 0LL;
          if ( v39 != &v55 )
          {
            *(_QWORD *)v39 = v18;
            v26 = 0LL;
          }
        }
      }
    }
    else
    {
      v30 = 2 * v28;
      if ( is_mul_ok(v28, 2uLL) )
      {
        if ( v28 > 0x1000 )
          v30 = v28 + 4096;
        if ( v29 <= v30 )
        {
          if ( v30 > 0xFFFFFFFE )
            v30 = 4294967294LL;
        }
        else
        {
          v30 = v29;
        }
        v37 = 8 * v30;
        if ( is_mul_ok(v30, 8uLL) )
        {
          v52 = (char *)CoTaskMemRealloc(*(LPVOID *)(v10 + 48), 8 * v30);
          if ( v52 )
          {
            ppMalloc = 0LL;
            if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
            {
              v9 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v52);
              ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
            }
            if ( v9 > v37 )
              memset_0(&v52[v37], 0, v9 - v37);
            LODWORD(v9) = 0;
            *(_QWORD *)(v10 + 72) = v30;
            *(_QWORD *)(v10 + 48) = v52;
            goto LABEL_91;
          }
          LODWORD(v9) = -2147024882;
        }
        else
        {
          LODWORD(v9) = -2147024362;
          v18 = (__int64)v52;
        }
      }
      else
      {
        LODWORD(v9) = -2147024362;
      }
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( (v9 & 0x80000000) == 0LL )
    {
      PostMessageW(*(HWND *)(v10 + 40), 0x401u, 0LL, 0LL);
      if ( v10 != -80 )
        ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 80));
      LODWORD(v9) = 0;
      goto LABEL_66;
    }
    v49 = 106LL;
LABEL_116:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v53);
LABEL_66:
    if ( (v9 & 0x80000000) != 0LL )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      LODWORD(v9) = 0;
    }
    goto LABEL_68;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x268,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)CallbackArray);
  v31 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v31->lpVtbl->Release)(v31);
  }
LABEL_78:
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v113);
  return (unsigned int)v9;
}
