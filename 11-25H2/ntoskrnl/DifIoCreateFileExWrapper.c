/*
 * XREFs of DifIoCreateFileExWrapper @ 0x14061AE50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoCreateFileEx @ 0x1408EE290 (IoCreateFileEx.c)
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
  __int64 *v19; // rsi
  int v20; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v22; // r14
  __int64 *i; // rbx
  BOOLEAN v24; // di
  _QWORD **v25; // rsi
  _QWORD *j; // rbx
  _QWORD v28[2]; // [rsp+88h] [rbp-69h] BYREF
  ULONG v29; // [rsp+98h] [rbp-59h]
  PVOID v30; // [rsp+A0h] [rbp-51h]
  CREATE_FILE_TYPE v31; // [rsp+A8h] [rbp-49h]
  ULONG v32; // [rsp+ACh] [rbp-45h]
  PVOID v33; // [rsp+B0h] [rbp-41h]
  ULONG v34; // [rsp+B8h] [rbp-39h]
  ULONG v35; // [rsp+BCh] [rbp-35h]
  ULONG v36; // [rsp+C0h] [rbp-31h]
  ULONG v37; // [rsp+C4h] [rbp-2Dh]
  LARGE_INTEGER *v38; // [rsp+C8h] [rbp-29h]
  struct _IO_STATUS_BLOCK *v39; // [rsp+D0h] [rbp-21h]
  OBJECT_ATTRIBUTES *v40; // [rsp+D8h] [rbp-19h]
  ACCESS_MASK v41; // [rsp+E0h] [rbp-11h]
  HANDLE *v42; // [rsp+E8h] [rbp-9h]
  unsigned int File; // [rsp+F0h] [rbp-1h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v28, 0, 0x70uLL);
  APIThunkContextById = DifGetAPIThunkContextById(353);
  v19 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v20 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v20 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28[0] = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v42 = a1;
  v38 = AllocationSize;
  v37 = FileAttributes;
  v36 = ShareAccess;
  v35 = Disposition;
  v34 = CreateOptions;
  v33 = EaBuffer;
  v32 = EaLength;
  v31 = CreateFileType;
  v30 = InternalParameters;
  v29 = Options;
  v28[1] = DriverContext;
  v41 = a2;
  v40 = a3;
  v39 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v19[4]; i != v19 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v28);
    }
    if ( v22 )
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
  if ( v19 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v25 = (_QWORD **)(v19 + 6);
      for ( j = *v25; j != v25; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v28);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
