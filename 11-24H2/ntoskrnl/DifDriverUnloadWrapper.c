/*
 * XREFs of DifDriverUnloadWrapper @ 0x14061B040
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverUnloadWrapper(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *APIThunkContextById; // rsi
  _QWORD *v4; // r8
  __int64 v5; // r9
  BOOLEAN v6; // bp
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN v11; // di
  _QWORD **v12; // rsi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(268435487);
  if ( APIThunkContextById )
  {
    if ( (v2 = *(_QWORD *)(a1 + 48),
          v6 = 0,
          v4 = *(_QWORD **)(v2 + 64),
          *(_QWORD *)&v14 = *v4,
          *((_QWORD *)&v14 + 1) = a1,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v14, v2, v4, v5);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, v2, v4, v5);
  if ( APIThunkContextById )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(APIThunkContextById + 6);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14, v8, v9, v10);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
