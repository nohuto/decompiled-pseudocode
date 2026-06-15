/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140039600
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

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  int SpinCount; // r14d
  int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-78h]
  __int128 v10; // [rsp+40h] [rbp-68h] BYREF
  __int128 v11; // [rsp+50h] [rbp-58h]
  __int128 v12; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v11 = *(_OWORD *)&this[-2].LockSemaphore;
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( !CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState((CSystemAudioDeviceSharedBase *)&this[-4], a2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids, a2);
    }
    goto LABEL_8;
  }
  EnterCriticalSection(this - 3);
  SpinCount = 1;
  --HIDWORD(this[1].DebugInfo);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_14fbdab4759831348651410bb2c6c307_Traceguids);
  }
  if ( HIDWORD(this[1].DebugInfo) )
    goto LABEL_5;
  v9 = *(_OWORD *)&this[-2].LockSemaphore;
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v5 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)this->LockSemaphore + 88LL))(this->LockSemaphore);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v8 = ((v5 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)v8 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v8,
        v7,
        LODWORD(this->SpinCount),
        1,
        v5,
        v9,
        *((_QWORD *)&v9 + 1),
        v10,
        *((_QWORD *)&v10 + 1),
        v11,
        *((_QWORD *)&v11 + 1));
  }
  if ( v5 < 0 )
    SpinCount = this->SpinCount;
  LODWORD(this->SpinCount) = SpinCount;
  EtwEventActivityIdControl(4LL, &v10);
  if ( v5 >= 0 )
  {
LABEL_5:
    if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
      LeaveCriticalSection(this - 3);
LABEL_8:
    v5 = 0;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A4,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v5);
  if ( this != (struct _RTL_CRITICAL_SECTION *)120 )
    LeaveCriticalSection(this - 3);
LABEL_9:
  EtwEventActivityIdControl(4LL, &v12);
  return (unsigned int)v5;
}
