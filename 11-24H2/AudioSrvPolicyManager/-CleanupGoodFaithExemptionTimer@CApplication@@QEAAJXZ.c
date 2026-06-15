/*
 * XREFs of ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800319F8
 * Callers:
 *     ??1CApplication@@MEAA@XZ @ 0x18003089C (--1CApplication@@MEAA@XZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x180031AF8 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x180032480 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupGoodFaithExemptionTimer(const wchar_t **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v4 = v2;
  if ( this[53] )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, this[3]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[53],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[53],
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      this[53]);
    *((_DWORD *)this + 109) = 1;
    this[53] = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v4);
  return 0LL;
}
