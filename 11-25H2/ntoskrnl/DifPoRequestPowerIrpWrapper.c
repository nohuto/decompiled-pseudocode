/*
 * XREFs of DifPoRequestPowerIrpWrapper @ 0x14062C440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PopRequestPowerIrp @ 0x140359B00 (PopRequestPowerIrp.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifPoRequestPowerIrpWrapper(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, IRP *a6)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r15
  int v11; // ecx
  BOOLEAN v12; // r14
  __int64 *i; // rdi
  BOOLEAN v14; // di
  __int64 *j; // rbx
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(178);
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
    *(_QWORD *)&v18 = a5;
    *((_QWORD *)&v17 + 1) = a6;
    BYTE4(v19) = a2;
    LODWORD(v19) = a3;
    *((_QWORD *)&v18 + 1) = a4;
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
  LODWORD(v20) = PopRequestPowerIrp(a1, a2, a3, a4, a5, 0, a6);
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
