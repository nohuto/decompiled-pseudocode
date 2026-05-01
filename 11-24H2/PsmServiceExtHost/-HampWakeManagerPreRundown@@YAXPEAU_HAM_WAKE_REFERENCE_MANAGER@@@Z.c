/*
 * XREFs of ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180084D94
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081610 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AE64 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEB8 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017170 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DAB8 (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038000 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800380F4 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     CemRcTableGetFirst @ 0x180043370 (CemRcTableGetFirst.c)
 */

void __fastcall HampWakeManagerPreRundown(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 v2; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v4; // rdi
  struct _HAM_CLIENT_CONTEXT *v5; // rcx

  HampWakeManagerAcquireLockExclusive(a1);
  *((_BYTE *)a1 + 104) |= 1u;
  HampWakeManagerReleaseLockExclusive(a1, v2);
  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v4 + 185) |= 0x20u;
    HampWakeContextQueueWorker(v4);
    HampWakeContextReleaseLockExclusive(v4);
    TpWaitForWork(*((_QWORD *)v4 + 12), 0LL);
  }
  v5 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 1);
  if ( v5 )
  {
    HampClientDisconnect(v5);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
