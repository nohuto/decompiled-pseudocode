/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0
 * Callers:
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x14007F1C8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     xxxCallMouseHook @ 0x14007F274 (xxxCallMouseHook.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     EditionLLMouseWheelHook @ 0x140094C70 (EditionLLMouseWheelHook.c)
 *     EditionLLMouseButtonHook @ 0x140095CD0 (EditionLLMouseButtonHook.c)
 *     xxxPointerCallHook @ 0x1400A7484 (xxxPointerCallHook.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionKeyEventLLHook @ 0x1402487E0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1400633A4 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x140063440 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     PhkNextValid @ 0x140080FC4 (PhkNextValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140082A7C (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     IsPointerInputHookCall @ 0x140147DF0 (IsPointerInputHookCall.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x14017017C (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x14017D758 (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x1402832C8 (-BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402836F0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r13d
  __int64 Valid; // rdi
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v15; // ebx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v27; // rdx
  const struct tagUIPI_INFO *v28; // r8
  UIPrivilegeIsolation *v29; // rcx
  __int16 ProcessMachine; // bx
  bool v31; // zf
  __int16 v32; // bx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // xmm6_8
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 *v47; // r9
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v52; // ebx
  __int64 HmodIndex; // rbx
  unsigned __int64 v54; // r14
  __int64 v55; // rsi
  _BYTE *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  ULONG_PTR *v60; // rax
  ULONG_PTR v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  ULONG_PTR *v71; // rax
  ULONG_PTR v72; // rcx
  ULONG_PTR *v73; // rdx
  struct tagHOOK *v74; // rax
  __int64 v75; // rdx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 *v80; // rax
  char v81; // bl
  bool v82; // r12
  bool v83; // r13
  char ThreadId; // si
  __int64 v85; // rcx
  int v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // rdx
  ULONG_PTR *v92; // rdx
  __int64 v93; // rax
  int ReturnLength; // [rsp+20h] [rbp-308h]
  int v95; // [rsp+28h] [rbp-300h]
  int v96; // [rsp+38h] [rbp-2F0h]
  char v97; // [rsp+60h] [rbp-2C8h]
  char v98; // [rsp+64h] [rbp-2C4h]
  __int64 v99; // [rsp+68h] [rbp-2C0h] BYREF
  unsigned int v100; // [rsp+70h] [rbp-2B8h]
  __int64 v101; // [rsp+78h] [rbp-2B0h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v103; // [rsp+88h] [rbp-2A0h]
  _QWORD v104[2]; // [rsp+90h] [rbp-298h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-288h]
  __int64 ProcessInformation; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v107; // [rsp+E0h] [rbp-248h] BYREF
  int v108; // [rsp+E8h] [rbp-240h]
  __int64 v109; // [rsp+F0h] [rbp-238h] BYREF
  int v110; // [rsp+F8h] [rbp-230h]
  ULONG_PTR v111[2]; // [rsp+100h] [rbp-228h] BYREF
  _QWORD v112[2]; // [rsp+110h] [rbp-218h] BYREF
  _QWORD v113[2]; // [rsp+120h] [rbp-208h] BYREF
  _QWORD v114[2]; // [rsp+130h] [rbp-1F8h] BYREF
  ULONG_PTR v115[2]; // [rsp+140h] [rbp-1E8h] BYREF
  int v116; // [rsp+150h] [rbp-1D8h] BYREF
  __int128 v117; // [rsp+154h] [rbp-1D4h]
  __int64 v118; // [rsp+164h] [rbp-1C4h]
  int v119; // [rsp+16Ch] [rbp-1BCh]
  int v120; // [rsp+170h] [rbp-1B8h]
  int v121; // [rsp+174h] [rbp-1B4h]
  __int64 *v122; // [rsp+178h] [rbp-1B0h]
  __int64 v123; // [rsp+1A0h] [rbp-188h] BYREF
  unsigned int v124; // [rsp+1A8h] [rbp-180h]
  int v125; // [rsp+1ACh] [rbp-17Ch]
  __int64 v126; // [rsp+1B0h] [rbp-178h]
  int v127; // [rsp+1B8h] [rbp-170h]
  __int64 v128; // [rsp+1BCh] [rbp-16Ch]
  int v129; // [rsp+1C4h] [rbp-164h]
  __int64 v130; // [rsp+1C8h] [rbp-160h]
  __int64 v131; // [rsp+1D0h] [rbp-158h]
  __int64 v132[3]; // [rsp+1D8h] [rbp-150h] BYREF
  unsigned int v133; // [rsp+1F0h] [rbp-138h]
  int v134; // [rsp+1F4h] [rbp-134h]
  _BYTE v135[56]; // [rsp+1F8h] [rbp-130h] BYREF
  _BYTE v136[56]; // [rsp+230h] [rbp-F8h] BYREF
  _BYTE v137[56]; // [rsp+268h] [rbp-C0h] BYREF
  _BYTE v138[56]; // [rsp+2A0h] [rbp-88h] BYREF

  v101 = a4;
  v104[0] = a3;
  v6 = a2;
  Valid = a1;
  v105 = 0LL;
  v99 = 0LL;
  v8 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42376);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 19816) )
  {
    v12 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v12, v11, v13) + 24);
    LOBYTE(v12) = v12 & 0xC;
    if ( (_BYTE)v12 != 8 )
    {
      v12 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v12, v11, v13) + 24);
      if ( (v12 & 0xC) == 0 )
        goto LABEL_8;
      if ( ExIsResourceAcquiredExclusiveLite(v8) == 1
        || (IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v8)) != 0 )
      {
        LOBYTE(IsResourceAcquiredSharedLite) = 1;
      }
      if ( !(_BYTE)IsResourceAcquiredSharedLite )
LABEL_8:
        __int2c();
    }
  }
  if ( !Valid )
    return 0LL;
  v15 = *(_DWORD *)(Valid + 48);
  v100 = v15;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
  v19 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
  if ( v19 == *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18704) && v15 != 13 && v15 != 14
    || (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x10000001) != 0
    || !*(_QWORD *)(v19 + 496) && *(_DWORD *)(Valid + 48) != 14
    || (unsigned int)IsPointerInputHookCall(v15, a4) && v15 != 3 && v15 != 4 && v15 != 12 )
  {
    return 0LL;
  }
  v20 = 200;
  while ( 1 )
  {
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v137);
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*(_DWORD *)(Valid + 64) & 0x1000) != 0 )
    {
      Valid = PhkNextValid(Valid, v21);
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v137);
      goto LABEL_179;
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v137);
    if ( (v15 != 14 || !*(_QWORD *)(Valid + 16) || !(unsigned __int8)IsSpatialDelegationEnabledForThread())
      && (v15 != 13 || !*(_QWORD *)(Valid + 16) || !(unsigned __int8)IsKeyboardDelegationEnabledForThread()) )
    {
      break;
    }
    Valid = PhkNextValid(Valid, v22);
