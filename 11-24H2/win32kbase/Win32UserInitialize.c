/*
 * XREFs of Win32UserInitialize @ 0x1402E5DE4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x14009E788 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     FastGetProfileDwordEx @ 0x14009FAE0 (FastGetProfileDwordEx.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1400C844C (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     UserAddAtomEx @ 0x1400D8E10 (UserAddAtomEx.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     IsIMMEnabledSystem @ 0x14012AA20 (IsIMMEnabledSystem.c)
 *     SharedAlloc @ 0x14014DBE0 (SharedAlloc.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019D488 (-InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0 (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@UIPrivilegeIsolation@@YAXXZ @ 0x1401A5BA0 (-Initialize@UIPrivilegeIsolation@@YAXXZ.c)
 *     ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401A5C0C (-TraceLegacyState@UIPrivilegeIsolation@@YAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     InitClipFormatExceptionList @ 0x14023B35C (InitClipFormatExceptionList.c)
 *     InitClipboardILDef @ 0x14023B390 (InitClipboardILDef.c)
 *     IsInitClipFormatExceptionListSupported @ 0x14023B438 (IsInitClipFormatExceptionListSupported.c)
 *     IsInitClipboardILDefSupported @ 0x14023B470 (IsInitClipboardILDefSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     InitKernelHandleTable @ 0x1402E22B0 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1402E23C8 (HMInitHandleTable.c)
 *     InitSecurity @ 0x1402E3DD4 (InitSecurity.c)
 *     InitCreateUserSubsystem @ 0x1402E4B58 (InitCreateUserSubsystem.c)
 *     InitCreateSharedSection @ 0x1402E4F6C (InitCreateSharedSection.c)
 *     InitQEntryLookaside @ 0x1402E542C (InitQEntryLookaside.c)
 *     UserRtlCreateAtomTable @ 0x1402E55FC (UserRtlCreateAtomTable.c)
 */

