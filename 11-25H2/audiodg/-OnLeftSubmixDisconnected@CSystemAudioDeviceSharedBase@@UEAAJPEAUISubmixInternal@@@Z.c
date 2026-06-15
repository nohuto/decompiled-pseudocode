/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14003ACD8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *(_OWORD *)&this[-2].LockSemaphore;
  EtwEventActivityIdControl(4LL, &v6);
  EnterCriticalSection(this - 3);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2) )
    (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct ISubmixInternal *))&this->DebugInfo[2].Type)(
      this,
      a2);
  --LODWORD(this[1].DebugInfo);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
  }
  if ( !LODWORD(this[1].DebugInfo) )
  {
    if ( LODWORD(this->SpinCount) )
    {
      v4 = CSystemAudioDeviceSharedBase::SetGraphState(&this[-4], 0LL);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C7,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
    LeaveCriticalSection(this - 3);
  EtwEventActivityIdControl(4LL, &v6);
  return 0LL;
}
