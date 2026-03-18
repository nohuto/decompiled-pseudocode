/*
 * XREFs of DifKeEnterCriticalRegionWrapper @ 0x140621420
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void DifKeEnterCriticalRegionWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 *v1; // rdi
  int v2; // eax
  BOOLEAN v3; // si
  __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v6; // si
  _QWORD **v7; // rdi
  _QWORD *j; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(286);
  v1 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v2 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v2 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v2 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v3 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v1[4]; i != v1 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v3 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v1 )
  {
    if ( (v6 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v7 = (_QWORD **)(v1 + 6);
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
