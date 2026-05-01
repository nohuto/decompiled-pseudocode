/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180083AD4
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800809E8 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001E7A4 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043A8C (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043C0C (-HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043C28 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x1800449A8 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180046B18 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A0AC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A128 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x180066348 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007DA9C (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DB70 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v6; // r14d
  struct _HAM_APPLICATION *i; // rax
  struct _HAM_APPLICATION *v8; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // ebx
  unsigned int v12; // edi
  struct _HAM_TERMINATION_HOST_BLOCK *j; // rax
  struct _HAM_TERMINATION_HOST_BLOCK *k; // rax
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v16 = 0LL;
  v17 = 0LL;
  HampPkgAcquireLockShared(a1);
  v6 = (*((_DWORD *)a1 + 86) >> 5) & 7;
  HampPkgReleaseLockShared(a1);
  for ( i = HampPkgGetFirstApplication(a1); ; i = HampPkgGetNextApplication(a1, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    v9 = HampAppTryReferenceMixedHost(i);
    v10 = v9;
    if ( v9 )
    {
      v11 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v16, v9);
      RmHamHostDereference(v10);
      v12 = 0;
      if ( v11 < 0 )
        v12 = v11;
      if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073741275 )
        goto LABEL_16;
    }
  }
  for ( j = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)&v16);
        j;
        j = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v16) )
  {
    HampHostDebugQueueSuspend(*(struct _RM_HAM_ACTIVITY_HOST **)j, a2);
  }
  for ( k = HampHostSnapshotGetFirst((struct _HAM_HOST_SNAPSHOT *)&v16);
        k;
        k = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v16) )
  {
    HampHostDebugWaitForSuspendComplete(*(struct _RM_HAM_ACTIVITY_HOST **)k);
  }
  *(_DWORD *)a3 = v6;
  v12 = 0;
LABEL_16:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v16);
  return v12;
}
