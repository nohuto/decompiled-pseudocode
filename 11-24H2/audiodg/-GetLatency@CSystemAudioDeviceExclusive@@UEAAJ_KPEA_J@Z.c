/*
 * XREFs of ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x14006FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14001DCB0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_Ds @ 0x14006ECF4 (WPP_SF_Ds.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetLatency(CSystemAudioDeviceExclusive *this, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF

  v9 = *(_OWORD *)((char *)this + 104);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v5 = *((_QWORD *)this + 11);
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, a3);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &v8,
    0LL);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_d05c4fcb4b863a398960124cbcfc9764_Traceguids,
        v6,
        (__int64)"CSystemAudioDeviceExclusive::GetLatency");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetLatency", 181, v6);
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v8);
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v6;
}
