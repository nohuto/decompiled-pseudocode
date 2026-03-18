/*
 * XREFs of DifIoCreateFileExWrapper @ 0x140626E10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoCreateFileEx @ 0x14096CAC0 (IoCreateFileEx.c)
 */

__int64 __fastcall DifIoCreateFileExWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        LARGE_INTEGER *AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        struct _IO_DRIVER_CREATE_CONTEXT *DriverContext)
{
  __int64 *APIThunkContextById; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rsi
  int v23; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v25; // r14
  __int64 *i; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  BOOLEAN v30; // di
  _QWORD **v31; // rsi
  _QWORD *j; // rbx
  _QWORD v34[2]; // [rsp+88h] [rbp-69h] BYREF
  ULONG v35; // [rsp+98h] [rbp-59h]
  PVOID v36; // [rsp+A0h] [rbp-51h]
  CREATE_FILE_TYPE v37; // [rsp+A8h] [rbp-49h]
  ULONG v38; // [rsp+ACh] [rbp-45h]
  PVOID v39; // [rsp+B0h] [rbp-41h]
  ULONG v40; // [rsp+B8h] [rbp-39h]
  ULONG v41; // [rsp+BCh] [rbp-35h]
  ULONG v42; // [rsp+C0h] [rbp-31h]
  ULONG v43; // [rsp+C4h] [rbp-2Dh]
  LARGE_INTEGER *v44; // [rsp+C8h] [rbp-29h]
  struct _IO_STATUS_BLOCK *v45; // [rsp+D0h] [rbp-21h]
  OBJECT_ATTRIBUTES *v46; // [rsp+D8h] [rbp-19h]
  ACCESS_MASK v47; // [rsp+E0h] [rbp-11h]
  HANDLE *v48; // [rsp+E8h] [rbp-9h]
  unsigned int File; // [rsp+F0h] [rbp-1h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v34, 0, 0x70uLL);
  APIThunkContextById = DifGetAPIThunkContextById(353);
  v22 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v23 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v23 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v34[0] = ReturnAddressForWrappers;
LABEL_7:
  v25 = 0;
  v48 = a1;
  v44 = AllocationSize;
  v43 = FileAttributes;
  v42 = ShareAccess;
  v41 = Disposition;
  v40 = CreateOptions;
  v39 = EaBuffer;
  v38 = EaLength;
  v37 = CreateFileType;
  v36 = InternalParameters;
  v35 = Options;
  v34[1] = DriverContext;
  v47 = a2;
  v46 = a3;
  v45 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v25 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v22[4]; i != v22 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v34, v19, v20, v21);
    }
    if ( v25 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = IoCreateFileEx(
           a1,
           a2,
           a3,
           a4,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           EaLength,
           CreateFileType,
           InternalParameters,
           Options,
           DriverContext);
  if ( v22 )
  {
    if ( (v30 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v30 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v31 = (_QWORD **)(v22 + 6);
      for ( j = *v31; j != v31; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v34, v27, v28, v29);
      }
      if ( v30 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
