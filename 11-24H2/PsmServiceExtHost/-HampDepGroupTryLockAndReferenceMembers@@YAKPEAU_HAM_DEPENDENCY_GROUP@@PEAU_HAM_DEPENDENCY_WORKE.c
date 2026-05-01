/*
 * XREFs of ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE08
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003588C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800684D0 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180083240 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036128 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180065B1C (-HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180066FA0 (-HampDepGroupGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v7; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v8; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // r14
  DWORD v10; // r12d
  _QWORD *Value; // rbp
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v13; // r8

  RmpAcquireGlobalLock();
  HampDepGroupAcquireLockExclusive(a1);
  FirstHost = HampDepGroupGetFirstHost(a1);
  v5 = 0;
  while ( FirstHost )
  {
    if ( RmHamHostReferenceUnsafe(FirstHost) )
    {
      v7 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      v8 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v6 + 744);
      if ( *v7 != a2 )
        __fastfail(3u);
      *(_QWORD *)v8 = a2;
      *(_QWORD *)(v6 + 752) = v7;
      *v7 = v8;
      *((_QWORD *)a2 + 1) = v8;
    }
    FirstHost = HampDepGroupGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)v6);
  }
  HampDepGroupReleaseLockExclusive(a1);
  for ( i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; i != a2; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    *((_DWORD *)i + 10) |= 1u;
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive((char *)i - 744);
  }
  HampDepGroupAcquireLockExclusive(a1);
  for ( j = HampDepGroupGetFirstHost(a1); ; j = HampDepGroupGetNextHost(j) )
  {
    if ( !j )
    {
      v5 = 1;
      goto LABEL_16;
    }
    if ( *((int *)j - 10) >= 0 && (v13 == a2 || (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v13 - 744) != j) )
      break;
  }
  HampDepGroupReleaseLockExclusive(a1);
LABEL_16:
  RmpReleaseGlobalLock();
  return v5;
}
