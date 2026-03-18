/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x140A74500
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405A260C (PnpCompleteSystemStartProcess.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140ABFF10 (IopLoadUnloadDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A9F40 (IopInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  PVOID *v4; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v4 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*((_QWORD *)v4[2] + 6) + 16LL);
        *((_DWORD *)v4[2] + 4) &= ~8u;
        guard_dispatch_icall_no_overrides(v4[2]);
        ObfDereferenceObject(v4[2]);
        ExFreePoolWithTag(v4, 0);
        v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
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
