/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140165224 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     FreeMessageList @ 0x1401001D0 (FreeMessageList.c)
 *     IsFreeMessageListSupported @ 0x140108404 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EA64 (FreeQueue.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x140134A3C (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     FreeTimer @ 0x140197170 (FreeTimer.c)
 *     ??4?$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z @ 0x14019E480 (--4-$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x14019E4BC (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     IsFreeSMSSupported @ 0x14019E610 (IsFreeSMSSupported.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0 (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401A9C08 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B0E7C (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     CleanupKeyboardLayouts @ 0x14020FB14 (CleanupKeyboardLayouts.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kNtUserCleanupInternal(__int64 a1)
{
  __int64 UserSessionState; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  void (*v7)(void); // rax
  __int64 v8; // rdx
  char *v9; // rcx
  int (*v10)(void); // rax
  void (__fastcall *v11)(char ***); // rax
  __int64 v12; // rdx
  char *v13; // rcx
  int (*v14)(void); // rax
  void (__fastcall *v15)(char ***); // rax
  char *v16; // rcx
  int (*v17)(void); // rax
  __int64 v18; // rdx
  void (__fastcall *v19)(char ***); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  int (*v24)(void); // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  char *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 UserGdiSessionState; // rbx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  void *v75; // rcx
  char *v76; // rdi
  char *v77; // rbx
  char *v78; // rcx
  char *v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  _QWORD *v83; // rdi
  __int64 v84; // rax
  void (__fastcall *v85)(_QWORD *, _QWORD); // rax
  __int64 v86; // rcx
  int (*v87)(void); // rax
  __int64 v88; // rdx
  void (__fastcall *v89)(char ***); // rax
  char *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  char *v97; // rbx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  char *v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rcx
  char *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rcx
  int (*v126)(void); // rax
  __int64 v127; // rdx
  void (*v128)(void); // rax
  __int64 v129; // rbx
  void *v130; // rcx
  char **v131; // [rsp+50h] [rbp+20h] BYREF
  void *v132; // [rsp+58h] [rbp+28h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  GreDeleteFastMutex(*(char **)(UserSessionState + 18968));
  *(_QWORD *)(UserSessionState + 18968) = 0LL;
  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 48);
  v6 = *(int (**)(void))(v5 + 48);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48);
      v7 = *(void (**)(void))(v5 + 56);
      if ( v7 )
        v7();
    }
  }
  v9 = *(char **)(W32GetWin32kBaseApiSetTable(v5, v4) + 48);
  v10 = (int (*)(void))*((_QWORD *)v9 + 8);
  if ( v10 && v10() >= 0 )
  {
    v131 = 0LL;
    v11 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 72LL);
    if ( v11 )
      v11(&v131);
    v9 = *v131;
    if ( *v131 )
    {
      GreDeleteFastMutex(v9);
      *v131 = 0LL;
    }
  }
  v13 = *(char **)(W32GetWin32kBaseApiSetTable(v9, v8) + 48);
  v14 = (int (*)(void))*((_QWORD *)v13 + 10);
  if ( v14 && v14() >= 0 )
  {
    v131 = 0LL;
    v15 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 88LL);
    if ( v15 )
      v15(&v131);
    v13 = *v131;
    if ( *v131 )
    {
      GreDeleteFastMutex(v13);
      *v131 = 0LL;
    }
  }
  v16 = *(char **)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
  v17 = (int (*)(void))*((_QWORD *)v16 + 12);
  if ( v17 && v17() >= 0 )
  {
    v131 = 0LL;
    v19 = *(void (__fastcall **)(char ***))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v18) + 48) + 104LL);
    if ( v19 )
      v19(&v131);
    v16 = *v131;
    if ( *v131 )
    {
      GreDeleteFastMutex(v16);
      *v131 = 0LL;
    }
  }
  v22 = (_QWORD *)(W32GetUserSessionState(v16) + 57584);
  while ( (_QWORD *)*v22 != v22 )
  {
    v23 = *v22 - 72LL;
    v20 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48);
    v24 = *(int (**)(void))(v20 + 112);
    if ( v24 && v24() >= 0 )
      FreeTimer(v23);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v21) + 69200) )
  {
    v26 = W32GetUserSessionState(v25);
    KeCancelTimer(*(PKTIMER *)(v26 + 69200));
    v28 = W32GetUserSessionState(v27);
    GreDeleteFastMutex(*(char **)(v28 + 69200));
    v131 = 0LL;
    SGRDPgptmrWD<_KTIMER *>::operator=(v29, &v131);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v25) + 21912) )
  {
    Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
    v32 = W32GetUserSessionState(v31);
    GreDeleteFastMutex(*(char **)(v32 + 21912));
  }
  LODWORD(v131) = 0;
  v132 = 0LL;
  if ( *(_QWORD *)W32GetUserSessionState(v30) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)CSTPop((unsigned int *)&v131, &v132) )
        goto LABEL_43;
      if ( (_DWORD)v131 == 2 || (_DWORD)v131 == 4 )
        break;
      if ( (_DWORD)v131 == 8 )
      {
        v34 = v132;
        if ( *(_QWORD *)v132 )
        {
          GreDeleteFastMutex(*(char **)v132);
          *v34 = 0LL;
        }
LABEL_40:
        v35 = (char *)v34[1];
        if ( v35 )
        {
          GreDeleteFastMutex(v35);
          v34[1] = 0LL;
        }
      }
    }
    v34 = v132;
    goto LABEL_40;
  }
