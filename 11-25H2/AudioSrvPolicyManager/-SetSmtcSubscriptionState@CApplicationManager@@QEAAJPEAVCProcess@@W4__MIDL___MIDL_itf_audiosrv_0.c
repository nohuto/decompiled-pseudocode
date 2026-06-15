/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001A6FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x18003D690 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D668 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001E9F0 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(
        __int64 a1,
        struct CProcess *a2,
        unsigned int a3,
        unsigned int a4)
{
  CApplicationManager *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // ebx

  v7 = g_ApplicationManager;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = CApplicationManager::Register(v7, a2);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
        (unsigned int)v9);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 646, v9);
  }
  else
  {
    CProcess::SetHasSmtcSubscription(a2, a3, a4);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v9;
}
