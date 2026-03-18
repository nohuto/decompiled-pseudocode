/*
 * XREFs of DifZwReadFileWrapper @ 0x14063ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwReadFile @ 0x14069B200 (ZwReadFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwReadFileWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        LARGE_INTEGER *ByteOffset,
        ULONG *Key)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v13; // rsi
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // r14
  __int64 *i; // rbx
  BOOLEAN v18; // di
  _QWORD **v19; // rsi
  _QWORD *j; // rbx
  _QWORD v22[3]; // [rsp+58h] [rbp-51h] BYREF
  ULONG v23; // [rsp+70h] [rbp-39h]
  PVOID v24; // [rsp+78h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v25; // [rsp+80h] [rbp-29h]
  void *v26; // [rsp+88h] [rbp-21h]
  void (__stdcall *v27)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+90h] [rbp-19h]
  void *v28; // [rsp+98h] [rbp-11h]
  void *v29; // [rsp+A0h] [rbp-9h]
  unsigned int File; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(v22, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(32);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v29 = a1;
  v25 = IoStatusBlock;
  v24 = Buffer;
  v23 = Length;
  v22[2] = ByteOffset;
  v22[1] = Key;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v22);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  File = ZwReadFile(a1, a2, a3, a4, IoStatusBlock, Buffer, Length, ByteOffset, Key);
  if ( v13 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v19 = (_QWORD **)(v13 + 6);
      for ( j = *v19; j != v19; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v22);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return File;
}
