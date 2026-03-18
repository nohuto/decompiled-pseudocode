/*
 * XREFs of IopPassiveInterruptWorker @ 0x140456EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14045704C (IopDereferencePassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x14045714C (IopReleasePassiveInterruptBlockLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1404571D0 (IopAcquirePassiveInterruptBlockLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140A20A90 (IopAcquireReleaseDispatcherLock.c)
 */

__int64 __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v9[0] = 0;
  LOBYTE(a2) = 1;
  PreviousAffinity = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    IopAcquirePassiveInterruptBlockLock(P, v9);
    LOBYTE(v5) = v9[0];
    if ( !P[65] )
      break;
    P[65] = 0;
    IopReleasePassiveInterruptBlockLock(P, v5);
    if ( *((_DWORD *)P + 8) == 1 && !P[28] )
      guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL, v3, v4);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0LL, 0LL);
  }
  P[64] = 0;
  IopReleasePassiveInterruptBlockLock(P, v5);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    guard_dispatch_icall_no_overrides(*((unsigned int *)P + 6), 2LL, v6, v7);
  return IopDereferencePassiveInterruptBlock(P);
}
