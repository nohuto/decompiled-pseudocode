/*
 * XREFs of NtUserSendInput @ 0x1C000A260
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendInput @ 0x1C000A4E4 (xxxSendInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C000A878 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     UserGetLastError @ 0x1C00164E8 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0062E20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0063088 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1C01E2ADC (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, void *a2, int a3, int a4)
{
  int v4; // ebx
  volatile void *v5; // r13
  __int64 v6; // r14
  char v7; // di
  int v8; // r8d
  int v9; // r9d
  __int64 CurrentProcessWow64Process; // rax
  void *v11; // rax
  void *v12; // r13
  unsigned int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // edx
  int v21; // edx
  bool v22; // si
  int v23; // r8d
  int v24; // edx
  void *v25; // [rsp+70h] [rbp-68h]
  __int128 v26; // [rsp+80h] [rbp-58h] BYREF
  __int64 v27; // [rsp+90h] [rbp-48h]
  void *Src; // [rsp+E8h] [rbp+10h]
  char v29; // [rsp+F8h] [rbp+20h] BYREF

  Src = a2;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(a2) = 0;
    v7 = 1;
  }
  else
  {
    v7 = 1;
    LOBYTE(a2) = 1;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dqd(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, a4);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v29,
    "SendInput",
    0LL);
  EnterCrit(0LL, 0LL);
  v26 = 0LL;
  v27 = 0LL;
  if ( v4 != 40 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 14;
      LOBYTE(v20) = v7;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v8,
        (_DWORD)gFullLog,
        2,
        20,
        14,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        v4,
        40);
    }
    goto LABEL_23;
  }
  if ( !(_DWORD)v6 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 15;
      LOBYTE(v21) = v7;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v8,
        v9,
        2,
        20,
        15,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
LABEL_23:
    v13 = 0;
    UserSetLastError(87LL);
    goto LABEL_12;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForRead(v5, 40 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (void *)Win32AllocPoolWithQuotaZInit(40 * v6, 1769173845LL);
  v12 = v11;
  v25 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  memmove(v11, Src, 40 * v6);
  PushW32ThreadLock(v12, &v26, Win32FreePool);
  v13 = xxxSendInput((unsigned int)v6, v12);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(ThreadWin32Thread + 16) = v26;
  Win32FreePool(v25);
  if ( v13 != (_DWORD)v6 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError(WPP_GLOBAL_Control, v15, v17, v18);
      LOBYTE(v23) = v22;
      LOBYTE(v24) = v7;
      WPP_RECORDER_AND_TRACE_SF_ddD(WPP_GLOBAL_Control->AttachedDevice, v24, v23, (_DWORD)gFullLog);
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v29);
  return v13;
}
