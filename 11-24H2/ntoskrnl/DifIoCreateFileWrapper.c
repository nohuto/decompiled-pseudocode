/*
 * XREFs of DifIoCreateFileWrapper @ 0x1406272B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoCreateFile @ 0x14096CA20 (IoCreateFile.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rsi
  int v22; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v24; // r14
  __int64 *i; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  BOOLEAN v29; // di
  _QWORD **v30; // rsi
  _QWORD *j; // rbx
  PVOID v33; // [rsp+78h] [rbp-69h] BYREF
  ULONG v34; // [rsp+80h] [rbp-61h]
  PVOID v35; // [rsp+88h] [rbp-59h]
  CREATE_FILE_TYPE v36; // [rsp+90h] [rbp-51h]
  ULONG v37; // [rsp+94h] [rbp-4Dh]
  PVOID v38; // [rsp+98h] [rbp-49h]
  ULONG v39; // [rsp+A0h] [rbp-41h]
  ULONG v40; // [rsp+A4h] [rbp-3Dh]
  ULONG v41; // [rsp+A8h] [rbp-39h]
  ULONG v42; // [rsp+ACh] [rbp-35h]
  LARGE_INTEGER *v43; // [rsp+B0h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v44; // [rsp+B8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v45; // [rsp+C0h] [rbp-21h]
  ACCESS_MASK v46; // [rsp+C8h] [rbp-19h]
  HANDLE *v47; // [rsp+D0h] [rbp-11h]
  unsigned int File; // [rsp+D8h] [rbp-9h]
  void *retaddr; // [rsp+110h] [rbp+2Fh]

  memset_0(&v33, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(354);
  v21 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v22 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v22 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v22 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v33 = ReturnAddressForWrappers;
LABEL_7:
  v24 = 0;
  v47 = a1;
  v43 = AllocationSize;
  v42 = FileAttributes;
  v41 = ShareAccess;
  v40 = Disposition;
  v39 = CreateOptions;
  v38 = EaBuffer;
  v37 = EaLength;
  v36 = CreateFileType;
  v35 = InternalParameters;
  v34 = Options;
  v46 = a2;
  v45 = a3;
  v44 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v24 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v21[4]; i != v21 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v33, v18, v19, v20);
    }
    if ( v24 )
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
  if ( v21 )
  {
    if ( (v29 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v29 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v30 = (_QWORD **)(v21 + 6);
      for ( j = *v30; j != v30; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v33, v26, v27, v28);
      }
      if ( v29 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
