/*
 * XREFs of DifIoBuildDeviceIoControlRequestWrapper @ 0x1406261F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifIoBuildDeviceIoControlRequestWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r14
  int v18; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // si
  __int64 *i; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  BOOLEAN v25; // di
  __int64 *j; // rbx
  _QWORD v28[4]; // [rsp+68h] [rbp-59h] BYREF
  char v29; // [rsp+88h] [rbp-39h]
  int v30; // [rsp+8Ch] [rbp-35h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  unsigned int v32; // [rsp+98h] [rbp-29h]
  __int64 v33; // [rsp+A0h] [rbp-21h]
  __int64 v34; // [rsp+A8h] [rbp-19h]
  unsigned int v35; // [rsp+B0h] [rbp-11h]
  __int64 v36; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(v28, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(361);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28[0] = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v35 = a1;
  v31 = a5;
  v30 = a6;
  v29 = a7;
  v28[3] = a8;
  v28[2] = a9;
  v28[1] = a10;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v28, v14, v15, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v36 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v17 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v17[6]; j != v17 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v28, v22, v23, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
