/*
 * XREFs of DifZwCreateKeyTransactedWrapper @ 0x14063C270
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateKeyTransacted @ 0x1406A8A70 (ZwCreateKeyTransacted.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v12; // rdx
  __int64 *v13; // rsi
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // r14
  __int64 *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  _QWORD **v20; // rsi
  _QWORD *j; // rbx
  _QWORD v23[3]; // [rsp+48h] [rbp-39h] BYREF
  ULONG v24; // [rsp+60h] [rbp-21h]
  UNICODE_STRING *v25; // [rsp+68h] [rbp-19h]
  ULONG v26; // [rsp+70h] [rbp-11h]
  OBJECT_ATTRIBUTES *v27; // [rsp+78h] [rbp-9h]
  ACCESS_MASK v28; // [rsp+80h] [rbp-1h]
  HANDLE *v29; // [rsp+88h] [rbp+7h]
  unsigned int KeyTransacted; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v23, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(121);
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
  v23[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v29 = a1;
  v25 = Class;
  v24 = CreateOptions;
  v23[2] = TransactionHandle;
  v23[1] = Disposition;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v23, v12);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  KeyTransacted = ZwCreateKeyTransacted(a1, a2, a3, a4, Class, CreateOptions, TransactionHandle, Disposition);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v20 = (_QWORD **)(v13 + 6);
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v23, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return KeyTransacted;
}
