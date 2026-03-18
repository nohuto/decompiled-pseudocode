/*
 * XREFs of DifZwCreateKeyTransactedWrapper @ 0x140631CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwCreateKeyTransacted @ 0x14069C800 (ZwCreateKeyTransacted.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwCreateKeyTransactedWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        ULONG a4,
        UNICODE_STRING *Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        ULONG *Disposition)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v12; // rsi
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // r14
  __int64 *i; // rbx
  BOOLEAN v17; // di
  _QWORD **v18; // rsi
  _QWORD *j; // rbx
  _QWORD v21[3]; // [rsp+48h] [rbp-39h] BYREF
  ULONG v22; // [rsp+60h] [rbp-21h]
  UNICODE_STRING *v23; // [rsp+68h] [rbp-19h]
  ULONG v24; // [rsp+70h] [rbp-11h]
  OBJECT_ATTRIBUTES *v25; // [rsp+78h] [rbp-9h]
  ACCESS_MASK v26; // [rsp+80h] [rbp-1h]
  HANDLE *v27; // [rsp+88h] [rbp+7h]
  unsigned int KeyTransacted; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v21, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(121);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v27 = a1;
  v23 = Class;
  v22 = CreateOptions;
  v21[2] = TransactionHandle;
  v21[1] = Disposition;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v21);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  KeyTransacted = ZwCreateKeyTransacted(a1, a2, a3, a4, Class, CreateOptions, TransactionHandle, Disposition);
  if ( v12 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v18 = (_QWORD **)(v12 + 6);
      for ( j = *v18; j != v18; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v21);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return KeyTransacted;
}
