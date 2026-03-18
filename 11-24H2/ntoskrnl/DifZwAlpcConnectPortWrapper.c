/*
 * XREFs of DifZwAlpcConnectPortWrapper @ 0x14063BC30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcConnectPort @ 0x1406A7370 (ZwAlpcConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcConnectPortWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 *APIThunkContextById; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rsi
  int v19; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int64 *i; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOLEAN v26; // di
  _QWORD **v27; // rsi
  _QWORD *j; // rbx
  _QWORD v30[7]; // [rsp+68h] [rbp-69h] BYREF
  int v31; // [rsp+A0h] [rbp-31h]
  __int64 v32; // [rsp+A8h] [rbp-29h]
  __int64 v33; // [rsp+B0h] [rbp-21h]
  __int64 v34; // [rsp+B8h] [rbp-19h]
  __int64 v35; // [rsp+C0h] [rbp-11h]
  unsigned int v36; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v30, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(142);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v30[0] = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v35 = a1;
  v31 = a5;
  v30[6] = a6;
  v30[5] = a7;
  v30[4] = a8;
  v30[3] = a9;
  v30[2] = a10;
  v30[1] = a11;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v30, v15, v16, v17);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v36 = ZwAlpcConnectPort(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v18 )
  {
    if ( (v26 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v26 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v27 = (_QWORD **)(v18 + 6);
      for ( j = *v27; j != v27; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v30, v23, v24, v25);
      }
      if ( v26 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
