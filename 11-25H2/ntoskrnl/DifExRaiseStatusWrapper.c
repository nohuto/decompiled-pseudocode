/*
 * XREFs of DifExRaiseStatusWrapper @ 0x140613C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn DifExRaiseStatusWrapper(NTSTATUS Status)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rbx
  int v4; // eax
  BOOLEAN v5; // di
  _QWORD *v6; // rsi
  _QWORD *i; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v8 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(392);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v8 = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v8 = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    DWORD2(v8) = Status;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v6 = v3 + 4;
      for ( i = (_QWORD *)v3[4]; i != v6; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v8);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  RtlRaiseStatus(Status);
}
