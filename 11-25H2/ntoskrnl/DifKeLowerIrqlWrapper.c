/*
 * XREFs of DifKeLowerIrqlWrapper @ 0x140622840
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeLowerIrqlWrapper(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbp
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rsi
  int v4; // eax
  BOOLEAN v5; // di
  __int64 *i; // rbx
  BOOLEAN v7; // di
  _QWORD **v8; // rsi
  _QWORD *j; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(272);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v10 = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v10 = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    BYTE8(v10) = v1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v3[4]; i != v3 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
  if ( v3 )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(v3 + 6);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v10);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
