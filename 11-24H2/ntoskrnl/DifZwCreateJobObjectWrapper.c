/*
 * XREFs of DifZwCreateJobObjectWrapper @ 0x14063DB30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateJobObject @ 0x1406A7A90 (ZwCreateJobObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwCreateJobObjectWrapper(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi
  int v11; // eax
  BOOLEAN v12; // r14
  __int64 *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  BOOLEAN v17; // di
  _QWORD **v18; // rsi
  _QWORD *j; // rbx
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(123);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v21 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v21 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *((_QWORD *)&v22 + 1) = a1;
    LODWORD(v22) = a2;
    *((_QWORD *)&v21 + 1) = a3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v21, v7, v8, v9);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LODWORD(v23) = ZwCreateJobObject(a1, a2, a3);
  if ( v10 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v18 = (_QWORD **)(v10 + 6);
      for ( j = *v18; j != v18; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v21, v14, v15, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v23;
}
