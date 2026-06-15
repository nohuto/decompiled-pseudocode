/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800345F0
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800325E0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(const wchar_t **this)
{
  signed int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rdx
  signed int LastError; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v8 = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, this[3]);
  }
  if ( !this[53] )
  {
    v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    this[53] = (const wchar_t *)v4;
    if ( v4 )
    {
      v7 = -200000000LL;
      *((_DWORD *)this + 109) = 1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        &v7,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, v2);
        }
        AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1252, v2);
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return (unsigned int)v2;
}
