/*
 * XREFs of DifIRP_MJ_SET_INFORMATIONWrapper @ 0x140624700
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifIRP_MJ_SET_INFORMATIONWrapper(__int64 a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  BOOLEAN v7; // si
  __int64 v8; // rdx
  __int64 *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOLEAN v13; // di
  __int64 *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435462);
  if ( APIThunkContextById )
  {
    if ( (v7 = 0,
          v5 = **(unsigned __int8 **)(a2 + 184),
          v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL) + 8 * v5 + 32),
          *(_QWORD *)&v16 = v8,
          *(_QWORD *)&v17 = a1,
          *((_QWORD *)&v16 + 1) = a2,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16, v8, v5, v6);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v17) = guard_dispatch_icall_no_overrides(a1, a2, v5, v6);
  if ( APIThunkContextById )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)APIThunkContextById[6]; j != APIThunkContextById + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16, v10, v11, v12);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v17);
}
