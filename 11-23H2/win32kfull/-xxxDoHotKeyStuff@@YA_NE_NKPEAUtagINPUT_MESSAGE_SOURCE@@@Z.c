/*
 * XREFs of ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC
 * Callers:
 *     EditionDoHotKeys @ 0x1C0035D60 (EditionDoHotKeys.c)
 * Callees:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010910 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C0014F88 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C0020390 (_SetMagnificationInputTransform.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0036308 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1C00363C4 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0036470 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z @ 0x1C0036534 (-IsUninterceptable@@YAPEAUtagHOTKEY@@PEAIE@Z.c)
 *     HasRawInputForegroundTarget @ 0x1C0036824 (HasRawInputForegroundTarget.c)
 *     ?ReportPenKey@@YAXIE@Z @ 0x1C0037138 (-ReportPenKey@@YAXIE@Z.c)
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139810 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     ??B?$SGDKEYBOARDgfsModifiers@I@@QEBAIXZ @ 0x1C0151B5E (--B-$SGDKEYBOARDgfsModifiers@I@@QEBAIXZ.c)
 *     ??4?$SGDKEYBOARDgfsModOnlyCandidate@I@@QEAAAEBIAEBI@Z @ 0x1C01BF8B4 (--4-$SGDKEYBOARDgfsModOnlyCandidate@I@@QEAAAEBIAEBI@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01BF8EC (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01BFA70 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C022CC7C (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C022CDA0 (xxxActivateDebugger.c)
 */

