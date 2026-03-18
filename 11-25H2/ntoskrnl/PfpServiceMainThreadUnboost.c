/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1405C8060
 * Callers:
 *     PfPowerActionNotify @ 0x140B5C910 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *v2; // rbx
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E66C28);
  if ( !P || dword_140E66C30 == P[41] )
  {
    v2 = (void *)qword_140E66C18;
    if ( qword_140E66C18 )
    {
      qword_140E66C18 = 0LL;
      KeSetActualBasePriorityThread((ULONG_PTR)v2, dword_140E66C20);
    }
  }
  KeReleaseSpinLock(&qword_140E66C28, v3);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
