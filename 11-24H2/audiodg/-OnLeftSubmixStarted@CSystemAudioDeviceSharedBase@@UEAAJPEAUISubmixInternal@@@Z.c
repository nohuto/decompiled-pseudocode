/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140039330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x14003985C (-SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     WPP_SF_q @ 0x14006C314 (WPP_SF_q.c)
 *     WPP_SF_DDD @ 0x140072238 (WPP_SF_DDD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  int SpinCount; // r12d
  __int64 v12; // rdx
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v15 = *(_OWORD *)&this[-2].LockSemaphore;
  v16 = v15;
  EtwEventActivityIdControl(4LL, &v16);
  v4 = this - 4;
  if ( !CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState((CSystemAudioDeviceSharedBase *)&this[-4], a2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids, a2);
    }
    goto LABEL_14;
  }
  v5 = this - 3;
  EnterCriticalSection(this - 3);
  ++HIDWORD(this[1].DebugInfo);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
  }
  if ( HIDWORD(this[1].DebugInfo) != 1 )
    goto LABEL_12;
  v6 = LODWORD(this->SpinCount) == 0;
  v13 = *(_OWORD *)&v4[2].LockSemaphore;
  v14 = v13;
  if ( v6 )
  {
    EtwEventActivityIdControl(4LL, &v14);
    v7 = (*(__int64 (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)v4[4].LockSemaphore + 72LL))(
           v4[4].LockSemaphore,
           (unsigned __int64)&v4[3].SpinCount & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64));
    v9 = WPP_GLOBAL_Control;
    SpinCount = 3;
  }
  else
  {
    EtwEventActivityIdControl(4LL, &v14);
    v7 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)v4[4].LockSemaphore + 96LL))(v4[4].LockSemaphore);
    v9 = WPP_GLOBAL_Control;
    SpinCount = 2;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x200) != 0 )
  {
    v12 = ((v7 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)v9 + 25) >= (int)v12 )
      WPP_SF_DDD(
        v9[2],
        v12,
        v8,
        LODWORD(v4[4].SpinCount),
        SpinCount,
        v7,
        v13,
        *((_QWORD *)&v13 + 1),
        v14,
        *((_QWORD *)&v14 + 1),
        v15,
        *((_QWORD *)&v15 + 1));
  }
  if ( v7 < 0 )
    SpinCount = v4[4].SpinCount;
  LODWORD(v4[4].SpinCount) = SpinCount;
  EtwEventActivityIdControl(4LL, &v14);
  if ( v7 >= 0 )
  {
LABEL_12:
    if ( v5 )
      LeaveCriticalSection(v5);
LABEL_14:
    v7 = 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x283,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v7);
  if ( v5 )
    LeaveCriticalSection(v5);
LABEL_15:
  EtwEventActivityIdControl(4LL, &v16);
  return (unsigned int)v7;
}
