/*
 * XREFs of DifZwCreateTransactionWrapper @ 0x14063E890
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateTransaction @ 0x1406A7DF0 (ZwCreateTransaction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  int v18; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int64 *i; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  BOOLEAN v25; // di
  _QWORD **v26; // rsi
  _QWORD *j; // rbx
  _QWORD v29[3]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v30; // [rsp+70h] [rbp-41h]
  ULONG v31; // [rsp+74h] [rbp-3Dh]
  ULONG v32; // [rsp+78h] [rbp-39h]
  HANDLE v33; // [rsp+80h] [rbp-31h]
  GUID *v34; // [rsp+88h] [rbp-29h]
  OBJECT_ATTRIBUTES *v35; // [rsp+90h] [rbp-21h]
  ACCESS_MASK v36; // [rsp+98h] [rbp-19h]
  HANDLE *v37; // [rsp+A0h] [rbp-11h]
  unsigned int Transaction; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v29, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(116);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v29[0] = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v37 = a1;
  v33 = TmHandle;
  v32 = CreateOptions;
  v31 = IsolationLevel;
  v30 = IsolationFlags;
  v29[2] = Timeout;
  v29[1] = Description;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v29, v14, v15, v16);
    }
    if ( v20 )
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
  if ( v17 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v17 + 6);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v29, v22, v23, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Transaction;
}
