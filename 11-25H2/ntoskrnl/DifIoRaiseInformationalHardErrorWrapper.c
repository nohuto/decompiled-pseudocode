/*
 * XREFs of DifIoRaiseInformationalHardErrorWrapper @ 0x14061DF30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     IoRaiseInformationalHardError @ 0x1404AD170 (IoRaiseInformationalHardError.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall DifIoRaiseInformationalHardErrorWrapper(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v7; // rsi
  int v8; // eax
  BOOLEAN v9; // bp
  __int64 *i; // rbx
  BOOLEAN v11; // di
  _QWORD **v12; // rsi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(322);
  v7 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      *(_QWORD *)&v15 = retaddr;
    }
    else if ( (v8 & 4) != 0 )
    {
      *(_QWORD *)&v15 = DifGetReturnAddressForWrappers();
    }
    v9 = 0;
    DWORD2(v16) = ErrorStatus;
    *(_QWORD *)&v16 = String;
    *((_QWORD *)&v15 + 1) = Thread;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  BYTE12(v16) = IoRaiseInformationalHardError(ErrorStatus, String, Thread);
  if ( v7 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(v7 + 6);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v15);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE12(v16);
}
