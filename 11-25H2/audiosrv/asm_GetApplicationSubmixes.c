/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800477E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  struct _FILETIME pftDueTime; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  const char *v9; // r9
  __int64 result; // rax
  _QWORD *v11; // rdi
  __int64 *i; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-60h] BYREF
  _BYTE pv[64]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  try
  {
    (*(void (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 48LL))(g_ProcessSubmixManager);
    v7 = MIDL_user_allocate(8LL * MEMORY[0x10]);
    v8 = v7;
    if ( v7 )
    {
      v11 = v7;
      for ( i = (__int64 *)MEMORY[8]; ; *v11++ = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i[2] + 208LL))(i[2]) )
      {
        i = (__int64 *)*i;
        if ( i == (__int64 *)MEMORY[8] )
          break;
      }
      *a3 = MEMORY[0x10];
      *a4 = v8;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8007000ELL);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x105,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v9);
  }
  return result;
}