LABEL_179:
    if ( !Valid )
      return 0LL;
  }
  v23 = *(int *)(Valid + 48);
  v24 = dword_140353514[v23];
  v98 = v24;
  v25 = 0;
  if ( (_DWORD)v23 == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 8) != 0
    && ((v6 - 4) & 0xFFFFFFF3) == 0
    && v6 != 16 )
  {
    LOBYTE(v24) = v24 | 0x10;
    v98 = v24;
  }
  if ( *(_DWORD *)(Valid + 48) == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 4) != 0
    && v6 == 11 )
  {
    LOBYTE(v24) = v24 | 0x10;
    v98 = v24;
  }
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  v29 = *(UIPrivilegeIsolation **)(Valid + 16);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v29 == (UIPrivilegeIsolation *)v19 )
      goto LABEL_66;
    if ( (v24 & 0x20) != 0 )
      goto LABEL_65;
    ProcessMachine = PsGetProcessMachine(**((_QWORD **)v29 + 58));
    if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v19 + 464)) != ProcessMachine )
      goto LABEL_65;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0xC) != 0 )
    {
      v29 = *(UIPrivilegeIsolation **)(Valid + 16);
      if ( *((_QWORD *)v29 + 58) != *(_QWORD *)(v19 + 464) )
        goto LABEL_65;
    }
    v31 = (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 464LL)) == 0;
    goto LABEL_62;
  }
  if ( v29 == (UIPrivilegeIsolation *)v19 )
    goto LABEL_66;
  if ( (v24 & 0x20) != 0 )
    goto LABEL_65;
  v32 = PsGetProcessMachine(**((_QWORD **)v29 + 58));
  if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v19 + 464)) != v32 )
    goto LABEL_65;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0xC) != 0 )
  {
    v29 = *(UIPrivilegeIsolation **)(Valid + 16);
    if ( *((_QWORD *)v29 + 58) != *(_QWORD *)(v19 + 464) )
      goto LABEL_65;
  }
  if ( (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 464LL)) )
    goto LABEL_65;
  if ( !UIPrivilegeIsolation::Enforced(v29) && (*(_DWORD *)(Valid + 64) & 1) != 0 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
    v27 = *(_QWORD *)(v19 + 464);
    if ( (*(_DWORD *)(v33 + 772) != *(_DWORD *)(v27 + 772) || *(_DWORD *)(v33 + 776) != *(_DWORD *)(v27 + 776))
      && (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x400000) == 0 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
      v29 = (UIPrivilegeIsolation *)luidSystem[0];
      if ( *(_DWORD *)(v27 + 772) != luidSystem[0] )
        goto LABEL_65;
      v29 = (UIPrivilegeIsolation *)luidSystem[1];
      v31 = *(_DWORD *)(v27 + 776) == (_DWORD)v29;
LABEL_62:
      if ( v31 )
        goto LABEL_63;
LABEL_65:
      v25 = 1;
      goto LABEL_66;
    }
  }
