/*
 * XREFs of IopPassiveInterruptWorker @ 0x140456A40
 * Callers:
 *     <none>
 * Callees:
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140456B5C (IopAcquirePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140456C24 (IopDereferencePassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x140456D24 (IopReleasePassiveInterruptBlockLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15DBC (IopAcquireReleaseDispatcherLock.c)
 */

__int64 __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  __int64 v3; // rdx
  _BYTE v5[8]; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v5[0] = 0;
  LOBYTE(a2) = 1;
  PreviousAffinity = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(_GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    IopAcquirePassiveInterruptBlockLock(P, v5);
    LOBYTE(v3) = v5[0];
    if ( !P[65] )
      break;
    P[65] = 0;
    IopReleasePassiveInterruptBlockLock(P, v3);
    if ( *((_DWORD *)P + 8) == 1 && !P[28] )
      guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0LL, 0LL);
  }
  P[64] = 0;
  IopReleasePassiveInterruptBlockLock(P, v3);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL);
  return IopDereferencePassiveInterruptBlock(P);
}
