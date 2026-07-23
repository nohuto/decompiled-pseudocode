/*
 * XREFs of DifExRaiseAccessViolationWrapper @ 0x14061E070
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

void __noreturn DifExRaiseAccessViolationWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 *v2; // rbx
  int v3; // eax
  BOOLEAN v4; // di
  _QWORD *v5; // rsi
  _QWORD *i; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(394);
  v2 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v3 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v3 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v3 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v4 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v4 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v5 = v2 + 4;
      for ( i = (_QWORD *)v2[4]; i != v5; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v1);
      }
      if ( v4 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExRaiseAccessViolation();
}
