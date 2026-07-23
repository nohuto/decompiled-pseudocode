/*
 * XREFs of DifZwOpenTransactionManagerWrapper @ 0x140641740
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwOpenTransactionManager @ 0x1406A9B30 (ZwOpenTransactionManager.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v10; // rdx
  __int64 *v11; // r14
  int v12; // ecx
  BOOLEAN v13; // si
  __int64 *i; // rbx
  __int64 v15; // rdx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  ULONG v20; // [rsp+38h] [rbp-38h]
  GUID *v21; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *v22; // [rsp+48h] [rbp-28h]
  OBJECT_ATTRIBUTES *v23; // [rsp+50h] [rbp-20h]
  ACCESS_MASK v24; // [rsp+58h] [rbp-18h]
  HANDLE *v25; // [rsp+60h] [rbp-10h]
  unsigned int v26; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(68);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    v25 = a1;
    v21 = TmIdentity;
    v20 = OpenOptions;
    v24 = a2;
    v23 = a3;
    v22 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  v26 = ZwOpenTransactionManager(a1, a2, a3, a4, TmIdentity, OpenOptions);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v26;
}
