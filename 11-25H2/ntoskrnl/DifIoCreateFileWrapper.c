/*
 * XREFs of DifIoCreateFileWrapper @ 0x14061B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoCreateFile @ 0x1408EDC10 (IoCreateFile.c)
 */

__int64 __fastcall DifIoCreateFileWrapper(
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
        ULONG Options)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v18; // rsi
  int v19; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int64 *i; // rbx
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  PVOID v27; // [rsp+78h] [rbp-69h] BYREF
  ULONG v28; // [rsp+80h] [rbp-61h]
  PVOID v29; // [rsp+88h] [rbp-59h]
  CREATE_FILE_TYPE v30; // [rsp+90h] [rbp-51h]
  ULONG v31; // [rsp+94h] [rbp-4Dh]
  PVOID v32; // [rsp+98h] [rbp-49h]
  ULONG v33; // [rsp+A0h] [rbp-41h]
  ULONG v34; // [rsp+A4h] [rbp-3Dh]
  ULONG v35; // [rsp+A8h] [rbp-39h]
  ULONG v36; // [rsp+ACh] [rbp-35h]
  LARGE_INTEGER *v37; // [rsp+B0h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v38; // [rsp+B8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v39; // [rsp+C0h] [rbp-21h]
  ACCESS_MASK v40; // [rsp+C8h] [rbp-19h]
  HANDLE *v41; // [rsp+D0h] [rbp-11h]
  unsigned int File; // [rsp+D8h] [rbp-9h]
  void *retaddr; // [rsp+110h] [rbp+2Fh]

  memset_0(&v27, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(354);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v27 = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v41 = a1;
  v37 = AllocationSize;
  v36 = FileAttributes;
  v35 = ShareAccess;
  v34 = Disposition;
  v33 = CreateOptions;
  v32 = EaBuffer;
  v31 = EaLength;
  v30 = CreateFileType;
  v29 = InternalParameters;
  v28 = Options;
  v40 = a2;
  v39 = a3;
  v38 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v27);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = IoCreateFile(
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
           Options);
  if ( v18 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v18 + 6);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v27);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
