/*
 * XREFs of DifIoSetCompletionRoutineExWrapper @ 0x14062AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     IoSetCompletionRoutineEx @ 0x14043AD40 (IoSetCompletionRoutineEx.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int64 *i; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOLEAN v22; // di
  __int64 *j; // rbx
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(314);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v25 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  *((_QWORD *)&v27 + 1) = a1;
  BYTE10(v25) = InvokeOnSuccess;
  BYTE9(v25) = InvokeOnError;
  BYTE8(v25) = InvokeOnCancel;
  *(_QWORD *)&v27 = a2;
  *((_QWORD *)&v26 + 1) = a3;
  *(_QWORD *)&v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v11, v12, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(v28) = IoSetCompletionRoutineEx(a1, a2, a3, a4, InvokeOnSuccess, InvokeOnError, InvokeOnCancel);
  if ( v14 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v19, v20, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v28;
}
