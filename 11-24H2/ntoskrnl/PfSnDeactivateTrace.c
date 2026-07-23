/*
 * XREFs of PfSnDeactivateTrace @ 0x1402BC3D4
 * Callers:
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     PfSnRemoveProcessTrace @ 0x1402BC4D4 (PfSnRemoveProcessTrace.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 */

__int64 __fastcall PfSnDeactivateTrace(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // al
  KIRQL v4; // di
  BOOLEAN v5; // bl
  KIRQL v6; // al
  __int64 v7; // r9
  _QWORD *v8; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140E67160);
  KeReleaseSpinLock(&qword_140E67160, v2);
  PfSnRemoveProcessTrace(*(_QWORD *)(a1 + 352));
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 272), v4);
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 360));
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140E67160);
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v7 + 8) != a1 + 8 || (v8 = *(_QWORD **)(a1 + 16), *v8 != a1 + 8) )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseSpinLock(&qword_140E67160, v6);
  return 0LL;
}
