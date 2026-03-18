/*
 * XREFs of PfSnRemoveProcessTrace @ 0x1402C66D4
 * Callers:
 *     PfSnDeactivateTrace @ 0x1402C65D4 (PfSnDeactivateTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpReleaseRundownProtection @ 0x1402C8140 (ExpReleaseRundownProtection.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnRemoveProcessTrace(__int64 a1)
{
  __int64 v1; // rdx
  struct _EX_RUNDOWN_REF *v2; // rbx
  ULONG v3; // edx
  KIRQL v4; // al

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 912), 0LL);
  v2 = (struct _EX_RUNDOWN_REF *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = v1 & 0xF;
  if ( v3 )
    ExpReleaseRundownProtection(v2 + 45, v3);
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140E67010);
  KeReleaseSpinLock(&qword_140E67010, v4);
  return v2;
}
