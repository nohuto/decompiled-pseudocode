/*
 * XREFs of DifZwCreateEnlistmentWrapper @ 0x14063BB80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateEnlistment @ 0x1406A8990 (ZwCreateEnlistment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifZwCreateEnlistmentWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        void *a3,
        void *a4,
        OBJECT_ATTRIBUTES *ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
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
  _QWORD v23[2]; // [rsp+48h] [rbp-39h] BYREF
  NOTIFICATION_MASK v24; // [rsp+58h] [rbp-29h]
  ULONG v25; // [rsp+5Ch] [rbp-25h]
  OBJECT_ATTRIBUTES *v26; // [rsp+60h] [rbp-21h]
  void *v27; // [rsp+68h] [rbp-19h]
  void *v28; // [rsp+70h] [rbp-11h]
  ACCESS_MASK v29; // [rsp+78h] [rbp-9h]
  HANDLE *v30; // [rsp+80h] [rbp-1h]
  unsigned int Enlistment; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v23, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(126);
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
  v30 = a1;
  v26 = ObjectAttributes;
  v25 = CreateOptions;
  v24 = NotificationMask;
  v23[1] = EnlistmentKey;
  v29 = a2;
  v28 = a3;
  v27 = a4;
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
  Enlistment = ZwCreateEnlistment(a1, a2, a3, a4, ObjectAttributes, CreateOptions, NotificationMask, EnlistmentKey);
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
  return Enlistment;
}
