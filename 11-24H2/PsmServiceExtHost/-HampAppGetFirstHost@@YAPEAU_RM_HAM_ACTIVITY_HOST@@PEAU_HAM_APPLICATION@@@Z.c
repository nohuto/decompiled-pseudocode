/*
 * XREFs of ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180017344
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
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetFirstHost(struct _HAM_APPLICATION *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v5; // edi
  _QWORD *v6; // rbx
  struct _HAM_APPLICATION *i; // rdx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rdx
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v14; // rcx

  v1 = HampLockTrackerId;
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
  v5 = HampLockTrackerId;
  dword_1800EA308 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v6 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *v6 |= 0x20uLL;
    ++v6[6];
  }
  RtlAcquireSRWLockShared((char *)a1 + 584);
  for ( i = (struct _HAM_APPLICATION *)*((_QWORD *)a1 + 75);
        i != (struct _HAM_APPLICATION *)((char *)a1 + 600);
        i = *(struct _HAM_APPLICATION **)i )
  {
    v8 = (char *)i - 824;
    v9 = 24LL;
    if ( i != (struct _HAM_APPLICATION *)824 )
      v9 = (__int64)i - 864;
    if ( *(int *)v9 >= 0 )
    {
      ++*((_QWORD *)v8 + 75);
      goto LABEL_13;
    }
  }
  v8 = 0LL;
LABEL_13:
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 0x20) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v12 = v10[6]-- == 1;
    if ( v12 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 584);
  dword_1800EA308 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v14 = *v13;
    if ( (*v13 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v12 = v13[1]-- == 1;
    if ( v12 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)v8;
}
