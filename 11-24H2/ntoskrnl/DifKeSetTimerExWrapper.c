/*
 * XREFs of DifKeSetTimerExWrapper @ 0x140630A90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall DifKeSetTimerExWrapper(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *APIThunkContextById; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r14
  int v12; // eax
  BOOLEAN v13; // r15
  __int64 *i; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOLEAN v18; // di
  __int64 *j; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(247);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      *(_QWORD *)&v21 = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)&v21 = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    *(_QWORD *)&v23 = a1;
    *((_QWORD *)&v22 + 1) = a2;
    LODWORD(v22) = a3;
    *((_QWORD *)&v21 + 1) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v21, v8, v9, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  BYTE8(v23) = KiSetTimerEx(a1, a2, a3, 0, a4);
  if ( v11 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v21, v15, v16, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE8(v23);
}
