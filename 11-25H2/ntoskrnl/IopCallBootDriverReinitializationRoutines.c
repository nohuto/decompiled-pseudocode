/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x140C0C5F0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x140463F4C (PnpDiagnosticTrace.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A9F40 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  PVOID *v1; // rbx

  v0 = 0;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Start, 0, 0LL);
  v1 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
  if ( v1 )
  {
    v0 = 1;
    do
    {
      ++*(_DWORD *)(*((_QWORD *)v1[2] + 6) + 16LL);
      *((_DWORD *)v1[2] + 4) &= ~0x20u;
      guard_dispatch_icall_no_overrides(v1[2]);
      ObfDereferenceObjectWithTag(v1[2], 0x746C6644u);
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    }
    while ( v1 );
  }
  IopBootDriverReinitCompleted = 1;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Stop, 0, 0LL);
  return v0;
}
