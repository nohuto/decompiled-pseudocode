/*
 * XREFs of DifExRaiseStatusWrapper @ 0x14061E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn DifExRaiseStatusWrapper(NTSTATUS Status)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  int v5; // eax
  BOOLEAN v6; // di
  _QWORD *v7; // rsi
  _QWORD *i; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(392);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v9 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v9 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    DWORD2(v9) = Status;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v7 = v4 + 4;
      for ( i = (_QWORD *)v4[4]; i != v7; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v9, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  RtlRaiseStatus(Status);
}
