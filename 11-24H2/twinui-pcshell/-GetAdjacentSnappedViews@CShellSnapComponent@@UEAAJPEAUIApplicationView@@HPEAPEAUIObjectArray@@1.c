/*
 * XREFs of ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180090660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18004C99C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180090D50 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801DD530 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CShellSnapComponent::GetAdjacentSnappedViews(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        int a3,
        struct IObjectArray **a4,
        struct IObjectArray **a5)
{
  int Instance; // eax
  int v9; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  const struct _GUID *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  const struct _GUID *v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  struct IImmersiveMonitor *v25; // rdx
  int v26; // r14d
  __int64 *v27; // r15
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r8
  bool v31; // r9
  void *v32; // rbx
  __int64 (__fastcall *v33)(void *, _QWORD); // rsi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  bool v37; // cc
  void *v38; // rbx
  __int64 (__fastcall *v39)(void *, _QWORD); // rsi
  _QWORD *v40; // rax
  int v41; // [rsp+20h] [rbp-B1h]
  void *v42; // [rsp+30h] [rbp-A1h] BYREF
  void *v43; // [rsp+38h] [rbp-99h] BYREF
  SnapRectHelpers *v44; // [rsp+40h] [rbp-91h] BYREF
  __int64 v45; // [rsp+48h] [rbp-89h] BYREF
  int v46; // [rsp+50h] [rbp-81h]
  __int64 *v47; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-71h]
  __int64 v49; // [rsp+68h] [rbp-69h]
  __int64 v50; // [rsp+70h] [rbp-61h]
  int v51; // [rsp+78h] [rbp-59h]
  int v52; // [rsp+7Ch] [rbp-55h]
  int v53; // [rsp+80h] [rbp-51h]
  int v54; // [rsp+84h] [rbp-4Dh]
  unsigned int v55; // [rsp+88h] [rbp-49h]
  unsigned int v56; // [rsp+8Ch] [rbp-45h]
  unsigned int v57; // [rsp+90h] [rbp-41h]
  unsigned int v58; // [rsp+94h] [rbp-3Dh]
  __int64 v59; // [rsp+98h] [rbp-39h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-29h] BYREF
  __int64 *i; // [rsp+B0h] [rbp-21h]
  __int128 v63; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-9h] BYREF
  int v65; // [rsp+D8h] [rbp+7h] BYREF
  int v66; // [rsp+DCh] [rbp+Bh]
  unsigned int v67; // [rsp+E0h] [rbp+Fh]
  int v68; // [rsp+E4h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v46 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v45 = 0LL;
  Instance = CSnappedWindowModel_CreateInstance(0LL, *((_QWORD *)this + 13), *((_QWORD *)this + 12), 1LL);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)v9;
  }
  v11 = *(_QWORD *)a2;
  v44 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, SnapRectHelpers **))(v11 + 80))(a2, &v44);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12);
LABEL_72:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    return (unsigned int)v9;
  }
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, SnapRectHelpers *, __int64 **))(*(_QWORD *)v45 + 24LL))(v45, v44, &v47);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v13);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v47);
    if ( v44 )
      (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    return (unsigned int)v9;
  }
  v42 = 0LL;
  v16 = CEnumerableObjectCollection::CreateInstance(v15, v14, &v42);
  v9 = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 721LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v17);
LABEL_71:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v42);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v47);
    goto LABEL_72;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v42)(
         v42,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a4) < 0 )
  {
    v9 = -2147467261;
    v17 = 2147500035LL;
    v18 = 722LL;
    goto LABEL_14;
  }
  v43 = 0LL;
  v21 = CEnumerableObjectCollection::CreateInstance(v20, v19, &v43);
  v9 = v21;
  if ( v21 < 0 )
  {
    v22 = 725LL;
LABEL_19:
    v23 = (unsigned int)v21;
    goto LABEL_20;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v43)(
         v43,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a5) < 0 )
  {
    v9 = -2147467261;
    v23 = 2147500035LL;
    v22 = 726LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v23);
LABEL_70:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    goto LABEL_71;
  }
  if ( v48 < 2 )
  {
    if ( v43 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
    if ( v42 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v47);
    if ( v44 )
      (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v44 + 16LL))(v44);
    goto LABEL_86;
  }
  LOBYTE(v24) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
    &`wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    v24);
  if ( *((_QWORD *)this + 58) )
  {
    v64 = 0LL;
    v21 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v44 + 88LL))(v44, &v64);
    v9 = v21;
    if ( v21 < 0 )
    {
      v22 = 739LL;
      goto LABEL_19;
    }
    v63 = 0LL;
    v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v63);
    v9 = v21;
    if ( v21 < 0 )
    {
      v22 = 742LL;
      goto LABEL_19;
    }
    v26 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v44, v25);
    v27 = v47;
    v28 = &v47[v48];
    for ( i = v28; ; v28 = i )
    {
      if ( v27 == v28 )
      {
        if ( v43 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
        if ( v42 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
        CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v47);
        if ( v44 )
          (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v44 + 16LL))(v44);
        goto LABEL_86;
      }
      v29 = *v27;
      v59 = v29;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v29 + 88LL))(v29, a2) )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v65);
        v51 = v63 - v26;
        v58 = 2 * v26;
        v30 = v67;
        v52 = DWORD2(v63) - v26;
        v57 = 2 * v26;
        v53 = DWORD1(v63) - v26;
        v56 = 2 * v26;
        v54 = HIDWORD(v63) - v26;
        v55 = 2 * v26;
        v31 = v66 - (HIDWORD(v63) - v26) <= (unsigned int)(2 * v26);
        switch ( v46 )
        {
          case 10:
            v31 = v67 - ((_DWORD)v63 - v26) <= 2 * v26;
            break;
          case 11:
            v31 = v65 - (DWORD2(v63) - v26) <= (unsigned int)(2 * v26);
            break;
          case 12:
            v31 = v68 - (DWORD1(v63) - v26) <= (unsigned int)(2 * v26);
            break;
          case 15:
            break;
          default:
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2FB,
              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)0x8000FFFFLL,
              v41);
        }
        if ( v31 )
        {
          v32 = v42;
          v33 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v42 + 40LL);
          v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 112LL))(v29, &v60);
          v9 = v33(v32, *v34);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
          if ( v9 < 0 )
          {
            v35 = 768LL;
LABEL_69:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v35,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v9);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
            goto LABEL_70;
          }
        }
        else
        {
          v36 = (unsigned int)(v65 - v51);
          switch ( v46 )
          {
            case 10:
              if ( (unsigned int)v36 > v58 )
                goto LABEL_65;
              v37 = v65 - ((int)v64 - v26) <= (unsigned int)(2 * v26);
              break;
            case 11:
              if ( v67 - v52 > v57 )
                goto LABEL_65;
              v30 = v67 - (DWORD2(v64) - v26);
              v37 = (unsigned int)v30 <= 2 * v26;
              break;
            case 12:
              if ( v66 - v53 > v56 )
                goto LABEL_65;
              v37 = v66 - (DWORD1(v64) - v26) <= (unsigned int)(2 * v26);
              break;
            default:
              if ( v68 - v54 > v55 )
                goto LABEL_65;
              v37 = v68 - (HIDWORD(v64) - v26) <= (unsigned int)(2 * v26);
              break;
          }
          if ( !v37 )
          {
            v38 = v43;
            v39 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v43 + 40LL);
            v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 112LL))(
                              v29,
                              &v61,
                              v30,
                              v36);
            v9 = v39(v38, *v40);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
            if ( v9 < 0 )
            {
              v35 = 802LL;
              goto LABEL_69;
            }
          }
        }
      }
LABEL_65:
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      ++v27;
    }
  }
  if ( v43 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v42 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v42 + 16LL))(v42);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v47);
  if ( v44 )
    (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v44 + 16LL))(v44);
LABEL_86:
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  return 0LL;
}
