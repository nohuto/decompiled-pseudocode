/*
 * XREFs of HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x140011488
 * Callers:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x140007A18 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 *     HUBPARENT_ResetHubComplete @ 0x140007DB0 (HUBPARENT_ResetHubComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al
  KSPIN_LOCK *v3; // rcx
  KSPIN_LOCK *v4; // r8
  KSPIN_LOCK *v5; // rdx

  v1 = (KSPIN_LOCK *)(a1 + 2336);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2336));
  v3 = (KSPIN_LOCK *)v1[8];
  v4 = v3 - 25;
  if ( v1 + 8 != v3 )
  {
    do
    {
      _InterlockedOr((volatile signed __int32 *)v4 + 411, 0x20u);
      v5 = (KSPIN_LOCK *)v4[25];
      v4 = v5 - 25;
    }
    while ( v1 + 8 != v5 );
  }
  KeReleaseSpinLock(v1, v2);
}
