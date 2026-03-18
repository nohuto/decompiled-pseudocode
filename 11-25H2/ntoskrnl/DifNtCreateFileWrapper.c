/*
 * XREFs of DifNtCreateFileWrapper @ 0x140629290
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtCreateFile @ 0x1408EE4A0 (NtCreateFile.c)
 */

__int64 __fastcall DifNtCreateFileWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        LARGE_INTEGER *AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  PVOID v24; // [rsp+68h] [rbp-59h] BYREF
  ULONG v25; // [rsp+70h] [rbp-51h]
  PVOID v26; // [rsp+78h] [rbp-49h]
  ULONG v27; // [rsp+80h] [rbp-41h]
  ULONG v28; // [rsp+84h] [rbp-3Dh]
  ULONG v29; // [rsp+88h] [rbp-39h]
  ULONG v30; // [rsp+8Ch] [rbp-35h]
  LARGE_INTEGER *v31; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v32; // [rsp+98h] [rbp-29h]
  OBJECT_ATTRIBUTES *v33; // [rsp+A0h] [rbp-21h]
  ACCESS_MASK v34; // [rsp+A8h] [rbp-19h]
  HANDLE *v35; // [rsp+B0h] [rbp-11h]
  unsigned int File; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(208);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = AllocationSize;
  v30 = FileAttributes;
  v29 = ShareAccess;
  v28 = CreateDisposition;
  v27 = CreateOptions;
  v26 = EaBuffer;
  v25 = EaLength;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v24);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = NtCreateFile(
           a1,
           a2,
           a3,
           a4,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           EaLength);
  if ( v15 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v15 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v24);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
