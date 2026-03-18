/*
 * XREFs of DifZwQueryDirectoryObjectWrapper @ 0x1406387E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDirectoryObject @ 0x14069DB00 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwQueryDirectoryObjectWrapper(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *APIThunkContextById; // rax
  __int64 v11; // r9
  __int64 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int64 *i; // rbx
  BOOLEAN v17; // di
  __int64 *j; // rbx
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(55);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v20 = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  *((_QWORD *)&v22 + 1) = a1;
  BYTE8(v21) = a5;
  *(_QWORD *)&v21 = a6;
  *((_QWORD *)&v20 + 1) = a7;
  *(_QWORD *)&v22 = a2;
  HIDWORD(v21) = a3;
  BYTE9(v21) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v20);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LOBYTE(v11) = a4;
  LODWORD(v23) = ZwQueryDirectoryObject(a1, a2, a3, v11, a5, a6, a7);
  if ( v12 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v20);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v23;
}