__int64 __fastcall Win32UserInitialize(__int64 a1)
{
  unsigned int v1; // r13d
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int (*v9)(void); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (*v12)(void); // rax
  int v13; // esi
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_QWORD); // rax
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  int v22; // edi
  GroupedProcessForegroundBoost *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r14
  _OWORD *v27; // rdx
  _OWORD *v28; // rcx
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int64 CurrentProcess; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int inited; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int (*v38)(void); // rax
  __int64 v39; // rdx
  __int64 (*v40)(void); // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int16 v48; // bx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int16 v51; // bx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int (*v57)(void); // rax
  void (*v58)(void); // rax
  int (*v59)(void); // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int (*v62)(void); // rax
  PVOID v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rbx
  unsigned int i; // r14d
  unsigned int v67; // r15d
  __int64 v68; // r12
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  PVOID v74; // rbx
  __int64 v75; // rcx
  _QWORD *v76; // rcx
  _QWORD *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  volatile signed __int32 *v81; // rcx
  __int64 v82; // rcx
  volatile signed __int32 *v83; // rcx
  int v84; // ebx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  int (*v95)(void); // rax
  void (*v96)(void); // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  int (*v99)(void); // rax
  void (*v100)(void); // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  int (*v103)(void); // rax
  void (*v104)(void); // rax
  int (*v105)(void); // rax
  __int64 v106; // rdx
  unsigned int (*v107)(void); // rax
  __int64 v108; // rdx
  int (*v109)(void); // rax
  __int64 v110; // rdx
  unsigned int (*v111)(void); // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // rcx
  _QWORD *v116; // rcx
  int v117; // ebx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  int v124; // ebx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  _OWORD *v138; // rax
  __int128 v139; // xmm1
  __int64 v140; // rdx
  UIPrivilegeIsolation *v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  bool v146; // zf
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  int (*v152)(void); // rax
  __int64 v153; // rdx
  void (*v154)(void); // rax
  __int64 v155; // rdi
  __int64 Pool2; // rax
  __int64 v157; // rdx
  __int64 v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rdx
  int (*v162)(void); // rax
  __int64 (*v163)(void); // rax
  int (*v164)(void); // rax
  __int64 v165; // rcx
  __int64 v166; // rbx
  __int64 v167; // rdx
  __int64 v168; // rcx
  unsigned int (__fastcall *v169)(__int64, __int64); // rax
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rcx
  __int128 v173; // [rsp+40h] [rbp-20h]
  __int128 v174; // [rsp+50h] [rbp-10h]
  int v175; // [rsp+A0h] [rbp+40h]
  __int64 v176; // [rsp+A8h] [rbp+48h] BYREF

  v175 = a1;
  v1 = a1;
  LODWORD(v176) = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      26,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  *(_QWORD *)(W32GetUserSessionState(a1) + 62992) = 1LL;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 3264LL);
  if ( v9 && v9() >= 0 )
  {
    v12 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 3272LL);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = v12();
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  result = InitCreateSharedSection();
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable(v15);
    if ( (int)result >= 0 )
    {
      v18 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 192LL);
      if ( v18 )
      {
        v13 = v18(v1);
        if ( v13 >= 0 )
        {
          v20 = (_QWORD *)W32GetUserSessionState(v19);
          v21 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                  v20,
                  1,
                  0,
                  (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          v20[3] = v21;
          if ( v21 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v21) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v20 + 2468));
            DestroyDeferredUnlockObjectAssignmentList(v20 + 2475);
            DestroyDeferredUnlockObjectAssignmentList(v20 + 2473);
          }
          v22 = v13;
          if ( !(unsigned int)InitSecurity() )
            goto LABEL_118;
          *(_DWORD *)(ExWindowStationObjectType + 108LL) = 288;
          *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
          *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
          *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
          *((_DWORD *)ExDesktopObjectType + 27) = 392;
          *((_DWORD *)ExDesktopObjectType + 26) = 0;
          *((_DWORD *)ExDesktopObjectType + 23) = 983551;
          *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
          *(_DWORD *)(W32GetUserSessionState(ExDesktopObjectType) + 62824) = 7;
          v26 = W32GetUserSessionState(v24);
          v27 = &unk_14026BA80;
          *(_DWORD *)(v26 + 67056) = 589824;
          *(_QWORD *)(v26 + 67060) = 0x1280033E9ELL;
          v28 = (_OWORD *)(v26 + 67072);
          v29 = 3LL;
          do
          {
            *v28 = *v27;
            v28[1] = v27[1];
            v28[2] = v27[2];
            v28[3] = v27[3];
            v28[4] = v27[4];
            v28[5] = v27[5];
            v28[6] = v27[6];
            v28 += 8;
            v30 = v27[7];
            v27 += 8;
            *(v28 - 1) = v30;
            --v29;
          }
          while ( v29 );
          *(_QWORD *)&v173 = 0x2000000LL;
          *((_QWORD *)&v173 + 1) = v26 + 68104;
          *v28 = *v27;
          v28[1] = v27[1];
          v28[2] = v27[2];
          v28[3] = v27[3];
          v28[4] = v27[4];
          *(_OWORD *)(v26 + 68616) = v173;
          *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
          *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
          *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
          *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
          *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
          *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1120;
          *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
          *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
          *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
          CurrentProcess = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL, 128LL, v25);
          *(_QWORD *)(W32GetUserSessionState(v32) + 68632) = CurrentProcess;
          inited = InitQEntryLookaside(v33);
          v37 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v36, v35) + 48);
          v38 = *(int (**)(void))(v37 + 3280);
          if ( v38 && v38() >= 0 )
          {
            v37 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v37, v39) + 48);
            v40 = *(__int64 (**)(void))(v37 + 3288);
            if ( v40 )
              v41 = v40();
            else
              v41 = -1073741637;
            inited |= v41;
          }
          v42 = W32GetUserSessionState(v37);
          v44 = UserRtlCreateAtomTable(v43, (_QWORD *)(v42 + 41440)) | inited;
          v46 = W32GetUserSessionState(v45);
          v22 = UserRtlCreateAtomTable(v47, (_QWORD *)(v46 + 41448)) | v44;
          if ( v22 < 0 )
            goto LABEL_118;
          v48 = UserAddAtomEx((__int64)L"USER32", 1, 2u);
          *(_WORD *)(W32GetUserSessionState(v49) + 41420) = v48;
          v51 = *(_WORD *)(W32GetUserSessionState(v50) + 41420);
          *(_WORD *)(W32GetUserSessionState(v52) + 41384) = v51;
          if ( !*(_WORD *)(W32GetUserSessionState(v53) + 41384) )
            goto LABEL_118;
          *(_QWORD *)&v174 = 0x2000000LL;
          *((_QWORD *)&v174 + 1) = v26 + 67568;
          *(_OWORD *)(v26 + 68080) = v174;
          if ( !(unsigned int)InitCreateUserSubsystem() )
            goto LABEL_118;
          v56 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v54) + 48);
          v57 = *(int (**)(void))(v56 + 3296);
          if ( v57 )
          {
            if ( v57() >= 0 )
            {
              v56 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v55) + 48);
              v58 = *(void (**)(void))(v56 + 3304);
              if ( v58 )
                v58();
            }
          }
          v59 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v55) + 48) + 16LL);
          if ( v59 )
          {
            if ( v59() >= 0 )
            {
              v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v61, v60) + 48);
              v62 = (int (*)(void))*((_QWORD *)v23 + 3);
              if ( !v62 || v62() < 0 )
                goto LABEL_118;
            }
          }
          v63 = SharedAlloc(0x2388uLL);
          *(_QWORD *)(W32GetUserSessionState(v64) + 19928) = v63;
          if ( !v63 )
            goto LABEL_118;
          v65 = 2524LL;
          for ( i = 2; i < 0x12; ++i )
          {
            v67 = 0;
            v68 = v65;
            do
            {
              ++v67;
              v23 = *(GroupedProcessForegroundBoost **)(W32GetUserSessionState(v23) + 19928);
              *(_DWORD *)((char *)v23 + v68) = -1;
              v68 += 4LL;
            }
            while ( v67 < 0x1E );
            v65 += 120LL;
          }
          v69 = *(_QWORD *)(W32GetUserSessionState(v23) + 19928);
          *(_DWORD *)(v69 + 5128) = 8;
          *(_DWORD *)(v69 + 5132) = 16;
          v70 = Win32AllocPoolZInitImpl(256LL, 0xB0uLL, 0x70646B55u);
          *(_QWORD *)(W32GetUserSessionState(v71) + 57008) = v70;
          if ( !*(_QWORD *)(W32GetUserSessionState(v72) + 57008) )
            goto LABEL_118;
          v73 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23) + 57008) + 24LL);
          v73[1] = v73;
          *v73 = v73;
          v74 = SharedAlloc(0x28uLL);
          v76 = *(_QWORD **)(W32GetUserSessionState(v75) + 57008);
          *v76 = v74;
          v77 = *(_QWORD **)(W32GetUserSessionState(v76) + 57008);
          if ( !*v77 )
          {
            v78 = W32GetUserSessionState(v77);
            GreDeleteFastMutex(*(char **)(v78 + 57008));
            *(_QWORD *)(W32GetUserSessionState(v79) + 57008) = 0LL;
            goto LABEL_118;
          }
          if ( (unsigned int)IsDesktopHeapLoggingOn((__int64)v77) )
          {
            v81 = *(volatile signed __int32 **)(W32GetUserSessionState(v80) + 19928);
            _InterlockedOr(v81, 0x100u);
          }
          else
          {
            v81 = *(volatile signed __int32 **)(W32GetUserSessionState(v80) + 19928);
            _InterlockedAnd(v81, 0xFFFFFEFF);
          }
          if ( (_BYTE)NlsMbCodePageTag )
            _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v81) + 19928), 2u);
          else
            _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v81) + 19928), 0xFFFFFFFD);
          if ( (unsigned int)IsIMMEnabledSystem() )
            _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v82) + 19928), 4u);
          else
            _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v82) + 19928), 0xFFFFFFFB);
          v83 = *(volatile signed __int32 **)(W32GetUserSessionState((unsigned __int16)(NlsAnsiCodePage - 1255)) + 19928);
          if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
            _InterlockedOr(v83, 8u);
          else
            _InterlockedAnd(v83, 0xFFFFFFF7);
          v84 = *(_DWORD *)(W32GetUserSessionState(v83) + 62968) << 10;
          *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v85) + 19928) + 924LL) = v84;
          v86 = Win32AllocPoolZInitImpl(256LL, 0xF0uLL, 0x646B7355u);
          *(_QWORD *)(W32GetUserSessionState(v87) + 62960) = v86;
          if ( !*(_QWORD *)(W32GetUserSessionState(v88) + 62960) )
            goto LABEL_118;
          v89 = W32GetUserSessionState(v23) + 62888;
          v91 = *(__int64 **)(W32GetUserSessionState(v90) + 62960);
          *v91 = v89;
          v94 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v91, v92) + 48);
          v95 = *(int (**)(void))(v94 + 3312);
          if ( v95 )
          {
            if ( v95() >= 0 )
            {
              v94 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v93) + 48);
              v96 = *(void (**)(void))(v94 + 3320);
              if ( v96 )
                v96();
            }
          }
          v98 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v93) + 48);
          v99 = *(int (**)(void))(v98 + 3328);
          if ( v99 )
          {
            if ( v99() >= 0 )
            {
              v98 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98, v97) + 48);
              v100 = *(void (**)(void))(v98 + 3336);
              if ( v100 )
                v100();
            }
          }
          v102 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v98, v97) + 48);
          v103 = *(int (**)(void))(v102 + 3344);
          if ( v103 )
          {
            if ( v103() >= 0 )
            {
              v102 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v102, v101) + 48);
              v104 = *(void (**)(void))(v102 + 3352);
              if ( v104 )
                v104();
            }
          }
          v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v102, v101) + 48);
          v105 = (int (*)(void))*((_QWORD *)v23 + 420);
          if ( v105 )
          {
            if ( v105() >= 0 )
            {
              v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v23, v106) + 48);
              v107 = (unsigned int (*)(void))*((_QWORD *)v23 + 421);
              if ( !v107 || !v107() )
                goto LABEL_118;
            }
          }
          if ( !GroupedProcessForegroundBoost::InitAtoms(v23) )
            goto LABEL_118;
          v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v23, v108) + 48);
          v109 = (int (*)(void))*((_QWORD *)v23 + 422);
          if ( v109 )
          {
            if ( v109() >= 0 )
            {
              v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v23, v110) + 48);
              v111 = (unsigned int (*)(void))*((_QWORD *)v23 + 423);
              if ( !v111 || !v111() )
                goto LABEL_118;
            }
          }
          v112 = W32GetUserSessionState(v23);
          if ( !(unsigned int)HMInitHandleTable(*(_QWORD *)(v112 + 19912)) )
            goto LABEL_118;
          v113 = W32GetUserSessionState(v23);
          v115 = *(_QWORD *)(W32GetUserSessionState(v114) + 19928);
          *(_QWORD *)(v113 + 19936) = v115;
          v116 = *(_QWORD **)(W32GetUserSessionState(v115) + 57008);
          *(_QWORD *)(v113 + 19960) = *v116;
          *(_DWORD *)(v113 + 20504) = *(_DWORD *)(W32GetUserSessionState(v116) + 71432);
          FastGetProfileDwordEx(0LL, 2LL, L"USERProcessHandleQuota", 10000, 0, &v176, 0LL);
          gUserProcessHandleQuota = v176;
          FastGetProfileDwordEx(0LL, 2LL, L"USERPostMessageLimit", 10000, 0, &v176, 0LL);
          v117 = v176;
          v119 = W32GetUserSessionState(v118);
          if ( v117 )
            *(_DWORD *)(v119 + 69328) = v117;
          else
            *(_DWORD *)(v119 + 69328) = -1;
          *(_DWORD *)(W32GetUserSessionState(v120) + 63272) = 50;
          v122 = W32GetUserSessionState(v121);
          FastGetProfileDwordEx(0LL, 2LL, L"USERNestedWindowLimit", *(_DWORD *)(v122 + 63272), 0, &v176, 0LL);
          v124 = v176;
          if ( (unsigned int)(v176 - 35) <= 0x41 )
            *(_DWORD *)(W32GetUserSessionState(v123) + 63272) = v124;
          v125 = W32GetUserSessionState(v123);
          FastGetProfileDwordEx(0LL, 40LL, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v125 + 19928) + 2240LL), 0LL);
          v127 = W32GetUserSessionState(v126);
          FastGetProfileDwordEx(0LL, 41LL, L"Installed", 0, 0, (_DWORD *)(*(_QWORD *)(v127 + 19928) + 2244LL), 0LL);
          v129 = W32GetUserSessionState(v128);
          FastGetProfileDwordEx(0LL, 45LL, L"R2BuildNumber", 0, 0, (_DWORD *)(*(_QWORD *)(v129 + 19928) + 2252LL), 0LL);
          v131 = W32GetUserSessionState(v130);
          FastGetProfileDwordEx(
            0LL,
            46LL,
            L"StarterBuildNumber",
            0,
            0,
            (_DWORD *)(*(_QWORD *)(v131 + 19928) + 2248LL),
            0LL);
          *(_WORD *)(W32GetUserSessionState(v132) + 69304) = 0;
          *(_DWORD *)(W32GetUserGdiSessionState(v133) + 36) = 0;
          v135 = W32GetUserSessionState(v134);
          v136 = 3LL;
          *(_DWORD *)(v135 + 70200) = 150;
          v137 = v135 + 70204;
          v138 = &_tagPNPGLOBALS::aDefaultReportDescriptorInput;
          do
          {
            *(_OWORD *)v137 = *v138;
            *(_OWORD *)(v137 + 16) = v138[1];
            *(_OWORD *)(v137 + 32) = v138[2];
            *(_OWORD *)(v137 + 48) = v138[3];
            *(_OWORD *)(v137 + 64) = v138[4];
            *(_OWORD *)(v137 + 80) = v138[5];
            *(_OWORD *)(v137 + 96) = v138[6];
            v137 += 128LL;
            v139 = v138[7];
            v138 += 8;
            *(_OWORD *)(v137 - 16) = v139;
            --v136;
          }
          while ( v136 );
          *(_OWORD *)v137 = *v138;
          *(_OWORD *)(v137 + 16) = v138[1];
          *(_OWORD *)(v137 + 32) = v138[2];
          *(_OWORD *)(v137 + 48) = v138[3];
          *(_OWORD *)(v137 + 64) = v138[4];
          *(_OWORD *)(v137 + 80) = v138[5];
          *(_OWORD *)(v137 + 96) = v138[6];
          *(_WORD *)(v137 + 112) = *((_WORD *)v138 + 56);
          if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v175 )
              UIPrivilegeIsolation::TraceLegacyState(v141);
            if ( (int)IsInitClipFormatExceptionListSupported((__int64)v141, v140) >= 0 )
              InitClipFormatExceptionList(v143, v147);
            v146 = v175 == 0;
          }
          else
          {
            UIPrivilegeIsolation::Initialize(v141);
            if ( !LOBYTE(WPP_MAIN_CB.SectorSize) )
            {
LABEL_102:
              v149 = *(_QWORD *)(W32GetUserSessionState(v143) + 19928);
              *(_DWORD *)(v149 + 2236) &= ~0x20u;
              v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v149, v150) + 48);
              v152 = *(int (**)(void))(v151 + 3424);
              if ( v152 )
              {
                if ( v152() >= 0 )
                {
                  v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151, v153) + 48);
                  v154 = *(void (**)(void))(v151 + 3432);
                  if ( v154 )
                    v154();
                }
              }
              v155 = W32GetUserSessionState(v151);
              Pool2 = ExAllocatePool2(256LL, 24LL, 1146310722LL);
              v158 = Pool2;
              if ( !Pool2 )
              {
                *(_QWORD *)(v155 + 57056) = 0LL;
                v22 = -1073741801;
                goto LABEL_118;
              }
              *(_QWORD *)Pool2 = 0LL;
              *(_WORD *)(Pool2 + 8) = 0;
              *(_QWORD *)(Pool2 + 16) = -450000000LL;
              DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)Pool2, v157);
              *(_QWORD *)(v155 + 57056) = v158;
              v22 = 0;
              v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v160, v159) + 48);
              v162 = (int (*)(void))*((_QWORD *)v23 + 55);
              if ( !v162 || v162() < 0 )
                goto LABEL_111;
              v23 = *(GroupedProcessForegroundBoost **)(W32GetWin32kBaseApiSetTable(v23, v161) + 48);
              v163 = (__int64 (*)(void))*((_QWORD *)v23 + 56);
              if ( !v163 )
              {
                v22 = -1073741637;
                goto LABEL_118;
              }
              v22 = v163();
              if ( v22 >= 0 )
              {
LABEL_111:
                v164 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v161) + 48) + 3456LL);
                if ( !v164
                  || v164() < 0
                  || (v166 = W32GetUserSessionState(v165) + 63296,
                      (v169 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                              v168,
                                                                                              v167)
                                                                                          + 48)
                                                                              + 3464LL)) != 0LL)
                  && v169(v166, 4LL) )
                {
LABEL_122:
                  UserSessionSwitchLeaveCritWithNonPaged();
                  return (unsigned int)v22;
                }
              }
LABEL_118:
              if ( *(_QWORD *)(W32GetUserSessionState(v23) + 62960) )
              {
                v171 = W32GetUserSessionState(v170);
                GreDeleteFastMutex(*(char **)(v171 + 62960));
                *(_QWORD *)(W32GetUserSessionState(v172) + 62960) = 0LL;
              }
              if ( v22 >= 0 )
                v22 = -1073741801;
              goto LABEL_122;
            }
            if ( (int)IsInitClipFormatExceptionListSupported(v143, v142) >= 0 )
              InitClipFormatExceptionList(v145, v144);
            v146 = (unsigned int)IsCurrentSessionHostServiceSession() == 0;
          }
          if ( !v146 && (int)IsInitClipboardILDefSupported(v143, v147) >= 0 )
            InitClipboardILDef(v143, v148);
          goto LABEL_102;
        }
        return (unsigned int)v13;
      }
      return (unsigned int)-1073741637;
    }
  }
  return result;
}
