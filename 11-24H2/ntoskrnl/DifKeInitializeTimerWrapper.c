/*
 * XREFs of DifKeInitializeTimerWrapper @ 0x14062C540
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeInitializeTimerWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 *v4; // rsi
  int v5; // eax
  BOOLEAN v6; // bp
  __int64 *i; // rdi
  BOOLEAN v8; // di
  _QWORD **v9; // rsi
  _QWORD *j; // rbx
  _OWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v11[0] = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(279);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v11[0] = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v11[0] = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    *((_QWORD *)&v11[0] + 1) = a1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v11, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 60) = 0;
  *(_WORD *)(a1 + 56) = 0;
  if ( v4 )
  {
    if ( (v8 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v9 = (_QWORD **)(v4 + 6);
      for ( j = *v9; j != v9; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v11, v3);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