LABEL_63:
  v29 = *(UIPrivilegeIsolation **)(Valid + 16);
  if ( *((_QWORD *)v29 + 58) != *(_QWORD *)(v19 + 464) && (unsigned __int8)IsRestricted(*(_QWORD *)v29) )
    goto LABEL_65;
LABEL_66:
  if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) <= 1 )
  {
    if ( (a5 & 2) != 0
      || !*(_QWORD *)(W32GetUserSessionState(v29, v27) + 18944)
      || (UserSessionState = W32GetUserSessionState(v36, v35),
          UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 872LL),
            (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18944) + 472LL),
            v38))
      || (unsigned int)IsForegroundShellFrameQueueAccessible(*(const struct tagTHREADINFO **)(Valid + 16))
      || (v40 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL), *(int *)(v40 + 12) < 0) )
    {
      if ( *(_DWORD *)(Valid + 48) != 14 )
        goto LABEL_83;
      if ( *(_DWORD *)(v19 + 1556) == -1 )
        goto LABEL_83;
      if ( UIPrivilegeIsolation::CheckAccess(
             (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 872LL),
             (const struct tagUIPI_INFO *)(v19 + 1556),
             v28) )
      {
        goto LABEL_83;
      }
      v46 = *(_QWORD *)(Valid + 16);
      if ( *(int *)(*(_QWORD *)(v46 + 464) + 12LL) < 0 )
        goto LABEL_83;
      v109 = *(_QWORD *)(v19 + 1556);
      v110 = *(_DWORD *)(v19 + 1564);
      v47 = &v109;
      v45 = 0LL;
    }
    else
    {
      v41 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18944);
      v42 = *(_QWORD *)(v41 + 472);
      v43 = *(_DWORD *)(v41 + 480);
      v45 = *(_QWORD *)(W32GetUserSessionState(v41, v44) + 18944);
      v46 = *(_QWORD *)(Valid + 16);
      v107 = v42;
      v108 = v43;
      v47 = &v107;
    }
    EtwTraceUIPIInputError(v46, 0LL, v45, v47, 6);
    LOBYTE(v24) = v24 & 0xEF;
    v98 = v24;
    goto LABEL_83;
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 872LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v19 + 464) + 872LL),
          v28) )
  {
    v34 = *(_QWORD *)(Valid + 16);
    if ( *(int *)(*(_QWORD *)(v34 + 464) + 12LL) >= 0 )
    {
      LOBYTE(v24) = v24 & 0xEF;
      v98 = v24;
      EtwTraceUIPIHookError(Valid, (unsigned __int8)v24, v34, v19, v100, v6, v104[0], v101);
    }
    v25 = 1;
  }
