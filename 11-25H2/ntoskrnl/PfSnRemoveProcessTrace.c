/*
 * XREFs of PfSnRemoveProcessTrace @ 0x14036D8E0
 * Callers:
 *     PfSnDeactivateTrace @ 0x14036D7E0 (PfSnDeactivateTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExpReleaseRundownProtection @ 0x14036D760 (ExpReleaseRundownProtection.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140E66D50);
  KeReleaseSpinLock(&qword_140E66D50, v4);
  return v2;
}
