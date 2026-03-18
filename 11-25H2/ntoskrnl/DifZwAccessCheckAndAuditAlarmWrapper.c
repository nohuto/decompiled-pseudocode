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
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
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
  char v25; // [rsp+88h] [rbp-49h]
  __int64 v26; // [rsp+90h] [rbp-41h]
  int v27; // [rsp+98h] [rbp-39h]
  __int64 v28; // [rsp+A0h] [rbp-31h]
  __int64 v29; // [rsp+A8h] [rbp-29h]
  __int64 v30; // [rsp+B0h] [rbp-21h]
  __int64 v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
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
  v28 = a5;
  v27 = a6;
  v26 = a7;
  v25 = a8;
  v24[3] = a9;
  v24[2] = a10;
  v24[1] = a11;
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
  v33 = ZwAccessCheckAndAuditAlarm(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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
