/*
 * XREFs of DifZwQueryEaFileWrapper @ 0x140644AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryEaFile @ 0x1406A8E10 (ZwQueryEaFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // r14
  __int64 *i; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  BOOLEAN v24; // di
  _QWORD **v25; // rsi
  _QWORD *j; // rbx
  PVOID v28; // [rsp+58h] [rbp-41h] BYREF
  BOOLEAN v29; // [rsp+60h] [rbp-39h]
  ULONG *v30; // [rsp+68h] [rbp-31h]
  ULONG v31; // [rsp+70h] [rbp-29h]
  PVOID v32; // [rsp+78h] [rbp-21h]
  BOOLEAN v33; // [rsp+80h] [rbp-19h]
  ULONG v34; // [rsp+84h] [rbp-15h]
  void *v35; // [rsp+88h] [rbp-11h]
  struct _IO_STATUS_BLOCK *v36; // [rsp+90h] [rbp-9h]
  void *v37; // [rsp+98h] [rbp-1h]
  unsigned int EaFile; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(&v28, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(53);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v37 = a1;
  v33 = ReturnSingleEntry;
  v32 = EaList;
  v31 = EaListLength;
  v30 = EaIndex;
  v29 = RestartScan;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v28, v13, v14, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  EaFile = ZwQueryEaFile(a1, a2, a3, a4, ReturnSingleEntry, EaList, EaListLength, EaIndex, RestartScan);
  if ( v16 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v25 = (_QWORD **)(v16 + 6);
      for ( j = *v25; j != v25; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v28, v21, v22, v23);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return EaFile;
}
