/*
 * XREFs of ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180031324
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180033010 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180002250 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D260 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x180012E40 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013EE0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180014690 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180031180 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 */

void __fastcall CApplication::ApplySmtcRelatedPolicy(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // esi
  CProcess *v4; // rcx
  _QWORD *v5; // rax
  CProcess **Next; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  v8 = v1;
  v7 = v5;
  while ( v7 )
  {
    Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v4, &v7);
    v4 = *Next;
    if ( !*((_DWORD *)*Next + 104) )
      v3 += CProcess::GetActiveRenderStreamCount(v4, 2u);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  if ( !v3 || (unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this)
      && !(unsigned int)CApplication::HasSmtcSubscription((__int64)this, 1) )
    {
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    }
  }
  else
  {
    CApplication::AddCategoryOverrideToProcesses((__int64)this, 4, 4, 1);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u, 0);
    TsSessionIdRemoveActiveMediaApp(*((_DWORD *)this + 53), this);
  }
}
