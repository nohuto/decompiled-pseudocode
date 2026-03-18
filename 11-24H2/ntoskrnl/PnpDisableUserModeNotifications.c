/*
 * XREFs of PnpDisableUserModeNotifications @ 0x1405A6748
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisableUserModeNotifications(struct _LIST_ENTRY *a1, __int64 a2)
{
  void **v4; // rsi
  __int64 v5; // rbp
  char *v6; // rdi
  PKGUARDED_MUTEX i; // rbx

  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v4 = (void **)&PiUEventDevHandleClientList;
  v5 = 14LL;
  v6 = (char *)&PiUEventDevHandleClientList;
  do
  {
    for ( i = (PKGUARDED_MUTEX)*v4; i != (PKGUARDED_MUTEX)v6; i = *(PKGUARDED_MUTEX *)&i->Count )
    {
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)&i->Contention);
      if ( *(_QWORD *)&i->OldIrql == *(_QWORD *)(a2 + 464) && i->Event.Header.WaitListHead.Flink == a1 )
        LOBYTE(i->Event.Header.WaitListHead.Blink) = 1;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)&i->Contention);
    }
    v6 += 16;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
}
