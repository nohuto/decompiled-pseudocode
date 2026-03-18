/*
 * XREFs of DifExRaiseDatatypeMisalignmentWrapper @ 0x14061FB70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

void __noreturn DifExRaiseDatatypeMisalignmentWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // rbx
  int v5; // eax
  BOOLEAN v6; // di
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp+8h] BYREF

  ReturnAddressForWrappers = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(393);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v7 = v4 + 4;
      for ( i = (_QWORD *)v4[4]; i != v7; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers, v1, v2, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExRaiseDatatypeMisalignment();
}
