/*
 * XREFs of DifZwGetNotificationResourceManagerWrapper @ 0x1406348A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwGetNotificationResourceManager @ 0x14069D1A0 (ZwGetNotificationResourceManager.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwGetNotificationResourceManagerWrapper(
        void *a1,
        _TRANSACTION_NOTIFICATION *a2,
        ULONG a3,
        LARGE_INTEGER *a4,
        ULONG *ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int64 *i; // rbx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  _QWORD v19[2]; // [rsp+48h] [rbp-31h] BYREF
  ULONG v20; // [rsp+58h] [rbp-21h]
  ULONG *v21; // [rsp+60h] [rbp-19h]
  LARGE_INTEGER *v22; // [rsp+68h] [rbp-11h]
  ULONG v23; // [rsp+70h] [rbp-9h]
  _TRANSACTION_NOTIFICATION *v24; // [rsp+78h] [rbp-1h]
  void *v25; // [rsp+80h] [rbp+7h]
  unsigned int NotificationResourceManager; // [rsp+88h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+47h]

  memset_0(v19, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(95);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v19[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v25 = a1;
  v21 = ReturnLength;
  v20 = Asynchronous;
  v19[1] = AsynchronousContext;
  v24 = a2;
  v23 = a3;
  v22 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v19);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  NotificationResourceManager = ZwGetNotificationResourceManager(
                                  a1,
                                  a2,
                                  a3,
                                  a4,
                                  ReturnLength,
                                  Asynchronous,
                                  AsynchronousContext);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v19);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return NotificationResourceManager;
}
