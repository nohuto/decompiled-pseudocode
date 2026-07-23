/*
 * XREFs of DifZwCreateTransactionWrapper @ 0x14063CE50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateTransaction @ 0x1406A8D90 (ZwCreateTransaction.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  _QWORD **v22; // rsi
  _QWORD *j; // rbx
  _QWORD v25[3]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v26; // [rsp+70h] [rbp-41h]
  ULONG v27; // [rsp+74h] [rbp-3Dh]
  ULONG v28; // [rsp+78h] [rbp-39h]
  HANDLE v29; // [rsp+80h] [rbp-31h]
  GUID *v30; // [rsp+88h] [rbp-29h]
  OBJECT_ATTRIBUTES *v31; // [rsp+90h] [rbp-21h]
  ACCESS_MASK v32; // [rsp+98h] [rbp-19h]
  HANDLE *v33; // [rsp+A0h] [rbp-11h]
  unsigned int Transaction; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(116);
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
  v25[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v33 = a1;
  v29 = TmHandle;
  v28 = CreateOptions;
  v27 = IsolationLevel;
  v26 = IsolationFlags;
  v25[2] = Timeout;
  v25[1] = Description;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v25, v14);
    }
    if ( v18 )
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
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v22 = (_QWORD **)(v15 + 6);
      for ( j = *v22; j != v22; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v25, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Transaction;
}
