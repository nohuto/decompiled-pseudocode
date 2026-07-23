/*
 * XREFs of IopCallBootDriverReinitializationRoutines @ 0x140C1F800
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x1402F0A44 (PnpDiagnosticTrace.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A5984 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char IopCallBootDriverReinitializationRoutines()
{
  char v0; // di
  _QWORD *v1; // rbx

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
      guard_dispatch_icall_no_overrides(v1[2], v1[4]);
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
