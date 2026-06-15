/*
 * XREFs of ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14004A830
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetEndpoint(CSystemAudioDeviceSharedBase *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v5);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 64LL))(*((_QWORD *)this + 23));
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::ResetEndpoint", 0x16Du, v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  EtwEventActivityIdControl(4LL, &v5);
  return (unsigned int)v3;
}
