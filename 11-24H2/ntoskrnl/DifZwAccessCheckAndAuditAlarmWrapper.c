/*
 * XREFs of DifZwAccessCheckAndAuditAlarmWrapper @ 0x1406397B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwAccessCheckAndAuditAlarm @ 0x1406A78D0 (ZwAccessCheckAndAuditAlarm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v15; // rdx
  __int64 *v16; // rsi
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // r14
  __int64 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  _QWORD **v23; // rsi
  _QWORD *j; // rbx
  _QWORD v26[4]; // [rsp+68h] [rbp-69h] BYREF
  BOOLEAN v27; // [rsp+88h] [rbp-49h]
  GENERIC_MAPPING *v28; // [rsp+90h] [rbp-41h]
  ACCESS_MASK v29; // [rsp+98h] [rbp-39h]
  PSECURITY_DESCRIPTOR v30; // [rsp+A0h] [rbp-31h]
  UNICODE_STRING *v31; // [rsp+A8h] [rbp-29h]
  UNICODE_STRING *v32; // [rsp+B0h] [rbp-21h]
  void *v33; // [rsp+B8h] [rbp-19h]
  UNICODE_STRING *v34; // [rsp+C0h] [rbp-11h]
  unsigned int v35; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v26, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(148);
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
  v26[0] = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v34 = a1;
  v30 = SecurityDescriptor;
  v29 = DesiredAccess;
  v28 = GenericMapping;
  v27 = ObjectCreation;
  v26[3] = GrantedAccess;
  v26[2] = AccessStatus;
  v26[1] = GenerateOnClose;
  v33 = a2;
  v32 = a3;
  v31 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v26, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v35 = ZwAccessCheckAndAuditAlarm(
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
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v23 = (_QWORD **)(v16 + 6);
      for ( j = *v23; j != v23; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v26, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v35;
}
