/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1405CC630
 * Callers:
 *     PfPowerActionNotify @ 0x140B6B9F8 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  void *v2; // rbx
  KIRQL v3; // si
  __int64 v4; // r8

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140E66EE8);
  if ( !P || dword_140E66EF0 == P[41] )
  {
    v2 = (void *)qword_140E66ED8;
    if ( qword_140E66ED8 )
    {
      qword_140E66ED8 = 0LL;
      KeSetActualBasePriorityThread((ULONG_PTR)v2, dword_140E66EE0, v4);
    }
  }
  KeReleaseSpinLock(&qword_140E66EE8, v3);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
