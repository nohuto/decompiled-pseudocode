/*
 * XREFs of ?ShouldInteractivityNotificationBeDelayed@CApplicationManager@@QEAAHPEAVCApplication@@W4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@@Z @ 0x18003BECC
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180034D3C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180034DC0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 */

_BOOL8 __fastcall CApplicationManager::ShouldInteractivityNotificationBeDelayed(__int64 a1, CApplication *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  BOOL v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v8 = v3;
  v6 = 0;
  if ( a3 == 2 && *((_DWORD *)a2 + 52) && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2) )
    v6 = CApplication::GetTotalActiveCaptureStreamCount(a2) != 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return v6;
}
