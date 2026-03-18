/*
 * XREFs of DifZwAlpcAcceptConnectPortWrapper @ 0x14063BA40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A7330 (ZwAlpcAcceptConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcAcceptConnectPortWrapper(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 *APIThunkContextById; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // r14
  __int64 *i; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  BOOLEAN v24; // di
  _QWORD **v25; // rsi
  _QWORD *j; // rbx
  PVOID v28; // [rsp+58h] [rbp-51h] BYREF
  char v29; // [rsp+60h] [rbp-49h]
  __int64 v30; // [rsp+68h] [rbp-41h]
  __int64 v31; // [rsp+70h] [rbp-39h]
  __int64 v32; // [rsp+78h] [rbp-31h]
  __int64 v33; // [rsp+80h] [rbp-29h]
  __int64 v34; // [rsp+88h] [rbp-21h]
  unsigned int v35; // [rsp+90h] [rbp-19h]
  __int64 v36; // [rsp+98h] [rbp-11h]
  __int64 v37; // [rsp+A0h] [rbp-9h]
  unsigned int v38; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(&v28, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(143);
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
  v28 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v37 = a1;
  v33 = a5;
  v32 = a6;
  v31 = a7;
  v30 = a8;
  v29 = a9;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v28, v13, v14, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v38 = ZwAlpcAcceptConnectPort(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v16 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v25 = (_QWORD **)(v16 + 6);
      for ( j = *v25; j != v25; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v28, v21, v22, v23);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v38;
}
