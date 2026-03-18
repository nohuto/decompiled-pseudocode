/*
 * XREFs of DifKeReadStateEventWrapper @ 0x14062EC60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifKeReadStateEventWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // di
  __int64 *i; // rbx
  BOOLEAN v10; // di
  _QWORD **v11; // rsi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(269);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v14 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v14 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    *((_QWORD *)&v14 + 1) = a1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v14, v3, v4, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LODWORD(v15) = *(_DWORD *)(a1 + 4);
  if ( v6 )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v11 = (_QWORD **)(v6 + 6);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14, v3, v4, v5);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v15;
}
