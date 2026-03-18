/*
 * XREFs of DifZwCreateFileWrapper @ 0x14063D930
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateFile @ 0x1406A6EB0 (ZwCreateFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifZwCreateFileWrapper(
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rsi
  int v19; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int64 *i; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOLEAN v26; // di
  _QWORD **v27; // rsi
  _QWORD *j; // rbx
  PVOID v30; // [rsp+68h] [rbp-59h] BYREF
  ULONG v31; // [rsp+70h] [rbp-51h]
  PVOID v32; // [rsp+78h] [rbp-49h]
  ULONG v33; // [rsp+80h] [rbp-41h]
  ULONG v34; // [rsp+84h] [rbp-3Dh]
  ULONG v35; // [rsp+88h] [rbp-39h]
  ULONG v36; // [rsp+8Ch] [rbp-35h]
  LARGE_INTEGER *v37; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v38; // [rsp+98h] [rbp-29h]
  OBJECT_ATTRIBUTES *v39; // [rsp+A0h] [rbp-21h]
  ACCESS_MASK v40; // [rsp+A8h] [rbp-19h]
  HANDLE *v41; // [rsp+B0h] [rbp-11h]
  unsigned int File; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v30, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(124);
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
  v30 = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v41 = a1;
  v37 = AllocationSize;
  v36 = FileAttributes;
  v35 = ShareAccess;
  v34 = CreateDisposition;
  v33 = CreateOptions;
  v32 = EaBuffer;
  v31 = EaLength;
  v40 = a2;
  v39 = a3;
  v38 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v30, v15, v16, v17);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = ZwCreateFile(
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
  if ( v18 )
  {
    if ( (v26 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v26 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v27 = (_QWORD **)(v18 + 6);
      for ( j = *v27; j != v27; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v30, v23, v24, v25);
      }
      if ( v26 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
