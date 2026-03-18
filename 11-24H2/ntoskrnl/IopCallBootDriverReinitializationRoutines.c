/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x140C1D7C0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x14043B7C4 (PnpDiagnosticTrace.c)
 *     IopInterlockedRemoveHeadList @ 0x1404AB360 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  _QWORD *v1; // rbx
  __int64 v2; // r9

  v0 = 0;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Start, 0, 0LL);
  v1 = IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
  if ( v1 )
  {
    v0 = 1;
    do
    {
      ++*(_DWORD *)(*(_QWORD *)(v1[2] + 48LL) + 16LL);
      *(_DWORD *)(v1[2] + 16LL) &= ~0x20u;
      guard_dispatch_icall_no_overrides(v1[2], v1[4], *(unsigned int *)(*(_QWORD *)(v1[2] + 48LL) + 16LL), v2);
      ObfDereferenceObjectWithTag((PVOID)v1[2], 0x746C6644u);
      ExFreePoolWithTag(v1, 0);
      v1 = IopInterlockedRemoveHeadList((_QWORD **)&IopBootDriverReinitializeQueueHead);
    }
    while ( v1 );
  }
  IopBootDriverReinitCompleted = 1;
  PnpDiagnosticTrace(&KMPnPEvt_BootDriverReinit_Stop, 0, 0LL);
  return v0;
}
