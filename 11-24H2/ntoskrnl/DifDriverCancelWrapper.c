/*
 * XREFs of DifDriverCancelWrapper @ 0x14061AC10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverCancelWrapper(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 *APIThunkContextById; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  BOOLEAN v8; // si
  __int64 *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOLEAN v13; // di
  __int64 *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435488);
  if ( APIThunkContextById )
  {
    if ( (v8 = 0, *(_QWORD *)&v15 = v6, v16 = a1, *((_QWORD *)&v15 + 1) = a2, !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15, v4, v6, v7);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, a2, v6, v7);
  if ( APIThunkContextById )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)APIThunkContextById[6]; j != APIThunkContextById + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15, v10, v11, v12);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
