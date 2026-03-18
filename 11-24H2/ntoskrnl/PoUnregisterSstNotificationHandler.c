/*
 * XREFs of PoUnregisterSstNotificationHandler @ 0x1405D3260
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoUnregisterSstNotificationHandler(_QWORD *P)
{
  KIRQL v3; // al
  _QWORD *v4; // r8
  PVOID *v5; // rdx

  if ( !P )
    return 3221225485LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopSstNotificationHandlerListLock);
  v4 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v5 = (PVOID *)P[1], *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLock(&PopSstNotificationHandlerListLock, v3);
  ExFreePoolWithTag(P, 0x72626968u);
  return 0LL;
}
