/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x140A765D4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A5EEC (PnpCompleteSystemStartProcess.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409C5C74 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1404AB360 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  _QWORD *v4; // rdi
  __int64 v5; // r9

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v4 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v4 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v4[2] + 48LL) + 16LL);
        *(_DWORD *)(v4[2] + 16LL) &= ~8u;
        guard_dispatch_icall_no_overrides(v4[2], v4[4], *(unsigned int *)(*(_QWORD *)(v4[2] + 48LL) + 16LL), v5);
        ObfDereferenceObject((PVOID)v4[2]);
        ExFreePoolWithTag(v4, 0);
        v4 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
      }
      while ( v4 );
    }
    if ( v2 != 1 )
      break;
    IopInitSystemCompletedEnoughForReInitRoutines = 1;
    v2 = 0;
  }
  return v1;
}