LABEL_83:
  if ( !v25
    && (*(_DWORD *)(Valid + 64) & 1) != 0
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL)) )
  {
    v48 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
    if ( *(int *)(v48 + 12) >= 0 )
    {
      v49 = *(_QWORD *)(v19 + 464);
      if ( v48 != v49 && (*(_DWORD *)(v48 + 816) & 0x100LL) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v49)
          || (ProcessInformation = 6LL,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          v25 = 1;
        }
      }
    }
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, v19, Valid);
  if ( !v25 )
  {
    if ( *(_DWORD *)(Valid + 68) != -1 )
    {
      CurrentProcess = PsGetCurrentProcess();
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        goto LABEL_109;
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        goto LABEL_109;
      v52 = *(_DWORD *)(Valid + 68);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v138);
      HmodIndex = xxxLoadHmodIndex(v52);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v138);
      if ( !HmodIndex )
        goto LABEL_109;
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v135);
      if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*(_DWORD *)(Valid + 64) & 0x1000) != 0 )
      {
        v56 = v135;
LABEL_108:
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v56);
        goto LABEL_109;
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v135);
    }
    if ( ((*(_DWORD *)(v19 + 720) | *(_DWORD *)(**(_QWORD **)(v19 + 504) + 16LL)) & 0x400) == 0
      || *(_DWORD *)(Valid + 48) == 9 )
    {
      v54 = v104[0];
      v55 = v101;
      goto LABEL_113;
    }
    v134 = 0;
    v132[0] = (unsigned int)PsGetThreadId(*(PETHREAD *)v19);
    v133 = v6;
    v54 = v104[0];
    v132[2] = v104[0];
    v55 = v101;
    v132[1] = v101;
    if ( !(unsigned int)xxxCallHook(0LL, *(int *)(Valid + 48), (__int64)v132, 9) )
    {
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v136);
      if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*(_DWORD *)(Valid + 64) & 0x1000) == 0 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v136);
LABEL_113:
        v62 = *(_QWORD *)(v19 + 728);
        Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v111, v19, v62);
        if ( *(_QWORD *)(v19 + 520) )
        {
          v64 = (__int64 *)PhkNextValid(Valid, v63);
          v105 = *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL);
          if ( v64 )
            v65 = *v64;
          else
            v65 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL) = v65;
        }
        v112[0] = v19 + 728;
        v112[1] = Valid;
        HMAssignmentLock(v112, 1LL);
        v99 = xxxHkCallHook(Valid, v6, v54, v55);
        v113[0] = v19 + 728;
        v113[1] = v62;
        HMAssignmentLock(v113, 1LL);
        if ( *(_QWORD *)(v19 + 520) )
          *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL) = v105;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v111, v66);
        if ( (*(_DWORD *)(Valid + 64) & 0x10) == 0 )
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v67);
          return v99;
        }
        Valid = PhkNextValid(Valid, v67);
        v71 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v69, v68, v70);
        if ( v71 )
          v72 = *v71;
        else
          v72 = 0LL;
        v73 = *(ULONG_PTR **)(v72 + 456);
        if ( v73 != &BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v72, (ULONG_PTR)&BugCheckParameter3, 0LL);
        *(_QWORD *)(v72 + 456) = *v73;
        v74 = (struct tagHOOK *)HMUnlockObject(v73[1]);
        v103 = 0LL;
        BugCheckParameter3 = -1LL;
        if ( v74 )
          FreeHook(v74);
        goto LABEL_128;
      }
      v56 = v136;
      goto LABEL_108;
    }
LABEL_109:
    Valid = PhkNextValid(Valid, v50);
    v60 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v58, v57, v59);
    if ( v60 )
      v61 = *v60;
    else
      v61 = 0LL;
    v92 = *(ULONG_PTR **)(v61 + 456);
    if ( v92 != &BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v61, (ULONG_PTR)&BugCheckParameter3, 0LL);
    *(_QWORD *)(v61 + 456) = *v92;
    v93 = HMUnlockObject(v92[1]);
    v103 = 0LL;
    BugCheckParameter3 = -1LL;
    if ( v93 && (*(_DWORD *)(v93 + 64) & 0x10) != 0 )
      FreeHook((struct tagHOOK *)v93);
