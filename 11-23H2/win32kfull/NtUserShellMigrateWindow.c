/*
 * XREFs of NtUserShellMigrateWindow @ 0x1C01DD400
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndIAM @ 0x1C0030BB8 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     LeaveEditionCrit @ 0x1C00A0030 (LeaveEditionCrit.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     ?MigrateWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1C021C950 (-MigrateWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__.c)
 */

__int64 __fastcall NtUserShellMigrateWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // di
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  PDEVICE_OBJECT v16; // rcx
  char v17; // r8
  unsigned __int16 v18; // dx
  __int64 v19; // r9
  PDEVICE_OBJECT v20; // rcx
  char v21; // r8
  unsigned __int16 v22; // dx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v30; // [rsp+88h] [rbp+20h] BYREF

  v5 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v30);
  LOBYTE(v7) = IAMThreadAccessGranted(gptiCurrent);
  v10 = 0LL;
  if ( !v7 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 52;
      LOBYTE(v11) = v5;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v8,
        v9,
        3,
        12,
        52,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
    v12 = 5;
    goto LABEL_65;
  }
  v13 = ValidateHwndIAM(a1);
  v15 = v13;
  if ( !v13 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 53;
LABEL_18:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v16->AttachedDevice,
      v5,
      v17,
      v14,
      2u,
      0xCu,
      v18,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a1);
LABEL_19:
    v12 = 87;
LABEL_65:
    UserSetLastError(v12);
    goto LABEL_66;
  }
  if ( !IsTopLevelWindow(v13) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 54;
    goto LABEL_18;
  }
  if ( *(_QWORD *)(v15 + 16) == gptiCurrent )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v18 = 55;
    goto LABEL_18;
  }
  if ( IsHungWindow((const struct tagTHREADINFO **)v15) )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v22 = 56;
LABEL_44:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v20->AttachedDevice,
      v5,
      v21,
      v19,
      2u,
      0xCu,
      v22,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
      a1);
LABEL_45:
    v12 = 5023;
    goto LABEL_65;
  }
  if ( **(_WORD **)(*(_QWORD *)(v15 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v22 = 57;
    goto LABEL_44;
  }
  if ( !ValidateHmonitor(a2) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v23,
        2u,
        0xCu,
        0x3Au,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
        a2);
    goto LABEL_19;
  }
  if ( (unsigned int)ShellWindowPos::MigrateWindowAsync(v15, a2, a3) == 1 )
  {
    v12 = 14;
    goto LABEL_65;
  }
  v10 = 1LL;
LABEL_66:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v30, v24, v25);
  LeaveEditionCrit((__int64)&v30, v26, v27, v28);
  return v10;
}
