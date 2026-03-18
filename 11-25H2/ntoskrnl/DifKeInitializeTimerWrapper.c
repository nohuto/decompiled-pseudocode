/*
 * XREFs of DifKeInitializeTimerWrapper @ 0x140621FC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeInitializeTimerWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rsi
  int v4; // eax
  BOOLEAN v5; // bp
  __int64 *i; // rdi
  BOOLEAN v7; // di
  _QWORD **v8; // rsi
  _QWORD *j; // rbx
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v10[0] = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(279);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v10[0] = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v10[0] = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    *((_QWORD *)&v10[0] + 1) = a1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v3[4]; i != v3 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v10);
      }
      if ( v5 )
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
  if ( v3 )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(v3 + 6);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v10);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
