/*
 * XREFs of DifZwAlpcCreateResourceReserveWrapper @ 0x14063C170
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcCreateResourceReserve @ 0x1406A73F0 (ZwAlpcCreateResourceReserve.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwAlpcCreateResourceReserveWrapper(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *APIThunkContextById; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rsi
  int v12; // eax
  BOOLEAN v13; // r14
  __int64 *i; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  BOOLEAN v18; // di
  _QWORD **v19; // rsi
  _QWORD *j; // rbx
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(139);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      *(_QWORD *)&v22 = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)&v22 = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    *(_QWORD *)&v24 = a1;
    DWORD2(v23) = a2;
    *(_QWORD *)&v23 = a3;
    *((_QWORD *)&v22 + 1) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v22, v8, v9, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v24) = ZwAlpcCreateResourceReserve(
                  a1,
                  a2,
                  a3,
                  a4,
                  v22,
                  *((_QWORD *)&v22 + 1),
                  v23,
                  *((_QWORD *)&v23 + 1),
                  v24,
                  *((_QWORD *)&v24 + 1));
  if ( v11 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v19 = (_QWORD **)(v11 + 6);
      for ( j = *v19; j != v19; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v22, v15, v16, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v24);
}
