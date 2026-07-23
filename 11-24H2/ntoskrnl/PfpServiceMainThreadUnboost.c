/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1405C9DA0
 * Callers:
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *v2; // rbx
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E67038);
  if ( !P || dword_140E67040 == P[41] )
  {
    v2 = (void *)qword_140E67028;
    if ( qword_140E67028 )
    {
      qword_140E67028 = 0LL;
      KeSetActualBasePriorityThread((ULONG_PTR)v2, dword_140E67030);
    }
  }
  KeReleaseSpinLock(&qword_140E67038, v3);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