LABEL_43:
  if ( *(_QWORD *)(W32GetUserSessionState(v33) + 18848) )
  {
    v37 = W32GetUserSessionState(v36);
    ExDeleteResourceLite(*(PERESOURCE *)(v37 + 18848));
    v39 = W32GetUserSessionState(v38);
    ExFreePoolWithTag(*(PVOID *)(v39 + 18848), 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v36) + 69176) )
  {
    v41 = W32GetUserSessionState(v40);
    ObfDereferenceObject(*(PVOID *)(v41 + 69176));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v40) + 69168) )
  {
    v43 = W32GetUserSessionState(v42);
    ObfDereferenceObject(*(PVOID *)(v43 + 69168));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v42) + 68936) )
  {
    v45 = W32GetUserSessionState(v44);
    ObfDereferenceObject(*(PVOID *)(v45 + 68936));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v44) + 62848) )
  {
    v47 = W32GetUserSessionState(v46);
    GreDeleteFastMutex(*(char **)(v47 + 62848));
    *(_QWORD *)(v47 + 62848) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v46) + 68640) )
  {
    v49 = W32GetUserSessionState(v48);
    GreDeleteFastMutex(*(char **)(v49 + 68640));
    *(_QWORD *)(v49 + 68640) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v48) + 68648) )
  {
    v51 = W32GetUserSessionState(v50);
    GreDeleteFastMutex(*(char **)(v51 + 68648));
    *(_QWORD *)(v51 + 68648) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v50) + 68656) )
  {
    v53 = W32GetUserSessionState(v52);
    GreDeleteFastMutex(*(char **)(v53 + 68656));
    *(_QWORD *)(v53 + 68656) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v52) + 18760) )
  {
    v55 = W32GetUserSessionState(v54);
    GreDeleteFastMutex(*(char **)(v55 + 18760));
    *(_QWORD *)(v55 + 18760) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v54) + 8) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v56);
    GreDeleteFastMutex(*(char **)(UserGdiSessionState + 8));
    *(_QWORD *)(UserGdiSessionState + 8) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v56) + 69128) )
  {
    v59 = W32GetUserSessionState(v58);
    GreDeleteFastMutex(*(char **)(v59 + 69128));
    *(_QWORD *)(v59 + 69128) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v58) + 18832) )
  {
    v61 = W32GetUserSessionState(v60);
    GreDeleteFastMutex(*(char **)(v61 + 18832));
    *(_QWORD *)(v61 + 18832) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v60) + 16824) )
  {
    v63 = W32GetUserSessionState(v62);
    ObfDereferenceObject(*(PVOID *)(v63 + 16824));
    *(_QWORD *)(W32GetUserSessionState(v64) + 16824) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v62) + 41440) )
  {
    v66 = W32GetUserSessionState(v65);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v66 + 41440));
    *(_QWORD *)(W32GetUserSessionState(v67) + 41440) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v65) + 41448) )
  {
    v69 = W32GetUserSessionState(v68);
    RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v69 + 41448));
    *(_QWORD *)(W32GetUserSessionState(v70) + 41448) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v68) + 19496) )
  {
    v72 = W32GetUserSessionState(v71);
    ObfDereferenceObject(*(PVOID *)(v72 + 19496));
    *(_QWORD *)(W32GetUserSessionState(v73) + 19496) = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      v75 = *(void **)(W32GetUserSessionState(v74) + 69352);
      if ( !v75 )
        break;
      Win32JobObject::_anonymous_namespace_::DeleteW32Job(v75);
    }
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v74) + 69352) )
  {
    v76 = *(char **)(W32GetUserSessionState(v75) + 69352);
    while ( v76 )
    {
      v77 = v76;
      v76 = *(char **)v76;
      v78 = (char *)*((_QWORD *)v77 + 8);
      if ( v78 )
      {
        GreDeleteFastMutex(v78);
        *((_QWORD *)v77 + 8) = 0LL;
      }
      v79 = (char *)*((_QWORD *)v77 + 6);
      if ( v79 )
      {
        GreDeleteFastMutex(v79);
        *((_QWORD *)v77 + 6) = 0LL;
      }
      RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)v77 + 3));
      GreDeleteFastMutex(v77);
    }
  }
  v80 = W32GetUserSessionState(v75) + 69312;
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( *(_QWORD *)v80 )
    {
      while ( 1 )
      {
        v83 = *(_QWORD **)v80;
        if ( *(_QWORD *)v80 == v80 )
          break;
        if ( v83[1] != v80 || (v84 = *v83, *(_QWORD **)(*v83 + 8LL) != v83) )
          __fastfail(3u);
        *(_QWORD *)v80 = v84;
        *(_QWORD *)(v84 + 8) = v80;
        v81 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v82, v81) + 48);
        v85 = *(void (__fastcall **)(_QWORD *, _QWORD))(v81 + 168);
        if ( v85 )
          v85(v83, 0LL);
      }
    }
    *(_QWORD *)(v80 + 8) = v80;
    *(_QWORD *)v80 = v80;
  }
  v86 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v82, v81) + 48);
  v87 = *(int (**)(void))(v86 + 176);
  if ( v87 && v87() >= 0 )
  {
    v131 = 0LL;
    v86 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v86, v88) + 48);
    v89 = *(void (__fastcall **)(char ***))(v86 + 184);
    if ( v89 )
      v89(&v131);
    v90 = *v131;
    if ( *v131 )
    {
      v91 = W32GetUserSessionState(v86);
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        (NSInstrumentation::CLeakTrackingAllocator *)(v91 + 72288),
        v90);
      *v131 = 0LL;
    }
  }
  v94 = W32GetUserSessionState(v86);
  if ( *(_QWORD *)(v94 + 19144) )
  {
    if ( (int)IsFreeMessageListSupported(v93, v92) >= 0 )
      FreeMessageList(*(_QWORD *)(v94 + 19144) + 24LL, v95);
    FreeQueue(*(char **)(v94 + 19144));
    *(_QWORD *)(v94 + 19144) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v93) + 16864) )
  {
    v97 = *(char **)(W32GetUserSessionState(v96) + 16864);
    v99 = W32GetUserSessionState(v98);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v99 + 72288),
      v97);
    *(_QWORD *)(W32GetUserSessionState(v100) + 16864) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v96) + 16872) )
  {
    v102 = *(char **)(W32GetUserSessionState(v101) + 16872);
    v104 = W32GetUserSessionState(v103);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(v104 + 72288),
      v102);
    *(_QWORD *)(W32GetUserSessionState(v105) + 16872) = 0LL;
  }
  CleanupKeyboardLayouts();
  v107 = *(char **)(W32GetUserSessionState(v106) + 63336);
  if ( v107 )
    GreDeleteFastMutex(v107);
  if ( *(_QWORD *)(W32GetUserSessionState(v107) + 63576) )
  {
    v109 = W32GetUserSessionState(v108);
    GreDeleteFastMutex(*(char **)(v109 + 63576));
    *(_QWORD *)(W32GetUserSessionState(v110) + 63576) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v108) + 19864) )
  {
    v112 = W32GetUserSessionState(v111);
    ExFreePoolWithTag(*(PVOID *)(v112 + 19864), 0);
    *(_QWORD *)(W32GetUserSessionState(v113) + 19864) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v111) + 512) )
  {
    v115 = W32GetUserSessionState(v114);
    GreDeleteFastMutex(*(char **)(v115 + 512));
    *(_QWORD *)(W32GetUserSessionState(v116) + 512) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v114) + 8) )
  {
    v118 = W32GetUserSessionState(v117);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v118 + 8));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v117) + 16) )
  {
    v120 = W32GetUserSessionState(v119);
    CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v120 + 16));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v119) + 68696) )
  {
    v123 = W32GetUserSessionState(v122);
    ObfDereferenceObject(*(PVOID *)(v123 + 68696));
    v131 = 0LL;
    SGRDPgpRemoteSessionOcclusionEvent<_KEVENT *>::operator=(v124, &v131);
  }
  v125 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v122, v121) + 48);
  v126 = *(int (**)(void))(v125 + 456);
  if ( v126 )
  {
    if ( v126() >= 0 )
    {
      v125 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v125, v127) + 48);
      v128 = *(void (**)(void))(v125 + 464);
      if ( v128 )
        v128();
    }
  }
  v129 = W32GetUserSessionState(v125);
  v130 = *(void **)(v129 + 57056);
  if ( v130 )
    ExFreePoolWithTag(v130, 0x44535042u);
  *(_QWORD *)(v129 + 57056) = 0LL;
}
