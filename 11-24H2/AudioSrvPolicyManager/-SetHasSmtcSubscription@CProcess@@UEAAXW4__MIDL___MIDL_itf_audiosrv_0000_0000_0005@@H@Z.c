/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001E850
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001A82C (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180033010 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rbp
  int v7; // r8d
  int v8; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v9 = v3;
  if ( (unsigned int)v4 <= 1 && ((v7 = *(_DWORD *)(a1 + 4 * v4 + 496)) != 0 || a3) )
  {
    v8 = v7 + (a3 != 0 ? 1 : -1);
    *(_DWORD *)(a1 + 4 * v4 + 496) = v8;
    if ( !v8 || v8 == 1 && a3 )
      CApplication::OnSmtcSubscriptionChanged(*(CApplication **)(a1 + 224));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
  else if ( v3 )
  {
    LeaveCriticalSection(v3);
  }
}
