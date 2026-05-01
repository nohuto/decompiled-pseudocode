/*
 * XREFs of ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006B570
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054290 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEE4 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AF38 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180016FA0 (CemRcTableGetNext.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800171F0 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x1800433F0 (CemRcTableGetFirst.c)
 */

void __fastcall HampWakeManagerNotifyConnectedStandbyExit(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v2; // rbx

  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v2 + 185) |= 8u;
    HampWakeContextQueueWorker(v2);
    HampWakeContextReleaseLockExclusive(v2);
  }
}