bool __fastcall xxxDoHotKeyStuff(unsigned __int8 a1, unsigned __int8 a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // r12
  struct tagHOTKEY *v17; // rdi
  unsigned int v18; // eax
  TooltipDismiss *v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int16 v24; // bx
  struct tagINPUT_MESSAGE_SOURCE *v25; // r13
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // bl
  bool v33; // zf
  unsigned int v34; // eax
  unsigned int *v35; // rcx
  struct tagHOTKEY *v36; // rax
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  int v54; // [rsp+28h] [rbp-40h]
  int v55; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v56[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v57; // [rsp+50h] [rbp-18h]
  int v58; // [rsp+58h] [rbp-10h]
  char v59; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v60; // [rsp+B8h] [rbp+50h]
  int v61; // [rsp+C0h] [rbp+58h]
  struct tagINPUT_MESSAGE_SOURCE *v62; // [rsp+C8h] [rbp+60h]

  v62 = a4;
  v61 = a3;
  v4 = a1;
  v5 = a2;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v59);
  v7 = 0;
  v8 = 0;
  v60 = 0;
  switch ( v4 )
  {
    case 0x10u:
      v8 = 4;
      break;
    case 0x11u:
      v8 = 2;
      break;
    case 0x12u:
      v8 = 1;
      break;
    default:
      if ( v4 - 91 < 2 )
      {
        v8 = 8;
      }
      else
      {
        v55 = 0;
        SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v6, &v55);
      }
      break;
  }
  v9 = SGDGetUserSessionState(v6);
  if ( (_BYTE)v5 )
  {
    v11 = ~v8;
    *(_DWORD *)(v9 + 13824) &= v11;
    if ( v8 )
    {
      v12 = SGDGetUserSessionState(v11);
      v55 = 0;
      v7 = *(_DWORD *)(v12 + 13828);
      v60 = v7;
      SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v13, &v55);
    }
    if ( *(_QWORD *)(SGDGetUserSessionState(v11) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v10) + 13784) = 0LL;
  }
  else
  {
    *(_DWORD *)(v9 + 13824) |= v8;
    if ( v8 )
    {
      v55 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
      SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(v14, &v55);
    }
  }
  v15 = SGDGetUserSessionState(v10);
  v16 = IsSAS(v4, (unsigned int *)(v15 + 13824));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v59);
  if ( (_BYTE)v4 != 0xAE )
  {
    if ( (_BYTE)v4 != 0xAF )
      goto LABEL_22;
    if ( (_BYTE)v5 )
      goto LABEL_21;
    if ( !gbVolumeDownPressed )
    {
      gbVolumeUpPressed = 1;
      goto LABEL_22;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_74:
    gbVolumeDownPressed = 0;
    goto LABEL_22;
  }
  if ( (_BYTE)v5 )
    goto LABEL_74;
  if ( !gbVolumeUpPressed )
  {
    gbVolumeDownPressed = 1;
    goto LABEL_22;
  }
  xxxHandleVolumeUpDownCombo();
LABEL_21:
  gbVolumeUpPressed = 0;
LABEL_22:
  if ( !v16 && (gfInNumpadHexInput & 1) != 0 )
    return 0;
  if ( v7 && (_BYTE)v5 )
  {
    v17 = IsHotKey(v7, 0);
    goto LABEL_27;
  }
  v34 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
  v17 = IsHotKey(v34, v4);
  if ( !v17 || !v16 )
  {
    v36 = IsUninterceptable(v35, v4);
    if ( !v36 )
    {
LABEL_27:
      if ( !v17 )
        goto LABEL_31;
      goto LABEL_28;
    }
    v17 = v36;
  }
LABEL_28:
  if ( gbLockScreenActive && !v16 && !_bittest16((const signed __int16 *)v17 + 17, 0xDu) )
    return 0;
LABEL_31:
  v18 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)();
  WindowArrangementSequence::TestSequence(v17, (const struct tagHOTKEY *const)v4, v8, v18, v5 ^ 1, v54);
  v20 = v60;
  if ( v60 == 2 && (_BYTE)v5
    || (v21 = ((__int64 (*)(void))SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int)(), v23 = 0LL, v21 == 6)
    && (_BYTE)v4 == 121
    && !(_BYTE)v5 )
  {
    TooltipDismiss::DismissTooltips(v19);
    v23 = 0LL;
  }
  if ( !v17 )
    return 0;
  v24 = *((_WORD *)v17 + 17);
  v25 = v62;
  if ( v24 < 0 && !v16 && v62 && *((_DWORD *)v62 + 1) != 4 )
    return 0;
  memset(v56, 0, sizeof(v56));
  if ( (v24 & 0x8800) == 0 )
  {
    v26 = HasRawInputForegroundTarget(v56, 0LL);
    v23 = 0LL;
    if ( v26 )
    {
      v19 = *(TooltipDismiss **)(*(_QWORD *)&v56[8] + 424LL);
      if ( (*(_DWORD *)(*((_QWORD *)v19 + 107) + 100LL) & 0x200) != 0 )
        return 0;
    }
  }
  v27 = *((_DWORD *)v17 + 10);
  if ( v27 == -7 )
    goto LABEL_104;
  if ( (unsigned int)(v27 + 6) <= 1 )
  {
    if ( (_BYTE)v5 )
      v45 = 0;
    else
      v45 = xxxActivateDebugger(*((unsigned __int16 *)v17 + 16), 0LL);
    return v45 != 0;
  }
  v28 = *(unsigned int *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL);
  if ( (v28 & 1) != 0 )
  {
    v28 = *(_QWORD *)v17;
    if ( *(PVOID *)(*(_QWORD *)v17 + 456LL) != grpdeskLogon
      && !*((_QWORD *)v17 + 1)
      && gbLockScreenActive
      && (v24 & 0x2000) == 0 )
    {
      return 0;
    }
  }
  if ( !v20 && (_BYTE)v5 )
    return 0;
  if ( v16
    || (_BYTE)v4 == 27 && (unsigned int)SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, 0LL) == 2 )
  {
    zzzCancelJournalling(v28, v23);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 224LL) )
    {
      memset(v56, 0, sizeof(v56));
      v57 = 0LL;
      v58 = 3;
      SetMagnificationInputTransform((__int128 *)v56, v29, v30, v31);
    }
    CancelCapturedMipOverride();
  }
  v32 = v61;
  if ( !v61 )
    goto LABEL_90;
  if ( (_BYTE)v4 == 9 )
  {
    v33 = (v61 & 1) == 0;
LABEL_87:
    if ( !v33 )
    {
      v37 = (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, v23) & 3) == 1;
LABEL_89:
      if ( !v37 )
        goto LABEL_90;
      return 0;
    }
    goto LABEL_90;
  }
  if ( (_BYTE)v4 == 13 )
  {
    v33 = (v61 & 8) == 0;
    goto LABEL_87;
  }
  if ( (_BYTE)v4 != 27 )
  {
    if ( (_BYTE)v4 == 32 )
    {
      v33 = (v61 & 4) == 0;
    }
    else
    {
      if ( (_BYTE)v4 != 44 )
        goto LABEL_90;
      if ( (v61 & 0x20) != 0 && (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, v23) & 3) == 0 )
        return 0;
      v33 = (v32 & 0x10) == 0;
    }
    goto LABEL_87;
  }
  if ( (v61 & 2) != 0 && (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, v23) & 3) == 1 )
    return 0;
  if ( (v32 & 0x40) != 0 )
  {
    v37 = (SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, v23) & 3) == 2;
    goto LABEL_89;
  }
LABEL_90:
  if ( (unsigned int)SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v28, v23) == 2
    && (_BYTE)v4 == 27
    && !(_BYTE)v5 )
  {
    v39 = ghwndSwitch;
    memset(v56, 0, sizeof(v56));
    if ( ghwndSwitch )
    {
      LOBYTE(v38) = 1;
      v40 = HMValidateHandleNoSecure(ghwndSwitch, v38);
      v41 = v40;
      if ( v40 )
      {
        ThreadLock(v40, v56);
        xxxSetForegroundWindow2(v41, 0LL, 0LL);
        ThreadUnlock1(v43, v42, v44);
      }
    }
  }
  if ( *((_DWORD *)v17 + 10) == -17 )
  {
    v45 = HandleIAMHotKey(v17);
    return v45 != 0;
  }
  v47 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v39, v38);
  if ( IsPenQuickLaunchAndShouldBeDisabled(v47, v4) )
    return 0;
LABEL_104:
  if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v19, v23, v22) )
  {
    v50 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v49, v48);
    ReportPenKey(v50, v4);
    xxxReportHotKey(v17, v5, v25);
  }
  else
  {
    xxxReportHotKey(v17, v5, v25);
    v53 = SGDKEYBOARDgfsModifiers<unsigned int>::operator unsigned int(v52, v51);
    ReportPenKey(v53, v4);
  }
  return v20 == 0;
}
