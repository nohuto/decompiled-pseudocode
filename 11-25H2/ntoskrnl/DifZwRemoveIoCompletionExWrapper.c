/*
 * XREFs of DifZwRemoveIoCompletionExWrapper @ 0x14063AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwRemoveIoCompletionEx @ 0x14069E120 (ZwRemoveIoCompletionEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwRemoveIoCompletionExWrapper(
        void *a1,
        _FILE_IO_COMPLETION_INFORMATION *a2,
        ULONG a3,
        ULONG *a4,
        LARGE_INTEGER *Timeout,
        BOOLEAN Alertable)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  BOOLEAN v18; // [rsp+38h] [rbp-38h]
  LARGE_INTEGER *v19; // [rsp+40h] [rbp-30h]
  ULONG *v20; // [rsp+48h] [rbp-28h]
  ULONG v21; // [rsp+50h] [rbp-20h]
  _FILE_IO_COMPLETION_INFORMATION *v22; // [rsp+58h] [rbp-18h]
  void *v23; // [rsp+60h] [rbp-10h]
  unsigned int v24; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(31);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    v23 = a1;
    v19 = Timeout;
    v18 = Alertable;
    v22 = a2;
    v21 = a3;
    v20 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  v24 = ZwRemoveIoCompletionEx(a1, a2, a3, a4, Timeout, Alertable);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v24;
}
