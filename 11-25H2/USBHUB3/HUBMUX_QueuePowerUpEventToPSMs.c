/*
 * XREFs of HUBMUX_QueuePowerUpEventToPSMs @ 0x1400118F0
 * Callers:
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x14000A5B0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResume.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x14000A5E0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x14000A610 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x14000A670 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v2; // rbx
  KIRQL v5; // al
  int v6; // eax
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 i; // rbx

  v2 = (KSPIN_LOCK *)(a1 + 2328);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2328));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2360), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2360), 0xFFFFFFFD);
  KeReleaseSpinLock(v2, v5);
  v6 = *(_DWORD *)(a1 + 2364);
  if ( !v6 )
    return HUBSM_AddEvent(a1 + 1272, 2054);
  *(_DWORD *)(a1 + 2340) = v6;
  v7 = (__int64 *)(a1 + 2368);
  result = *v7;
  for ( i = *v7 - 248; v7 != (__int64 *)result; i = result - 248 )
  {
    _InterlockedOr((volatile signed __int32 *)(i + 264), 4u);
    (*(void (__fastcall **)(__int64, _QWORD))(i + 1240))(i, a2);
    result = *(_QWORD *)(i + 248);
  }
  return result;
}
