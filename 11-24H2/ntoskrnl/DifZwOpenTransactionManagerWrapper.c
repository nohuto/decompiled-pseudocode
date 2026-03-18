/*
 * XREFs of DifZwOpenTransactionManagerWrapper @ 0x140643180
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwOpenTransactionManager @ 0x1406A8B90 (ZwOpenTransactionManager.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  int v14; // ecx
  BOOLEAN v15; // si
  __int64 *i; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOLEAN v20; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  ULONG v24; // [rsp+38h] [rbp-38h]
  GUID *v25; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *v26; // [rsp+48h] [rbp-28h]
  OBJECT_ATTRIBUTES *v27; // [rsp+50h] [rbp-20h]
  ACCESS_MASK v28; // [rsp+58h] [rbp-18h]
  HANDLE *v29; // [rsp+60h] [rbp-10h]
  unsigned int v30; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(68);
  v13 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v14 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v15 = 0;
    v29 = a1;
    v25 = TmIdentity;
    v24 = OpenOptions;
    v28 = a2;
    v27 = a3;
    v26 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v10, v11, v12);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  v30 = ZwOpenTransactionManager(a1, a2, a3, a4, TmIdentity, OpenOptions);
  if ( v13 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v13[6]; j != v13 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v17, v18, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v30;
}
