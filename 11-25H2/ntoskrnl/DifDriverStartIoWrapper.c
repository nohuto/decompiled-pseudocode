/*
 * XREFs of DifDriverStartIoWrapper @ 0x14060EF10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverStartIoWrapper(__int64 a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rbp
  BOOLEAN v5; // si
  __int64 *i; // rbx
  BOOLEAN v7; // di
  __int64 *j; // rbx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v9 = 0LL;
  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435485);
  if ( APIThunkContextById )
  {
    if ( (v5 = 0,
          *(_QWORD *)&v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL) + 8LL),
          v10 = a1,
          *((_QWORD *)&v9 + 1) = a2,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v9);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1);
  if ( APIThunkContextById )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)APIThunkContextById[6]; j != APIThunkContextById + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v9);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
