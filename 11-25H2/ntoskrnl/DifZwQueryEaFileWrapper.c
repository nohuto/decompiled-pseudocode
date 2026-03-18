/*
 * XREFs of DifZwQueryEaFileWrapper @ 0x140638B20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwQueryEaFile @ 0x14069DB40 (ZwQueryEaFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwQueryEaFileWrapper(
        void *a1,
        struct _IO_STATUS_BLOCK *a2,
        void *a3,
        ULONG a4,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        ULONG *EaIndex,
        BOOLEAN RestartScan)
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
  PVOID v22; // [rsp+58h] [rbp-41h] BYREF
  BOOLEAN v23; // [rsp+60h] [rbp-39h]
  ULONG *v24; // [rsp+68h] [rbp-31h]
  ULONG v25; // [rsp+70h] [rbp-29h]
  PVOID v26; // [rsp+78h] [rbp-21h]
  BOOLEAN v27; // [rsp+80h] [rbp-19h]
  ULONG v28; // [rsp+84h] [rbp-15h]
  void *v29; // [rsp+88h] [rbp-11h]
  struct _IO_STATUS_BLOCK *v30; // [rsp+90h] [rbp-9h]
  void *v31; // [rsp+98h] [rbp-1h]
  unsigned int EaFile; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(&v22, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(53);
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
  v22 = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v31 = a1;
  v27 = ReturnSingleEntry;
  v26 = EaList;
  v25 = EaListLength;
  v24 = EaIndex;
  v23 = RestartScan;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v22);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  EaFile = ZwQueryEaFile(a1, a2, a3, a4, ReturnSingleEntry, EaList, EaListLength, EaIndex, RestartScan);
  if ( v13 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v19 = (_QWORD **)(v13 + 6);
      for ( j = *v19; j != v19; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v22);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return EaFile;
}
