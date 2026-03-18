/*
 * XREFs of DifIoAllocateMdlWrapper @ 0x140619BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifIoAllocateMdlWrapper(__int64 a1, int a2, char a3, char a4, __int64 a5, __int64 a6)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(365);
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
    *(_QWORD *)&v19 = a1;
    *(_QWORD *)&v18 = a5;
    *((_QWORD *)&v17 + 1) = a6;
    HIDWORD(v18) = a2;
    BYTE9(v18) = a3;
    BYTE8(v18) = a4;
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
  *((_QWORD *)&v19 + 1) = guard_dispatch_icall_no_overrides(a1);
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
  return *((_QWORD *)&v19 + 1);
}
