/*
 * XREFs of DifIoOpenDriverRegistryKeyWrapper @ 0x140629BD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoOpenDriverRegistryKey @ 0x1409CA820 (IoOpenDriverRegistryKey.c)
 */

__int64 __fastcall DifIoOpenDriverRegistryKeyWrapper(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rsi
  int v13; // eax
  BOOLEAN v14; // r14
  __int64 *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  BOOLEAN v19; // di
  _QWORD **v20; // rsi
  _QWORD *j; // rbx
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h]
  __int128 v25; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(324);
  v12 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v13 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v13 & 0x18) != 0 )
    {
      *(_QWORD *)&v23 = retaddr;
    }
    else if ( (v13 & 4) != 0 )
    {
      *(_QWORD *)&v23 = DifGetReturnAddressForWrappers();
    }
    v14 = 0;
    *(_QWORD *)&v25 = a1;
    *((_QWORD *)&v23 + 1) = a5;
    *(_QWORD *)((char *)&v24 + 4) = __PAIR64__(a2, a3);
    LODWORD(v24) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v9, v10, v11);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v25) = IoOpenDriverRegistryKey(a1, a2, a3, a4, a5);
  if ( v12 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v20 = (_QWORD **)(v12 + 6);
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v23, v16, v17, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v25);
}
