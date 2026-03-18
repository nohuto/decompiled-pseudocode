/*
 * XREFs of DifExRaiseAccessViolationWrapper @ 0x140613AF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

void __noreturn DifExRaiseAccessViolationWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 *v1; // rbx
  int v2; // eax
  BOOLEAN v3; // di
  _QWORD *v4; // rsi
  _QWORD *i; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(394);
  v1 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v2 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v2 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v2 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v3 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v4 = v1 + 4;
      for ( i = (_QWORD *)v1[4]; i != v4; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v3 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExRaiseAccessViolation();
}
