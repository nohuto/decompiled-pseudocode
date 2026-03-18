/*
 * XREFs of DifExInitializeFastResourceAcquiredWrapper @ 0x14061E840
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     ExInitializeFastResourceAcquired @ 0x140490070 (ExInitializeFastResourceAcquired.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifExInitializeFastResourceAcquiredWrapper(ULONG_PTR a1, int a2, __int64 a3)
{
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi
  int v11; // eax
  BOOLEAN v12; // bp
  __int64 *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  BOOLEAN v17; // di
  _QWORD **v18; // rsi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(447);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v20 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v20 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *((_QWORD *)&v21 + 1) = a1;
    LODWORD(v21) = a2;
    *((_QWORD *)&v20 + 1) = a3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v20, v7, v8, v9);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExInitializeFastResourceAcquired(a1, a2, a3);
  if ( v10 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v18 = (_QWORD **)(v10 + 6);
      for ( j = *v18; j != v18; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v20, v14, v15, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
