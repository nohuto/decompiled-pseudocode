/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FE290 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x180022D54 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x1800374BC (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18004E6D8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18004E71C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x18006A620 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x18009A0E0 (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB4A0 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC5E8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FC390 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800FE8F8 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800FF318 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this)
{
  _BYTE *v2; // rcx
  const char *v3; // r9
  struct IMPCFocusTarget **v4; // r15
  MPCHolographicInputManager *Instance; // rax
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // eax
  const char *v9; // r9
  struct IInputTarget *v10; // rbx
  struct IInputTarget *InputHostTargetForProcessId; // rax
  const char *v12; // r9
  int v13; // eax
  int v14; // eax
  void *v15; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromId; // rax
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IMPCFocusTarget *v21; // rbx
  RTL_SRWLOCK *v22; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+20h] [rbp-48h]
  __int64 v27[2]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v28[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  __int64 v30; // [rsp+A0h] [rbp+38h] BYREF
  struct IInputTarget *v31; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+48h] BYREF
  struct IInputTarget *v33; // [rsp+B8h] [rbp+50h] BYREF

  LODWORD(v30) = 0;
  if ( !std::_Atomic_storage<bool,1>::load((__int64)this + 720) )
  {
    *v2 = 1;
    if ( !*((_QWORD *)this + 84) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1AD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v3);
    v4 = (struct IMPCFocusTarget **)((char *)this + 664);
    if ( *((_QWORD *)this + 83) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1AE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v3);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(Instance, this, v6, v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 84) + 24LL))(
           *((_QWORD *)this + 84),
           (char *)this + 680);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v8,
        v25);
    v10 = 0LL;
    v33 = 0LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v9);
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, *((_DWORD *)this + 170));
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v33, (__int64)InputHostTargetForProcessId);
      v10 = v33;
      if ( !v33 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1BB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v12);
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v13 = DWMFocusedInputTarget::Create(v10, *((_DWORD *)this + 171), 0, 0LL, &v31);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v13,
        v26);
    v32 = 0LL;
    v14 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v31,
            &v32);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14,
        v26);
    v15 = RefCountedObject::operator new(0x70uLL);
    v27[1] = (__int64)v15;
    if ( v15 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      InputSiteFromId = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, v27, 1u, 0LL);
      v18 = 1;
      LODWORD(v30) = 1;
      v26 = 5;
      v19 = MPCFocusTarget::MPCFocusTarget(v15, v32, *InputSiteFromId, 0LL);
    }
    else
    {
      v19 = 0LL;
      v18 = v30;
    }
    Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach(
      (__int64 *)this + 83,
      (v19 + 80) & -(__int64)(v19 != 0));
    if ( (v18 & 1) != 0 )
    {
      v20 = v27[0];
      if ( v27[0] )
      {
        v27[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    MPCInputRouter::Set3DFocusTarget(this, *v4);
    v21 = *v4;
    v30 = 0LL;
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                             (_QWORD *)this + 95,
                             (__int64)v28,
                             &v30)
              + 24LL) = v21;
    v22 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v22);
    v24 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 96LL))(
            PostProcessor,
            ((unsigned __int64)this + 632) & -(__int64)(this != 0LL));
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v24,
        v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  }
}
