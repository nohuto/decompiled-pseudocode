/*
 * XREFs of DifZwAccessCheckAndAuditAlarmWrapper @ 0x14062F230
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwAccessCheckAndAuditAlarm @ 0x14069B660 (ZwAccessCheckAndAuditAlarm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckAndAuditAlarmWrapper(
        UNICODE_STRING *a1,
        void *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        GENERIC_MAPPING *GenericMapping,
        BOOLEAN ObjectCreation,
        ACCESS_MASK *GrantedAccess,
        NTSTATUS *AccessStatus,
        BOOLEAN *GenerateOnClose)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  _QWORD v24[4]; // [rsp+68h] [rbp-69h] BYREF
  BOOLEAN v25; // [rsp+88h] [rbp-49h]
  GENERIC_MAPPING *v26; // [rsp+90h] [rbp-41h]
  ACCESS_MASK v27; // [rsp+98h] [rbp-39h]
  PSECURITY_DESCRIPTOR v28; // [rsp+A0h] [rbp-31h]
  UNICODE_STRING *v29; // [rsp+A8h] [rbp-29h]
  UNICODE_STRING *v30; // [rsp+B0h] [rbp-21h]
  void *v31; // [rsp+B8h] [rbp-19h]
  UNICODE_STRING *v32; // [rsp+C0h] [rbp-11h]
  unsigned int v33; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v24, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(148);
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
  v24[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v32 = a1;
  v28 = SecurityDescriptor;
  v27 = DesiredAccess;
  v26 = GenericMapping;
  v25 = ObjectCreation;
  v24[3] = GrantedAccess;
  v24[2] = AccessStatus;
  v24[1] = GenerateOnClose;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v24);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v33 = ZwAccessCheckAndAuditAlarm(
          a1,
          a2,
          a3,
          a4,
          SecurityDescriptor,
          DesiredAccess,
          GenericMapping,
          ObjectCreation,
          GrantedAccess,
          AccessStatus,
          GenerateOnClose);
  if ( v15 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v15 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v24);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v33;
}
