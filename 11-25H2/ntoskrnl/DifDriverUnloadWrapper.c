/*
 * XREFs of DifDriverUnloadWrapper @ 0x14060F080
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverUnloadWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rsi
  BOOLEAN v3; // bp
  __int64 *i; // rbx
  BOOLEAN v5; // di
  _QWORD **v6; // rsi
  _QWORD *j; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435487);
  if ( APIThunkContextById )
  {
    if ( (v3 = 0,
          *(_QWORD *)&v8 = **(_QWORD **)(*(_QWORD *)(a1 + 48) + 64LL),
          *((_QWORD *)&v8 + 1) = a1,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v8);
      }
      if ( v3 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1);
  if ( APIThunkContextById )
  {
    if ( (v5 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v6 = (_QWORD **)(APIThunkContextById + 6);
      for ( j = *v6; j != v6; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v8);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
