/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08
 * Callers:
 *     EditionDoHotKeys @ 0x1401A99B0 (EditionDoHotKeys.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HasRawInputForegroundTarget @ 0x14017206C (HasRawInputForegroundTarget.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1401AA118 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401BBD94 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401C7BCC (-xxxHandleVolumeUpDownKey@@YAXE_N@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401C7EFC (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401C7F4C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401E8478 (zzzDesktopSwitchSideEffects.c)
 *     _CancelMagnificationInputTransform @ 0x1401FCC60 (_CancelMagnificationInputTransform.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x140215AB0 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     ?ReportPenKey@@YAXIE@Z @ 0x14021943C (-ReportPenKey@@YAXIE@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1402246D4 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x140256810 (xxxActivateDebugger.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028880C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402889B4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140289078 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline @ 0x140289770 (Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShellHKeyAndLockScreen__private_IsEnabledDeviceUsageNoInline @ 0x1402897C4 (Feature_ShellHKeyAndLockScreen__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxDoHotKeyStuff(__int64 a1, _BOOL8 a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  char v4; // di
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  bool v8; // r14
  __int64 UserSessionState; // rsi
  __int64 v10; // rdx
  char v11; // bp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagHOTKEY *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  TooltipDismiss *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  bool v33; // bl
  int v34; // edx
  int v35; // r8d
  __int64 v36; // r9
  int v38; // ebx
  struct tagHOTKEY *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  bool v44; // zf
  bool v45; // zf
  __int64 v46; // rdx
  int v47; // eax
  int v48; // [rsp+28h] [rbp-80h]
  __int16 v49; // [rsp+30h] [rbp-78h]
  unsigned int v50; // [rsp+40h] [rbp-68h]
  char v51[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v52; // [rsp+50h] [rbp-58h]
  __int128 v53; // [rsp+58h] [rbp-50h] BYREF
  __int64 v54; // [rsp+68h] [rbp-40h]
  bool v55; // [rsp+B0h] [rbp+8h]
  bool v56; // [rsp+B8h] [rbp+10h]

  v56 = a2;
  v4 = 0;
  v5 = (unsigned __int8)a1;
  v50 = 0;
  v6 = 0;
  v8 = a2;
  v51[0] = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v52 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v51);
  v11 = 1;
  switch ( v5 )
  {
    case 0x10u:
      v6 = 4;
      break;
    case 0x11u:
      v6 = 2;
      break;
    case 0x12u:
      v6 = 1;
      break;
    default:
      if ( v5 - 91 < 2 )
        v6 = 8;
      else
        *(_DWORD *)(UserSessionState + 14044) = 0;
      break;
  }
  v12 = *(unsigned int *)(UserSessionState + 14040);
  if ( v8 )
  {
    *(_DWORD *)(UserSessionState + 14040) = v12 & ~v6;
    if ( v6 )
    {
      v50 = *(_DWORD *)(UserSessionState + 14044);
      *(_DWORD *)(UserSessionState + 14044) = 0;
    }
    else if ( (unsigned int)Feature_C2DCancelOnNonModifierUp__private_IsEnabledDeviceUsageNoInline() )
    {
      ResetWindowKeyProcessing(0LL);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v12, v10) + 14000) )
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 14000) = 0LL;
  }
  else
  {
    v15 = v6 | (unsigned int)v12;
    *(_DWORD *)(UserSessionState + 14040) = v15;
    if ( v6 )
      *(_DWORD *)(UserSessionState + 14044) = v15;
    if ( *(_DWORD *)(W32GetUserSessionState(v15, v10) + 66132) || *(_DWORD *)(UserSessionState + 14044) != 8 )
    {
      ResetWindowKeyProcessing(0LL);
    }
    else if ( !*(_DWORD *)(UserSessionState + 14048) )
    {
      v18 = W32GetUserSessionState(v17, v16);
      if ( (unsigned __int8)UpdateWindowKeyWindowCloak(*(_QWORD *)(v18 + 19200), 1LL) )
        *(_DWORD *)(UserSessionState + 14048) = 1;
    }
  }
  v55 = IsSAS(v5, (unsigned int *)(UserSessionState + 14040));
  v19 = v55;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v51);
  xxxHandleVolumeUpDownKey(v5, v8);
  if ( !v55 && (*(_BYTE *)(UserSessionState + 14704) & 1) != 0 )
    return 0;
  if ( !v50 || !v8 )
  {
    v22 = IsHotKey(*(_DWORD *)(UserSessionState + 14040), v5);
    if ( !v22 || !v55 )
    {
      if ( *(_DWORD *)(UserSessionState + 14040) == *(_DWORD *)(UserSessionState + 14008)
        || (v39 = IsUninterceptable(v5)) == 0LL )
      {
        if ( !v22 )
          goto LABEL_32;
      }
      else
      {
        v22 = v39;
      }
    }
    goto LABEL_82;
  }
  v22 = IsHotKey(v50, 0);
  v23 = *(_DWORD *)(UserSessionState + 14048);
  if ( v22 )
  {
    if ( v23 )
    {
      if ( *((_DWORD *)v22 + 10) == -7 )
      {
LABEL_66:
        v38 = *(_DWORD *)(UserSessionState + 14048);
        ResetWindowKeyProcessing(0LL);
        if ( v38 == 2 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v11 = 0;
          }
          v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20) + 69416);
          v49 = 13;
          goto LABEL_60;
        }
        v19 = v55;
LABEL_82:
        if ( !*(_DWORD *)(W32GetUserSessionState(v21, v20) + 66132)
          || _bittest16((const signed __int16 *)v22 + 17, 0xDu) )
        {
          goto LABEL_32;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v11 = 0;
        }
        v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v40) + 69416);
        v49 = 14;
LABEL_60:
        LOBYTE(v35) = v33;
        LOBYTE(v34) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v35,
          v36,
          4,
          6,
          v49,
          (__int64)&WPP_0735e9b686cf323d257ae8be9898a1d6_Traceguids);
        return 0;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2162LL);
    }
    if ( *((_DWORD *)v22 + 10) != -7 )
      goto LABEL_82;
    goto LABEL_66;
  }
  if ( v23 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2157LL);
