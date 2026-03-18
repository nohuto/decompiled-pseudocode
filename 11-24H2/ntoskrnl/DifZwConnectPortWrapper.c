/*
 * XREFs of DifZwConnectPortWrapper @ 0x14063D260
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwConnectPort @ 0x1406A7890 (ZwConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifZwConnectPortWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
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
  PVOID v27; // [rsp+48h] [rbp-39h] BYREF
  __int64 v28; // [rsp+50h] [rbp-31h]
  __int64 v29; // [rsp+58h] [rbp-29h]
  __int64 v30; // [rsp+60h] [rbp-21h]
  __int64 v31; // [rsp+68h] [rbp-19h]
  __int64 v32; // [rsp+70h] [rbp-11h]
  __int64 v33; // [rsp+78h] [rbp-9h]
  __int64 v34; // [rsp+80h] [rbp-1h]
  __int64 v35; // [rsp+88h] [rbp+7h]
  unsigned int v36; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(&v27, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(128);
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
  v27 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = a5;
  v30 = a6;
  v29 = a7;
  v28 = a8;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v27, v12, v13, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v36 = ZwConnectPort(a1, a2, a3, a4, a5, a6, a7, a8, v27, v28, v29, v30, v31, v32, v33, v34, v35);
  if ( v15 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v15 + 6);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v27, v20, v21, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