LABEL_128:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v75);
    v15 = v100;
    goto LABEL_179;
  }
  if ( (v24 & 0x10) == 0 )
    goto LABEL_109;
  v125 = 0;
  v129 = 0;
  v131 = 0LL;
  v126 = v101;
  v123 = Valid;
  v124 = v6;
  v128 = -1LL;
  v130 = -1LL;
  v127 = 0;
  if ( tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(*(_QWORD *)(Valid + 16) + 464LL)) )
    goto LABEL_109;
  v77 = *(_QWORD *)(v19 + 728);
  v101 = v77;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v115, v19, v77);
  v114[0] = v19 + 728;
  v114[1] = Valid;
  HMAssignmentLock(v114, 0LL);
  if ( *(_QWORD *)(v19 + 520) )
  {
    v80 = (__int64 *)PhkNextValid(Valid, v78);
    v78 = *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL);
    v105 = v78;
    if ( v80 )
      v79 = *v80;
    else
      v79 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL) = v79;
  }
  if ( (v24 & 0x20) != 0 )
  {
    v20 = (*(_DWORD *)(Valid + 64) & 0x40) != 0 ? 30000 : *(_DWORD *)(W32GetUserSessionState(v79, v78) + 64240);
    if ( (*(_DWORD *)(Valid + 64) & 0x4000) != 0 )
      v20 = 20;
  }
  if ( (v24 & 0x20) != 0 || (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0xC) != 0 )
  {
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0;
    v116 = 2;
    v120 = 2;
    v121 = v20;
    v122 = &v99;
    if ( (v24 & 0x20) != 0 )
    {
      v128 = *(_QWORD *)(v19 + 1544);
      v129 = *(_DWORD *)(v19 + 1552);
      v130 = *(_QWORD *)(v19 + 1556);
      LODWORD(v131) = *(_DWORD *)(v19 + 1564);
      v126 = *(_QWORD *)(v19 + 1568);
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x20000) != 0
      || IsThreadHung(*(const struct tagTHREADINFO **)(Valid + 16)) )
    {
      v99 = 0LL;
    }
    else
    {
      v81 = BoostHook(v19, Valid, a5);
      v97 = v81;
      if ( v81 )
        v127 |= 1u;
      if ( !xxxInterSendMsgEx(0LL, 788LL, v104[0], &v123, 1, *(_QWORD *)(Valid + 16), &v116, 1, 0) )
      {
        v99 = 0LL;
        if ( (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
        {
          v82 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v82 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v24 = *(_DWORD *)(Valid + 48);
            ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(Valid + 16));
            v85 = *(_QWORD *)(Valid + 16);
            v86 = *(_DWORD *)(*(_QWORD *)(v85 + 464) + 56LL);
            v88 = W32GetUserSessionState(v85, v87);
            WPP_RECORDER_AND_TRACE_SF_DDd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v82,
              v83,
              *(_QWORD *)(v88 + 69416),
              ReturnLength,
              v95,
              47,
              v96,
              v86,
              ThreadId,
              v24);
            v81 = v97;
            LOBYTE(v24) = v98;
            v77 = v101;
          }
        }
      }
      if ( v81 )
        DeBoostHook((struct tagHOOK *)Valid);
    }
    if ( (v24 & 0x20) != 0 && v99 )
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 488LL) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
  else
  {
    v99 = xxxInterSendMsgEx(0LL, 788LL, v104[0], &v123, 1, *(_QWORD *)(Valid + 16), 0LL, 1, 0);
  }
  v104[0] = v19 + 728;
  v104[1] = v77;
  HMAssignmentLock(v104, 1LL);
  if ( *(_QWORD *)(v19 + 520) )
    *(_QWORD *)(*(_QWORD *)(v19 + 520) + 48LL) = v105;
  v90 = v99;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v115, v89);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v91);
  return v90;
}
