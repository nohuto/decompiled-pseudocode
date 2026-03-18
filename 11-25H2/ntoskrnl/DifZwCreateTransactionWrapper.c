/*
 * XREFs of DifZwCreateTransactionWrapper @ 0x1406328D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwCreateTransaction @ 0x14069CB20 (ZwCreateTransaction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwCreateTransactionWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        GUID *a4,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        LARGE_INTEGER *Timeout,
        UNICODE_STRING *Description)
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
  _QWORD v23[3]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v24; // [rsp+70h] [rbp-41h]
  ULONG v25; // [rsp+74h] [rbp-3Dh]
  ULONG v26; // [rsp+78h] [rbp-39h]
  HANDLE v27; // [rsp+80h] [rbp-31h]
  GUID *v28; // [rsp+88h] [rbp-29h]
  OBJECT_ATTRIBUTES *v29; // [rsp+90h] [rbp-21h]
  ACCESS_MASK v30; // [rsp+98h] [rbp-19h]
  HANDLE *v31; // [rsp+A0h] [rbp-11h]
  unsigned int Transaction; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(116);
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
  v23[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v31 = a1;
  v27 = TmHandle;
  v26 = CreateOptions;
  v25 = IsolationLevel;
  v24 = IsolationFlags;
  v23[2] = Timeout;
  v23[1] = Description;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v23);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Transaction = ZwCreateTransaction(
                  a1,
                  a2,
                  a3,
                  a4,
                  TmHandle,
                  CreateOptions,
                  IsolationLevel,
                  IsolationFlags,
                  Timeout,
                  Description);
  if ( v14 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v20 = (_QWORD **)(v14 + 6);
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v23);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Transaction;
}
