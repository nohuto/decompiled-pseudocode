/*
 * XREFs of DifZwQueryEaFileWrapper @ 0x1406430A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryEaFile @ 0x1406A9DB0 (ZwQueryEaFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r14
  __int64 *i; // rbx
  __int64 v19; // rdx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  PVOID v24; // [rsp+58h] [rbp-41h] BYREF
  BOOLEAN v25; // [rsp+60h] [rbp-39h]
  ULONG *v26; // [rsp+68h] [rbp-31h]
  ULONG v27; // [rsp+70h] [rbp-29h]
  PVOID v28; // [rsp+78h] [rbp-21h]
  BOOLEAN v29; // [rsp+80h] [rbp-19h]
  ULONG v30; // [rsp+84h] [rbp-15h]
  void *v31; // [rsp+88h] [rbp-11h]
  struct _IO_STATUS_BLOCK *v32; // [rsp+90h] [rbp-9h]
  void *v33; // [rsp+98h] [rbp-1h]
  unsigned int EaFile; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(&v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(53);
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
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v33 = a1;
  v29 = ReturnSingleEntry;
  v28 = EaList;
  v27 = EaListLength;
  v26 = EaIndex;
  v25 = RestartScan;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  EaFile = ZwQueryEaFile(a1, a2, a3, a4, ReturnSingleEntry, EaList, EaListLength, EaIndex, RestartScan);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v14 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v24, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return EaFile;
}
