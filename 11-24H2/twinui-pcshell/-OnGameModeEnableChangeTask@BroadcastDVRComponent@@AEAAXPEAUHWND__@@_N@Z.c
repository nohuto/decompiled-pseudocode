/*
 * XREFs of ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803180CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run @ 0x180318EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18005B990 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062C4C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x1801C9828 (-CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180319AC0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x180319F74 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::OnGameModeEnableChangeTask(
        BroadcastDVRComponent *this,
        HWND hWnd,
        unsigned __int8 a3)
{
  int v3; // r15d
  struct IApplicationView *v6; // rbx
  struct BroadcastDVRActiveAppInfo *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  const char *v14; // r9
  void *v15; // rbx
  int v16; // eax
  unsigned int v17; // r8d
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-39h]
  void *v21; // [rsp+40h] [rbp-19h] BYREF
  HANDLE v22; // [rsp+48h] [rbp-11h] BYREF
  HWND v23; // [rsp+50h] [rbp-9h] BYREF
  struct BroadcastDVRActiveAppInfo *v24; // [rsp+58h] [rbp-1h] BYREF
  std::_Ref_count_base *v25; // [rsp+60h] [rbp+7h]
  __int16 v26; // [rsp+68h] [rbp+Fh] BYREF
  int v27; // [rsp+6Bh] [rbp+12h]
  int v28; // [rsp+70h] [rbp+17h]
  __int64 v29; // [rsp+78h] [rbp+1Fh]
  __int64 v30; // [rsp+80h] [rbp+27h]
  HSTRING v31; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 dwProcessId; // [rsp+C0h] [rbp+67h] BYREF
  struct IApplicationView *v34; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a3;
  v6 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v34 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v24, (_QWORD *)this + 39);
  v7 = v24;
  if ( v24 && *((_BYTE *)v24 + 16) && (*(HWND *)v24 == hWnd || *((HWND *)v24 + 1) == hWnd) )
  {
LABEL_10:
    *((_DWORD *)v7 + 6) = 2 * v3 + 1;
    if ( (_BYTE)v3 )
    {
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      LOBYTE(dwProcessId) = 0;
      v21 = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(
        (__int64)this,
        (_QWORD **)v6,
        (__int64)&v26,
        (char *)&dwProcessId,
        &v23,
        &v22,
        &v21);
      v13 = GameConfigInfo::CopyTo((GameConfigInfo *)&v26, (struct BroadcastDVRActiveAppInfo *)((char *)v7 + 16));
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAE8,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v13);
      BroadcastDVRComponent::EvaluateAppForGameMode((HSTRING **)this, v6, (HWND *)v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
      Windows::Internal::String::~String(&v31);
      goto LABEL_24;
    }
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
    if ( !(_DWORD)dwProcessId )
      goto LABEL_24;
    v21 = 0LL;
    v22 = OpenProcess(0x1000u, 0, dwProcessId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      &v21,
      &v22);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v22);
    v15 = v21;
    if ( !v21 )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB05,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v14);
      goto LABEL_23;
    }
    v16 = RmGameModeDisableForRegisteredProcess(v21);
    v18 = retaddr;
    if ( v16 >= 0 )
    {
      v16 = RmGameModeUnregisterProcess(v15);
      v18 = retaddr;
      if ( v16 >= 0 )
      {
        *((_DWORD *)this + 114) = 0;
        std::vector<Windows::Internal::String>::clear((char *)this + 352);
        goto LABEL_23;
      }
      v19 = 2811LL;
    }
    else
    {
      v19 = 2807LL;
    }
    wil::details::in1diag3::_Log_NtStatus(v18, (void *)v19, v17, (const char *)(unsigned int)v16, v20);
LABEL_23:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v21);
    goto LABEL_24;
  }
  v8 = **((_QWORD **)this + 33);
  dwProcessId = v8;
  while ( v8 != *((_QWORD *)this + 33) )
  {
    v9 = (_QWORD *)(v8 + 32);
    std::shared_ptr<FlyoutView>::operator=(&v24, (_QWORD *)(v8 + 40));
    v7 = v24;
    if ( *(HWND *)v24 == hWnd )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v34, v9);
      v6 = v34;
      goto LABEL_10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &dwProcessId,
      v10,
      v11,
      v12);
    v8 = dwProcessId;
  }
LABEL_24:
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
}
