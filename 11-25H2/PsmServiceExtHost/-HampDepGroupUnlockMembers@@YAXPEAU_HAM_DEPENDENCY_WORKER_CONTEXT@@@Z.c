/*
 * XREFs of ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036308
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180071B50 (-HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D80 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampDepGroupUnlockMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  char *v3; // rdi
  __int64 *Value; // rax
  __int64 v5; // rcx

  for ( i = *a1; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    v3 = (char *)i - 744;
    if ( (*((_BYTE *)i + 40) & 1) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        Value = (__int64 *)TlsGetValue(HampLockTrackerId);
        v5 = *Value;
        if ( (*Value & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        if ( Value[2]-- == 1 )
          *Value = v5 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)v3 + 2) = 0;
      RtlReleaseSRWLockExclusive((char *)i - 744);
      *((_DWORD *)v3 + 196) &= ~1u;
    }
  }
}
