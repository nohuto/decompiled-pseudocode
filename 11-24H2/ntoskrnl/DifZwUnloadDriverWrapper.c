/*
 * XREFs of DifZwUnloadDriverWrapper @ 0x1406498F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwUnloadDriver @ 0x1406A9F30 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwUnloadDriverWrapper(PUNICODE_STRING DriverServiceName)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  unsigned __int8 v4; // cl
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rsi
  int v8; // eax
  BOOLEAN v9; // di
  __int64 *i; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(4);
  v7 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( ((unsigned __int8)v8 & v4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v9 = 0;
    *((_QWORD *)&v18 + 1) = DriverServiceName;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v3, v5, v6);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LODWORD(v19) = ZwUnloadDriver(DriverServiceName);
  if ( v7 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v7 + 6);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v11, v12, v13);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v19;
}
