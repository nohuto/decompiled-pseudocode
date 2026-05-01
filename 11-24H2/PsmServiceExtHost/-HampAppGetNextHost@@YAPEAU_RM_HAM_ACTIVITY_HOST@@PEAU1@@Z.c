/*
 * XREFs of ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026B24
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AF14 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800171FC (-HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026390 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B520 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005A8E4 (-HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800625F8 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180071688 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180083C04 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180083CA8 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180083D58 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019064 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v1; // edi
  __int64 v2; // rbp
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rdx
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rcx
  DWORD v18; // ebp
  _QWORD *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx

  v1 = HampLockTrackerId;
  v2 = *((_QWORD *)a1 + 99);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v6 = HampLockTrackerId;
  dword_1800EA308 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v7 |= 0x20uLL;
    ++v7[6];
  }
  v8 = v2 + 584;
  RtlAcquireSRWLockShared(v2 + 584);
  v9 = (_QWORD *)*((_QWORD *)a1 + 103);
  v10 = (_QWORD *)(v2 + 600);
  while ( v9 != v10 )
  {
    v11 = v9 - 103;
    v12 = 24LL;
    if ( v9 != (_QWORD *)824 )
      v12 = (__int64)(v9 - 108);
    if ( *(int *)v12 >= 0 )
    {
      ++v11[75];
      goto LABEL_13;
    }
    v9 = (_QWORD *)*v9;
  }
  v11 = 0LL;
LABEL_13:
  if ( HampLockTrackerId != -1 )
  {
    v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *v13;
    if ( (*v13 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v15 = v13[6]-- == 1;
    if ( v15 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared(v8);
  dword_1800EA308 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v16 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v17 = *v16;
    if ( (*v16 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v15 = v16[1]-- == 1;
    if ( v15 )
      *v16 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v19 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v18) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v19 |= 1uLL;
    ++v19[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800EA308 = GetCurrentThreadId();
  v15 = (*((_QWORD *)a1 + 75))-- == 1LL;
  if ( v15 )
    RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)));
  dword_1800EA308 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v21 = *v20;
    if ( (*v20 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v15 = v20[1]-- == 1;
    if ( v15 )
      *v20 = v21 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)v11;
}
