/*
 * XREFs of DifZwDuplicateObjectWrapper @ 0x14063F390
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwDuplicateObject @ 0x1406A6B90 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifZwDuplicateObjectWrapper(
        void *a1,
        void *a2,
        void *a3,
        HANDLE *a4,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  __int64 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int64 *i; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOLEAN v22; // di
  __int64 *j; // rbx
  PVOID v25; // [rsp+40h] [rbp-40h] BYREF
  ULONG v26; // [rsp+48h] [rbp-38h]
  ULONG v27; // [rsp+4Ch] [rbp-34h]
  ACCESS_MASK v28; // [rsp+50h] [rbp-30h]
  HANDLE *v29; // [rsp+58h] [rbp-28h]
  void *v30; // [rsp+60h] [rbp-20h]
  void *v31; // [rsp+68h] [rbp-18h]
  void *v32; // [rsp+70h] [rbp-10h]
  unsigned int v33; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(&v25, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(108);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v32 = a1;
  v28 = DesiredAccess;
  v27 = HandleAttributes;
  v26 = Options;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v11, v12, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v33 = ZwDuplicateObject(a1, a2, a3, a4, DesiredAccess, HandleAttributes, Options);
  if ( v14 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v19, v20, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v33;
}
