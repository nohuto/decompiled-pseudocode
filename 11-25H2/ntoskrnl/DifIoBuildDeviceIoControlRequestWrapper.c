/*
 * XREFs of DifIoBuildDeviceIoControlRequestWrapper @ 0x14061A230
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifIoBuildDeviceIoControlRequestWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int64 *i; // rbx
  BOOLEAN v19; // di
  __int64 *j; // rbx
  _QWORD v22[4]; // [rsp+68h] [rbp-59h] BYREF
  char v23; // [rsp+88h] [rbp-39h]
  int v24; // [rsp+8Ch] [rbp-35h]
  __int64 v25; // [rsp+90h] [rbp-31h]
  int v26; // [rsp+98h] [rbp-29h]
  __int64 v27; // [rsp+A0h] [rbp-21h]
  __int64 v28; // [rsp+A8h] [rbp-19h]
  unsigned int v29; // [rsp+B0h] [rbp-11h]
  __int64 v30; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(v22, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(361);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v29 = a1;
  v25 = a5;
  v24 = a6;
  v23 = a7;
  v22[3] = a8;
  v22[2] = a9;
  v22[1] = a10;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v22);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v30 = guard_dispatch_icall_no_overrides(a1);
  if ( v14 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v22);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v30;
}
