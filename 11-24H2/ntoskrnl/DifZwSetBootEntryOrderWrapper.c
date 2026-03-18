/*
 * XREFs of DifZwSetBootEntryOrderWrapper @ 0x140647A00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwSetBootEntryOrder @ 0x1406A96D0 (ZwSetBootEntryOrder.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwSetBootEntryOrderWrapper(__int64 a1, unsigned int a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // cl
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // bp
  __int64 *i; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  BOOLEAN v16; // di
  _QWORD **v17; // rsi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(24);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( ((unsigned __int8)v10 & v6) != 0 )
    {
      *(_QWORD *)&v20 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v20 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    *(_QWORD *)&v21 = a1;
    DWORD2(v20) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v20, v5, v7, v8);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v21) = ZwSetBootEntryOrder(a1, a2);
  if ( v9 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v17 = (_QWORD **)(v9 + 6);
      for ( j = *v17; j != v17; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v20, v13, v14, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v21);
}
