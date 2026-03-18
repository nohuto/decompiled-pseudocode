/*
 * XREFs of PfSnNameQueryWorker @ 0x140379E00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnVolumeKeyQuery @ 0x140A07960 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  void *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
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
    if ( (int)guard_dispatch_icall_no_overrides(a1[44].Count, v5, &v7, v6) >= 0 )
      PfSnVolumeKeyQuery(a1, v7, v5);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
  ExReleaseRundownProtection_0(a1 + 45);
}
