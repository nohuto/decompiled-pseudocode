/*
 * XREFs of NtUserRegisterForCustomDockTargets @ 0x1C01D8AF0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     LeaveEditionCrit @ 0x1C00A0030 (LeaveEditionCrit.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C0239FF8 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserRegisterForCustomDockTargets(__int64 a1)
{
  __int64 v2; // r9
  char v3; // dl
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  const struct tagWND *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  MOVESIZEDATA *v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  BOOL v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v24; // [rsp+78h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v24);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v2,
      4u,
      1u,
      0x3Bu,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a1);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v4 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        3,
        1,
        60,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
    v8 = 5;
    goto LABEL_52;
  }
  v9 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v9 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v9,
        v10,
        v11,
        3,
        1,
        61,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
    v8 = 87;
    goto LABEL_52;
  }
  if ( !gpqForeground || (v12 = *(_QWORD *)(gpqForeground + 128LL)) == 0 )
  {
    v14 = WPP_GLOBAL_Control;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v15 = 62;
LABEL_50:
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      (_DWORD)v9,
      v10,
      v11,
      3,
      1,
      v15,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
LABEL_51:
    v8 = 5023;
LABEL_52:
    v19 = 0;
    UserSetLastError(v8);
    goto LABEL_53;
  }
  v13 = *(MOVESIZEDATA **)(*(_QWORD *)(v12 + 16) + 672LL);
  if ( !v13 )
  {
    v14 = WPP_GLOBAL_Control;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_51;
    v15 = 63;
    goto LABEL_50;
  }
  v16 = MOVESIZEDATA::SHData_SetCustomDockTargetWindow(v13, v9);
  v19 = v16;
  if ( !v16 )
    goto LABEL_51;
LABEL_53:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v24, v17, v18);
  LeaveEditionCrit((__int64)&v24, v20, v21, v22);
  return v19;
}
