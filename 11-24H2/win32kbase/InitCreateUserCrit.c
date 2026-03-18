/*
 * XREFs of InitCreateUserCrit @ 0x1402E5784
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x140139D40 (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x140148598 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ @ 0x1401626E4 (-Initialize@EnterLeaveCritMitRitHandOffHazard@@SAJXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1401A90D8 (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z @ 0x1401B0E7C (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_FAST_ERESOURCE@@@Z.c)
 *     ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x1401B232C (-INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ.c)
 */

__int64 InitCreateUserCrit()
{
  char v0; // bl
  bool v1; // di
  __int64 UserSessionState; // rax
  int v3; // r8d
  int v4; // edx
  struct _FAST_ERESOURCE *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _FAST_ERESOURCE *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _FAST_ERESOURCE *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 Pool2; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // di
  bool v25; // si
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // di
  bool v32; // si
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // di
  bool v39; // si
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  CTouchProcessor *v45; // rcx
  char v46; // di
  bool v47; // si
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  struct _FAST_ERESOURCE **v64; // rax
  __int64 v66; // rcx
  char v67; // bl
  bool v68; // di
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v0 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v0 = 0;
  }
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v3) = v1;
    LOBYTE(v4) = v0;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v3,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      14,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v5 = INIT_CRIT_RESOURCE();
  *(_QWORD *)W32GetUserSessionState(v6) = v5;
  if ( !*(_QWORD *)W32GetUserSessionState(v7) )
    goto LABEL_46;
  v9 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v10) + 8) = v9;
  if ( !*(_QWORD *)(W32GetUserSessionState(v11) + 8) )
    goto LABEL_46;
  v12 = INIT_CRIT_RESOURCE();
  *(_QWORD *)(W32GetUserSessionState(v13) + 16) = v12;
  if ( !*(_QWORD *)(W32GetUserSessionState(v14) + 16) )
    goto LABEL_46;
  Pool2 = ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)(W32GetUserSessionState(v16) + 18848) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v17) + 18848) )
    goto LABEL_46;
  v18 = W32GetUserSessionState(v8);
  if ( ExInitializeResourceLite(*(PERESOURCE *)(v18 + 18848)) < 0 )
    goto LABEL_48;
  v20 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v21) + 19864) = v20;
  if ( !*(_QWORD *)(W32GetUserSessionState(v22) + 19864) )
  {
LABEL_46:
    if ( !*(_QWORD *)(W32GetUserSessionState(v8) + 18848) )
    {
LABEL_49:
      if ( *(_QWORD *)(W32GetUserSessionState(v55) + 16) )
      {
        v60 = W32GetUserSessionState(v59);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v60 + 16));
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v59) + 8) )
      {
        v62 = W32GetUserSessionState(v61);
        CLEANUP_CRIT_RESOURCE((struct _FAST_ERESOURCE **)(v62 + 8));
      }
      if ( *(_QWORD *)W32GetUserSessionState(v61) )
      {
        v64 = (struct _FAST_ERESOURCE **)W32GetUserSessionState(v63);
        CLEANUP_CRIT_RESOURCE(v64);
      }
      UserSetLastError(8);
      return 0LL;
    }
    v56 = W32GetUserSessionState(v55);
    ExDeleteResourceLite(*(PERESOURCE *)(v56 + 18848));
LABEL_48:
    v57 = W32GetUserSessionState(v19);
    ExFreePoolWithTag(*(PVOID *)(v57 + 18848), 0);
    *(_QWORD *)(W32GetUserSessionState(v58) + 18848) = 0LL;
    goto LABEL_49;
  }
  v23 = *(_QWORD *)(W32GetUserSessionState(v8) + 19864);
  *(_DWORD *)v23 = 1;
  *(_QWORD *)(v23 + 8) = 0LL;
  *(_DWORD *)(v23 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v23 + 24), SynchronizationEvent, 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19864);
    v28 = W32GetUserSessionState(v27);
    LOBYTE(v29) = v25;
    LOBYTE(v30) = v24;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 69400),
      4,
      14,
      15,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
      v26);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v31 = 0;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 16);
    v35 = W32GetUserSessionState(v34);
    LOBYTE(v36) = v32;
    LOBYTE(v37) = v31;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 69400),
      4,
      14,
      16,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
      v33);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v38 = 0;
  }
  v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 8);
    v42 = W32GetUserSessionState(v41);
    LOBYTE(v43) = v39;
    LOBYTE(v44) = v38;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v43,
      *(_QWORD *)(v42 + 69400),
      4,
      14,
      17,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
      v40);
  }
  v45 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v46 = 0;
  }
  v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v48 = *(_QWORD *)W32GetUserSessionState(WPP_GLOBAL_Control);
    v50 = W32GetUserSessionState(v49);
    LOBYTE(v51) = v47;
    LOBYTE(v52) = v46;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 69400),
      4,
      14,
      18,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
      v48);
  }
  if ( (int)InitDomainLocks((__int64)v45) < 0 )
  {
LABEL_45:
    CleanupDomainLocks(v53);
    goto LABEL_46;
  }
  if ( (int)EnterLeaveCritMitRitHandOffHazard::Initialize() < 0 )
  {
    EnterLeaveCritMitRitHandOffHazard::UnInitialize();
    goto LABEL_45;
  }
  *(_QWORD *)(W32GetUserSessionState(v54) + 66104) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v66) + 69360) = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v67 = 0;
  }
  v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v69 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v70) = v68;
    LOBYTE(v71) = v67;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v71,
      v70,
      *(_QWORD *)(v69 + 69400),
      4,
      14,
      19,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  return 1LL;
}