LABEL_32:
  WindowArrangementSequence::TestSequence(
    v22,
    (const struct tagHOTKEY *const)v5,
    v6,
    *(_DWORD *)(UserSessionState + 14040),
    !v56,
    v48);
  if ( v50 == 2 && v56 || *(_DWORD *)(UserSessionState + 14040) == 6 && (_BYTE)v5 == 121 && !v56 )
    TooltipDismiss::DismissTooltips(v25);
  if ( !v22 )
    return 0;
  v26 = *((_WORD *)v22 + 17);
  if ( v26 < 0 && !v19 && a4 && *((_DWORD *)a4 + 1) != 4 )
    return 0;
  v54 = 0LL;
  v27 = 34816LL;
  v53 = 0LL;
  if ( (v26 & 0x8800) == 0 )
  {
    if ( (unsigned int)HasRawInputForegroundTarget((__int64 *)&v53, v24) )
    {
      v27 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 464LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v27 + 832) + 100LL) & 0x200) != 0 )
        return 0;
    }
  }
  v28 = *((_DWORD *)v22 + 10);
  if ( v28 != -7 )
  {
    if ( (unsigned int)(v28 + 6) <= 1 )
    {
      if ( !v56 )
        return (unsigned int)xxxActivateDebugger(*((unsigned __int16 *)v22 + 16)) != 0;
      return v4;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v24) + 19200) + 40LL) + 64LL) & 1) != 0 )
    {
      v29 = ~(*((_WORD *)v22 + 17) >> 13) & 1;
      if ( !(unsigned int)Feature_ShellHKeyAndLockScreen__private_IsEnabledDeviceUsageNoInline() )
      {
        v31 = *(_QWORD *)v22;
        v29 |= (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v22 + 528LL), 0, 0) & 4) == 0;
      }
      if ( v29 && *(_DWORD *)(W32GetUserSessionState(v31, v30) + 66132) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v11 = 0;
        }
        v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v36 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32) + 69416);
        v49 = 15;
        goto LABEL_60;
      }
    }
    v41 = v50;
    if ( !v50 && v56 )
      return 0;
    if ( v55 || (_BYTE)v5 == 27 && *(_DWORD *)(UserSessionState + 14040) == 2 )
    {
      zzzDesktopSwitchSideEffects();
      if ( *(_QWORD *)(*((_QWORD *)PtiCurrent(v43, v42) + 62) + 224LL) )
        CancelMagnificationInputTransform();
      CancelCapturedMipOverride();
    }
    if ( !a3 )
      goto LABEL_118;
    switch ( (_BYTE)v5 )
    {
      case 9:
        v44 = (a3 & 1) == 0;
        break;
      case 0xD:
        v44 = (a3 & 8) == 0;
        break;
      case 0x1B:
        if ( (a3 & 2) != 0 && (*(_DWORD *)(UserSessionState + 14040) & 3) == 1 )
          return 0;
        if ( (a3 & 0x40) != 0 )
        {
          v45 = (*(_DWORD *)(UserSessionState + 14040) & 3) == 2;
          goto LABEL_117;
        }
LABEL_118:
        if ( IsPenQuickLaunchAndShouldBeDisabled(*(_DWORD *)(UserSessionState + 14040), v5) )
          return 0;
        goto LABEL_124;
      case 0x20:
        v44 = (a3 & 4) == 0;
        break;
      case 0x2C:
        if ( (a3 & 0x20) != 0 && (*(_DWORD *)(UserSessionState + 14040) & 3) == 0 )
          return 0;
        v44 = (a3 & 0x10) == 0;
        break;
      default:
        goto LABEL_118;
    }
    if ( !v44 )
    {
      v45 = (*(_DWORD *)(UserSessionState + 14040) & 3) == 1;
LABEL_117:
      if ( v45 )
        return 0;
      goto LABEL_118;
    }
    goto LABEL_118;
  }
  v41 = v50;
LABEL_124:
  ReportPenKey(*(_DWORD *)(UserSessionState + 14040), v5);
  LOBYTE(v46) = v56;
  v47 = xxxReportHotKey(v22, v46, a4) - 1;
  if ( !v47 )
    return 0;
  return v47 == 1 || v41 == 0;
}
