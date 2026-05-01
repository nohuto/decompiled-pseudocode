/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080F8
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038AE8 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009050 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009D70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A81C (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001E70C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180046330 (CempLockSleepConditionVariableExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8)
{
  int v8; // r12d
  DWORD v9; // ebp
  BOOL v10; // esi
  unsigned int v11; // r15d
  _QWORD *Value; // rbx
  char v15; // r8
  __int64 v16; // rdx
  int v17; // ebx
  __int64 *v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int v21; // r14d
  __int64 v22; // rcx
  DWORD v23; // ebp
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v33; // rbx
  int UnbiasedInterruptTimeMs64; // ebp
  unsigned int i; // ecx
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  void *v38; // [rsp+88h] [rbp+10h]
  void *v39; // [rsp+90h] [rbp+18h]

  v39 = a3;
  v38 = a2;
  v37 = 0LL;
  v8 = 0;
  v9 = HampLockTrackerId;
  v10 = 0;
  v11 = a6;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    for ( i = 0; i <= 0xEA60; i = CempQueryUnbiasedInterruptTimeMs64() - UnbiasedInterruptTimeMs64 )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        break;
      if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) != 0 )
        break;
      v37 = -10000LL * (60000 - i);
      CempLockSleepConditionVariableExclusive(a1, (char *)a1 + 16, &v37);
    }
    v11 = a6;
  }
  HampHostStartProcessPresenceChange(a1);
  v15 = *((_BYTE *)a1 + 592);
  *a8 = *((_QWORD *)a1 + 102);
  if ( v15 == 1 )
  {
    v16 = *((_QWORD *)a1 + 83);
    goto LABEL_9;
  }
  if ( (v11 & 0x80u) != 0 )
  {
    if ( (v11 & 0x100) != 0 || *((_QWORD *)a1 + 76) == (_QWORD)a1 + 608 )
      goto LABEL_14;
LABEL_56:
    v17 = -1058275325;
    goto LABEL_45;
  }
  v16 = *((_QWORD *)a1 + 83);
  if ( (v16 & 0x2000000000LL) == 0 )
    goto LABEL_56;
LABEL_9:
  if ( (v16 & 0x10000000000LL) == 0 && (v11 & 1) != 0 )
    goto LABEL_56;
  if ( v15 == 1 && (v16 & 0x2000000000000LL) == 0 )
    *((_DWORD *)a1 + 212) = -1;
LABEL_14:
  if ( *((_DWORD *)a1 + 212) == -1
    || *((_QWORD *)a1 + 105)
    || (v17 = TpAllocTimer(
                (char *)a1 + 840,
                HampHostCacheTimeoutCallback,
                a1,
                (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                       + 120)
                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
              + 584),
        v17 >= 0) )
  {
    v10 = (*((_QWORD *)a1 + 83) & 0x2000000000000LL) == 0;
    if ( HampLockTrackerId != -1 )
    {
      v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v19 = *v18;
      if ( (*v18 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v20 = v18[2]-- == 1;
      if ( v20 )
        *v18 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
    if ( v10 )
    {
      RmpAcquireGlobalLock();
      RmHamHostReference(a1);
      RmpReleaseGlobalLock();
      HampHostUpdateUsageInfoProcesses(a1);
    }
    v21 = v11 & 0xFFFFFFFE;
    v22 = 48LL;
    if ( a7 )
      v21 = v11;
    if ( a1 )
      v22 = (__int64)a1 - 16;
    v17 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, void *))(*(_QWORD *)(*(_QWORD *)v22 + 40LL) + 160LL))(
            v38,
            v39,
            a4,
            a5,
            v21,
            a7);
    if ( v17 >= 0 )
    {
      v23 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v24 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *v24 |= 2uLL;
        ++v24[2];
      }
      CempLockAcquireExclusive(a1);
      v25 = *((_QWORD *)a1 + 84);
      v26 = 1LL;
      v27 = 2LL;
      do
      {
        v25 |= v26++;
        --v27;
      }
      while ( v27 );
      *((_QWORD *)a1 + 84) = v25;
      v28 = 624LL;
      if ( a1 )
        v28 = (__int64)a1 + 560;
      if ( *(_DWORD *)v28 == 2 && !*((_BYTE *)a1 + 592) )
      {
        v33 = *((_QWORD *)a1 + 99);
        HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v33);
        *(_WORD *)(v33 + 616) = 6912;
        HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v33);
      }
      if ( *((_BYTE *)a1 + 592) == 1 )
      {
        v29 = *((_QWORD *)a1 + 83);
      }
      else
      {
        if ( (v21 & 0x80u) != 0 )
        {
          if ( (v21 & 0x100) != 0
            || *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
          {
            goto LABEL_41;
          }
          goto LABEL_71;
        }
        v29 = *((_QWORD *)a1 + 83);
        if ( (v29 & 0x2000000000LL) == 0 )
        {
LABEL_71:
          LODWORD(a8) = 0;
          HampHostQueueTerminateEx((__int64)a1, 3, 0x900u, 0LL, 1, 0, 0LL, (unsigned int *)&a8);
          v8 = (int)a8;
          goto LABEL_41;
        }
      }
      if ( (v21 & 1) == 0 || (v29 & 0x10000000000LL) != 0 )
      {
LABEL_41:
        *((_QWORD *)a1 + 83) |= 0x80000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        *((_QWORD *)a1 + 83) |= 0x2000000000000uLL;
        v17 = 0;
        goto LABEL_45;
      }
      goto LABEL_71;
    }
    if ( v10 )
      RmHamHostDereference(a1);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
LABEL_45:
  *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 696);
  if ( HampLockTrackerId != -1 )
  {
    v30 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v31 = *v30;
    if ( (*v30 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v20 = v30[2]-- == 1;
    if ( v20 )
      *v30 = v31 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v10 )
    HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
  if ( v8 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
  return (unsigned int)v17;
}
