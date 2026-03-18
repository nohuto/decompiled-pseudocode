/*
 * XREFs of DifNtOpenFileWrapper @ 0x1406299B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenFile @ 0x1408EE430 (NtOpenFile.c)
 */

__int64 __fastcall DifNtOpenFileWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(206);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v17 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v17 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *((_QWORD *)&v19 + 1) = a1;
    *((_QWORD *)&v17 + 1) = __PAIR64__(ShareAccess, OpenOptions);
    LODWORD(v19) = a2;
    *((_QWORD *)&v18 + 1) = a3;
    *(_QWORD *)&v18 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LODWORD(v20) = NtOpenFile(a1, a2, a3, a4, ShareAccess, OpenOptions);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v20;
}
