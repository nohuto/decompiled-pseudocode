/*
 * XREFs of DifZwCreateEnlistmentWrapper @ 0x14063D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwCreateEnlistment @ 0x1406A79F0 (ZwCreateEnlistment.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  _QWORD v27[2]; // [rsp+48h] [rbp-39h] BYREF
  NOTIFICATION_MASK v28; // [rsp+58h] [rbp-29h]
  ULONG v29; // [rsp+5Ch] [rbp-25h]
  OBJECT_ATTRIBUTES *v30; // [rsp+60h] [rbp-21h]
  void *v31; // [rsp+68h] [rbp-19h]
  void *v32; // [rsp+70h] [rbp-11h]
  ACCESS_MASK v33; // [rsp+78h] [rbp-9h]
  HANDLE *v34; // [rsp+80h] [rbp-1h]
  unsigned int Enlistment; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v27, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(126);
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
  v27[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v34 = a1;
  v30 = ObjectAttributes;
  v29 = CreateOptions;
  v28 = NotificationMask;
  v27[1] = EnlistmentKey;
  v33 = a2;
  v32 = a3;
  v31 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v27, v12, v13, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Enlistment = ZwCreateEnlistment(a1, a2, a3, a4, ObjectAttributes, CreateOptions, NotificationMask, EnlistmentKey);
  if ( v15 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v15 + 6);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v27, v20, v21, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Enlistment;
}
