/*
 * XREFs of DifZwNotifyChangeKeyWrapper @ 0x140635210
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwNotifyChangeKeyWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v14; // rsi
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r14
  __int64 *i; // rbx
  BOOLEAN v19; // di
  _QWORD **v20; // rsi
  _QWORD *j; // rbx
  PVOID v23; // [rsp+58h] [rbp-49h] BYREF
  BOOLEAN v24; // [rsp+60h] [rbp-41h]
  ULONG v25; // [rsp+64h] [rbp-3Dh]
  PVOID v26; // [rsp+68h] [rbp-39h]
  BOOLEAN v27; // [rsp+70h] [rbp-31h]
  ULONG v28; // [rsp+74h] [rbp-2Dh]
  struct _IO_STATUS_BLOCK *v29; // [rsp+78h] [rbp-29h]
  void *v30; // [rsp+80h] [rbp-21h]
  void (__stdcall *v31)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+88h] [rbp-19h]
  void *v32; // [rsp+90h] [rbp-11h]
  void *v33; // [rsp+98h] [rbp-9h]
  unsigned int v34; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v23, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(89);
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
  v23 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v33 = a1;
  v29 = IoStatusBlock;
  v28 = CompletionFilter;
  v27 = WatchTree;
  v26 = Buffer;
  v25 = BufferSize;
  v24 = Asynchronous;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v23);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v34 = ZwNotifyChangeKey(a1, a2, a3, a4, IoStatusBlock, CompletionFilter, WatchTree, Buffer, BufferSize, Asynchronous);
  if ( v14 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v20 = (_QWORD **)(v14 + 6);
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v23);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v34;
}
