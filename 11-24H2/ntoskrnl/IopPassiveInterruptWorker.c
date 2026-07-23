/*
 * XREFs of IopPassiveInterruptWorker @ 0x14044C700
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14044C88C (IopDereferencePassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x14044C98C (IopReleasePassiveInterruptBlockLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14044CA10 (IopAcquirePassiveInterruptBlockLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A15D10 (IopAcquireReleaseDispatcherLock.c)
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
