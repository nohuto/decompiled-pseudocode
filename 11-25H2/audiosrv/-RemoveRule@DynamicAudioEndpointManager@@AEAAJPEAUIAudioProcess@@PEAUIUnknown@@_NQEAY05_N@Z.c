/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18011E8E0
 * Callers:
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x180069B88 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18011E4B0 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011EA40 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x1800699CC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007E518 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$com_query_to_nothrow@UIPolicyRule@@AEAPEAUIUnknown@@@wil@@YAJAEAPEAUIUnknown@@PEAPEAUIPolicyRule@@@Z @ 0x18011CDA0 (--$com_query_to_nothrow@UIPolicyRule@@AEAPEAUIUnknown@@@wil@@YAJAEAPEAUIUnknown@@PEAPEAUIPolicyR.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18011DCB4 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     ?RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18011EBF8 (-RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        RTL_SRWLOCK *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        bool a4,
        bool (*const a5)[6])
{
  RTL_SRWLOCK *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int refreshed; // ebx
  __int64 v13; // rdx
  unsigned int v14; // edi
  bool *v15; // r14
  DynamicAudioEndpointManager *v17; // rcx
  __int64 v18; // rdx
  RTL_SRWLOCK *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v22; // [rsp+90h] [rbp+50h] BYREF

  v22 = a3;
  v21 = 0LL;
  v9 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  v19[0] = v9;
  v10 = v21;
  v21 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = wil::com_query_to_nothrow<IPolicyRule,IUnknown * &>(&v22, (__int64)&v21);
  refreshed = v11;
  if ( v11 < 0 )
  {
    v13 = 625LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v11);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    return (unsigned int)refreshed;
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21);
  v15 = (bool *)a5;
  v11 = DynamicAudioEndpointManager::RemoveRuleAndBuildRefreshList((DynamicAudioEndpointManager *)this, a2, a3, a4, a5);
  refreshed = v11;
  if ( v11 < 0 )
  {
    v13 = 631LL;
    goto LABEL_7;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v19);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  if ( a4 )
  {
    if ( v14 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v17, (bool (*const)[6])v15, v14);
      if ( refreshed < 0 )
      {
        v18 = 640LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[6])v15, 0);
    if ( refreshed < 0 )
    {
      v18 = 643LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
