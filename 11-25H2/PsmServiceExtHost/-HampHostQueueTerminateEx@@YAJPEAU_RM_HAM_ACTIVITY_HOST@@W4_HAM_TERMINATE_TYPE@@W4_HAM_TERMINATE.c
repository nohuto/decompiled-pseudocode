/*
 * XREFs of ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180006B00 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080E8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003639C (-HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F80 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003B650 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18003C788 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800437F0 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z @ 0x180045C94 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_TERMINATE_TYPE@@@Z.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800578D0 (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180067810 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070D04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180071820 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007DEDC (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180007E7C (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18000A058 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCEC (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180035740 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800361A8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036438 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800364AC (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036B88 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056F70 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180063178 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18006B604 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D104 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180081A78 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        __int64 a1,
        signed int a2,
        unsigned int a3,
        struct _HAM_CLIENT_CONTEXT *a4,
        int a5,
        int a6,
        _QWORD *a7,
        unsigned int *a8)
{
  int v8; // r15d
  unsigned int v10; // r9d
  int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // r8
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned __int8 v21; // r8
  __int64 v22; // rdx
  char v23; // al
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  unsigned int Pid; // r14d
  unsigned int v27; // edi
  unsigned int v28; // esi
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 AppliedTaskCompletions; // rax
  bool v35; // zf
  __int64 v36; // rax
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  char v38[3]; // [rsp+41h] [rbp-BFh] BYREF
  signed int v39; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  const wchar_t *v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  __int64 *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  signed int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  unsigned int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int64 *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]

  v8 = a5;
  v10 = a2;
  v41 = a3;
  v39 = a2;
  v12 = 0;
  v48 = a8;
  v45 = 0LL;
  if ( !a5 )
  {
    v12 = 1;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    v10 = v39;
  }
  v13 = *(_QWORD *)(a1 + 704);
  if ( a7 )
  {
    AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v35 = (AppliedTaskCompletions & *a7) == 0;
    *a7 &= AppliedTaskCompletions;
    if ( !v35 )
    {
      v28 = -1058275328;
      goto LABEL_66;
    }
  }
  v14 = *(_QWORD *)(a1 + 664);
  if ( (BYTE2(v14) & 3u) >= (unsigned __int64)v10 )
  {
    if ( (unsigned int)dword_1800E72B0 > 5 )
    {
      v37 = v10;
      v38[0] = BYTE2(v14) & 3;
      v36 = 32LL;
      if ( a1 )
        v36 = a1 - 32;
      v43 = *(_QWORD *)v36;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        a1 - 32,
        (unsigned int)&unk_1800D3271,
        v14,
        v10,
        (__int64)&v43,
        (__int64)&v37,
        (__int64)v38);
    }
    goto LABEL_65;
  }
  if ( (v14 & 0x800000000LL) != 0 || v14 < 0 )
  {
    if ( (unsigned int)dword_1800E72B0 > 5 )
    {
      v44 = *(_QWORD *)(a1 - 32);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800E72B0,
        (unsigned int)&unk_1800D2F34,
        v14,
        v10,
        (__int64)&v44);
    }
LABEL_65:
    v28 = 0;
LABEL_66:
    v27 = 0;
    goto LABEL_45;
  }
  v15 = (_QWORD *)(a1 + 608);
  v16 = *(_QWORD *)(a1 + 608);
  if ( v16 != a1 + 608 )
  {
    v17 = v16 - 96;
    if ( v17 )
    {
      do
      {
        if ( *(_BYTE *)(v17 + 562) == 2 && *(_BYTE *)(v17 + 563) > 4u )
          HampActMoveBackPendState(v17);
        if ( HampActCanBeInvalidated((struct _HAM_ACTIVITY *)v17) && *(_BYTE *)(v17 + 562) == 3 )
          HampActRequestStopForTerminate(v18, (unsigned int)v39, v41, a4);
        v19 = *(_QWORD *)(v17 + 96);
        if ( v19 == *(_QWORD *)(v17 + 80) + 608LL )
          break;
        v17 = v19 - 96;
      }
      while ( v19 != 96 );
      v8 = a5;
      v15 = (_QWORD *)(a1 + 608);
    }
  }
  v42 = 0;
  v40 = 0;
  v20 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x10000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)a1,
      (union _RM_OPTIMIZATION_STATE *)&v42,
      (union _RM_OPTIMIZATION_STATE *)&v40);
    if ( ((v42 & 0x80u) == 0 || (v40 & 0x80u) != 0) && ((v42 & 0x100) == 0 || (v40 & 0x100) != 0) )
    {
      v33 = *(_QWORD *)(a1 + 664);
      if ( (v33 & 0x800000000LL) == 0 && ((v33 & 0x40000000000LL) == 0 || (v33 & 0x30000) == 0) )
        v20 = 1;
    }
  }
  v21 = 80;
  *(_QWORD *)(a1 + 664) = ((__int64)v39 << 16) ^ (*(_QWORD *)(a1 + 664) ^ ((__int64)v39 << 16)) & 0xFFFFFFFFFFFCFFFFuLL;
  *(_WORD *)(a1 + 664) = v41;
  if ( (_QWORD *)*v15 != v15 )
  {
    v22 = *v15 - 96LL;
    if ( *v15 != 96LL )
    {
      while ( 1 )
      {
        v23 = *(_BYTE *)(v22 + 562);
        if ( v23 != 3 && (v23 != 2 || !*(_BYTE *)(v22 + 563)) || (*(_BYTE *)(v22 + 552) & 8) != 0 )
          goto LABEL_29;
        if ( *(_QWORD *)(a1 + 872) )
          break;
        v24 = *(_BYTE *)(v22 + 428);
        if ( v21 >= v24 )
          goto LABEL_28;
LABEL_29:
        v25 = *(_QWORD *)(v22 + 96);
        if ( v25 != *(_QWORD *)(v22 + 80) + 608LL )
        {
          v22 = v25 - 96;
          if ( v25 != 96 )
            continue;
        }
        goto LABEL_31;
      }
      v24 = v21;
      if ( v21 >= *(_BYTE *)(v22 + 427) )
        v24 = *(_BYTE *)(v22 + 427);
LABEL_28:
      v21 = v24;
      goto LABEL_29;
    }
  }
LABEL_31:
  *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFC03FFFFuLL;
  *(_QWORD *)(a1 + 664) |= (unsigned __int64)v21 << 18;
  *(_DWORD *)(a1 + 852) = CempQueryUnbiasedInterruptTimeMs64();
  *(_DWORD *)(a1 + 856) = a6;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v20);
  if ( v39 == 2 )
  {
    *(_QWORD *)(a1 + 664) |= 0x8000000000000uLL;
    if ( *(_DWORD *)(a1 + 656) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  else
  {
    HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  if ( a4 )
    Pid = HampClientGetPid(a4);
  else
    Pid = 0;
  if ( !*(_QWORD *)(a1 + 1056)
    && (int)TpAllocTimer(
              a1 + 1056,
              HampHostTerminateWatchdog,
              a1,
              (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + 120)
                         + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
            + 584) >= 0 )
  {
    v45 = -10000LL
        * *(unsigned int *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                   + 120)
                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                          + 680);
    TpSetTimer(*(_QWORD *)(a1 + 1056), &v45, 0LL, 0LL);
  }
  if ( !v13 )
  {
    v27 = 0;
    if ( v8 == 2 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( v8 != 2 )
  {
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
    if ( v8 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
      v27 = 0;
    }
    else
    {
      v27 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v13, (unsigned __int64 *)(a1 + 624));
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
LABEL_40:
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    goto LABEL_41;
  }
  ++*(_QWORD *)(v13 + 112);
  v27 = 0;
LABEL_41:
  if ( (unsigned int)dword_1800E72B0 > 4
    && (qword_1800E72C0 & 0x400000000008LL) != 0
    && (qword_1800E72C8 & 0x400000000008LL) == qword_1800E72C8 )
  {
    v47 = *(_QWORD *)(a1 + 816);
    v37 = v39;
    LODWORD(v43) = *(_DWORD *)(a1 - 64 + 624);
    v39 = Pid;
    v46 = 0x1000000LL;
    v70 = 8LL;
    v68 = 8LL;
    v30 = (const wchar_t *)(a1 + 24);
    v66 = 4LL;
    v64 = 1LL;
    v62 = 4LL;
    v44 = *(_QWORD *)(((a1 - 64) & -(__int64)(a1 != 0)) + 0x20);
    v69 = &v46;
    v67 = &v47;
    v65 = &v41;
    v63 = &v37;
    v61 = &v39;
    v59 = &v43;
    v57 = &v44;
    v60 = 4LL;
    v58 = 8LL;
    if ( a1 == -24 )
    {
      v30 = &word_1800C10AC;
      v32 = 2;
    }
    else
    {
      v31 = -1LL;
      do
        ++v31;
      while ( v30[v31] );
      v32 = 2 * v31 + 2;
    }
    v55 = v32;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v54 = v30;
    EventDescriptor.Keyword = 0x400000000008LL;
    v56 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v51 = &unk_1800D273E;
    UserData.Reserved = 2;
    v52 = 129;
    v53 = 1;
    v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  if ( v12 )
  {
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v12 = 0;
    if ( v27 )
    {
      v27 = 0;
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
    }
  }
  v28 = 0;
LABEL_45:
  *v48 = v27;
  if ( v12 )
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
  return v28;
}
