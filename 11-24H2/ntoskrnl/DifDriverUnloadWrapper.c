/*
 * XREFs of DifDriverUnloadWrapper @ 0x140619600
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverUnloadWrapper(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *APIThunkContextById; // rsi
  BOOLEAN v4; // bp
  __int64 *i; // rbx
  __int64 v6; // rdx
  BOOLEAN v7; // di
  _QWORD **v8; // rsi
  _QWORD *j; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435487);
  if ( APIThunkContextById )
  {
    if ( (v2 = *(_QWORD *)(a1 + 48),
          v4 = 0,
          *(_QWORD *)&v10 = **(_QWORD **)(v2 + 64),
          *((_QWORD *)&v10 + 1) = a1,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v4 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v10, v2);
      }
      if ( v4 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, v2);
  if ( APIThunkContextById )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(APIThunkContextById + 6);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v10, v6);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
