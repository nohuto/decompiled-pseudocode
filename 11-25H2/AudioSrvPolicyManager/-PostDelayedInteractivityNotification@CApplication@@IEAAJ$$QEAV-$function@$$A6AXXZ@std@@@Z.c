/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180035B20
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180033814 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x1800342F4 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(const wchar_t **this, __int64 a2)
{
  signed int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  signed int LastError; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 62);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 62));
  v10 = v5;
  CApplication::CleanupDelayedInteractivityNotification(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, this[3]);
  }
  if ( this[67]
    || (v6 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (this[67] = (const wchar_t *)v6) != 0LL) )
  {
    std::function<void (void)>::operator=((__int64)(this + 68), a2);
    v9 = -300000000LL;
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[67],
      &v9,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, v4);
      }
      AudPolicyLogError("CApplication::PostDelayedInteractivityNotification", 1453, v4);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return (unsigned int)v4;
}
