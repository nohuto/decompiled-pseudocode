/*
 * XREFs of DifZwAdjustPrivilegesTokenWrapper @ 0x14062F720
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwAdjustPrivilegesToken @ 0x14069B960 (ZwAdjustPrivilegesToken.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwAdjustPrivilegesTokenWrapper(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 *v11; // r14
  int v12; // ecx
  BOOLEAN v13; // si
  __int64 *i; // rbx
  BOOLEAN v15; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  unsigned int v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  unsigned int v25; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(145);
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
    v24 = a1;
    v20 = a5;
    v19 = a6;
    LOBYTE(v23) = a2;
    v22 = a3;
    v21 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v10) = a2;
  v25 = ZwAdjustPrivilegesToken(a1, v10, a3, a4, a5, a6, ReturnAddressForWrappers, v19, v20, v21, v22, v23, v24);
  if ( v11 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v25;
}
