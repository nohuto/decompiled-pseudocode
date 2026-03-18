/*
 * XREFs of DifZwOpenTransactionManagerWrapper @ 0x1406371C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwOpenTransactionManager @ 0x14069D8C0 (ZwOpenTransactionManager.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwOpenTransactionManagerWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        UNICODE_STRING *a4,
        GUID *TmIdentity,
        ULONG OpenOptions)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  ULONG v18; // [rsp+38h] [rbp-38h]
  GUID *v19; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *v20; // [rsp+48h] [rbp-28h]
  OBJECT_ATTRIBUTES *v21; // [rsp+50h] [rbp-20h]
  ACCESS_MASK v22; // [rsp+58h] [rbp-18h]
  HANDLE *v23; // [rsp+60h] [rbp-10h]
  unsigned int v24; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(68);
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
    v19 = TmIdentity;
    v18 = OpenOptions;
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
  v24 = ZwOpenTransactionManager(a1, a2, a3, a4, TmIdentity, OpenOptions);
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
