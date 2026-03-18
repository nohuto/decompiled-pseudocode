/*
 * XREFs of ?Run@CGlobalMit@@MEAAKXZ @ 0x1802094B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800EF1E0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1802097C8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z @ 0x180209974 (-InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalMit::Run(CGlobalMit *this)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  int v4; // r9d
  int SystemInputHost; // eax
  wil::details *updated; // rax
  struct _RTL_CRITICAL_SECTION *v7; // rcx
  int v8; // eax
  void *v9; // rcx
  __int64 result; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &CInputProxy::`vftable';
  else
    v2 = 0LL;
  *((_QWORD *)this + 5) = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
    v11 = 131;
LABEL_6:
    v4 = v3;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180381BF0, 2u, v4, v11, 0LL);
    goto LABEL_30;
  }
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v11 = 137;
    goto LABEL_28;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 3),
                      CGlobalMit::OnResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v11 = 139;
    goto LABEL_28;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 272LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 17),
                      CGlobalMit::OnResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v11 = 140;
    goto LABEL_28;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 5), 0LL, &CMit::s_pSystemInputHost);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v11 = 145;
LABEL_28:
    v4 = SystemInputHost;
    goto LABEL_29;
  }
  updated = (wil::details *)MITGetCursorUpdateHandle();
  if ( updated != (wil::details *)-1LL )
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 18,
      updated);
  if ( !(unsigned int)NtMITActivateInputProcessing(CGlobalMit::s_HitTestRequest, &v12) )
  {
    v3 = -2147467259;
    v11 = 158;
    goto LABEL_6;
  }
  v3 = 0;
  CGlobalMit::InitializeCoreMessagingIocp(v12);
  while ( !*((_BYTE *)this + 32) )
  {
    ResetEvent(*((HANDLE *)this + 3));
    if ( *((_BYTE *)this + 32) )
      break;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 816LL) )
    {
      v8 = CMmcssTask::Apply(v7, 1);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xF4u, 0LL);
    }
    else
    {
      CMmcssTask::Revert((CMmcssTask *)v7);
    }
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 232LL))(CMit::s_pMessageSession);
  }
  NtMITDeactivateInputProcessing();
LABEL_30:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    operator delete(v9, 8uLL);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 3));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v3;
  if ( (v3 & 0x1FFF0000) != 0x70000 )
    return v3;
  return result;
}
