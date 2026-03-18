/*
 * XREFs of DifIoSetCompletionRoutineExWrapper @ 0x14061EB30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     IoSetCompletionRoutineEx @ 0x14043C170 (IoSetCompletionRoutineEx.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifIoSetCompletionRoutineExWrapper(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        IO_COMPLETION_ROUTINE *a3,
        void *a4,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int64 *i; // rbx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(314);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  *((_QWORD *)&v21 + 1) = a1;
  BYTE10(v19) = InvokeOnSuccess;
  BYTE9(v19) = InvokeOnError;
  BYTE8(v19) = InvokeOnCancel;
  *(_QWORD *)&v21 = a2;
  *((_QWORD *)&v20 + 1) = a3;
  *(_QWORD *)&v20 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v19);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(v22) = IoSetCompletionRoutineEx(a1, a2, a3, a4, InvokeOnSuccess, InvokeOnError, InvokeOnCancel);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v22;
}
