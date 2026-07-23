/*
 * XREFs of PfSnNameQueryWorker @ 0x1402E6D70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnVolumeKeyQuery @ 0x140A03E90 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  void *v5; // rsi

  v1 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v1);
    Count = (unsigned __int64 *)a1[67].Count;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 10LL;
    ExReleaseSpinLockExclusive(v1, v3);
    v5 = (void *)Count[1];
    if ( (int)guard_dispatch_icall_no_overrides(a1[44].Count, v5) >= 0 )
      PfSnVolumeKeyQuery(a1, 0LL, v5);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
  ExReleaseRundownProtection_0(a1 + 45);
}
