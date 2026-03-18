/*
 * XREFs of DifZwDuplicateObjectWrapper @ 0x1406333D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwDuplicateObject @ 0x14069B8C0 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int64 *i; // rbx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  PVOID v19; // [rsp+40h] [rbp-40h] BYREF
  ULONG v20; // [rsp+48h] [rbp-38h]
  ULONG v21; // [rsp+4Ch] [rbp-34h]
  ACCESS_MASK v22; // [rsp+50h] [rbp-30h]
  HANDLE *v23; // [rsp+58h] [rbp-28h]
  void *v24; // [rsp+60h] [rbp-20h]
  void *v25; // [rsp+68h] [rbp-18h]
  void *v26; // [rsp+70h] [rbp-10h]
  unsigned int v27; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(&v19, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(108);
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
  v19 = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v26 = a1;
  v22 = DesiredAccess;
  v21 = HandleAttributes;
  v20 = Options;
  v25 = a2;
  v24 = a3;
  v23 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v19);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v27 = ZwDuplicateObject(a1, a2, a3, a4, DesiredAccess, HandleAttributes, Options);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v27;
}
