/*
 * XREFs of DifIoBuildDeviceIoControlRequestWrapper @ 0x1406247B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v14; // rdx
  __int64 *v15; // r14
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // si
  __int64 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  __int64 *j; // rbx
  _QWORD v24[4]; // [rsp+68h] [rbp-59h] BYREF
  char v25; // [rsp+88h] [rbp-39h]
  int v26; // [rsp+8Ch] [rbp-35h]
  __int64 v27; // [rsp+90h] [rbp-31h]
  int v28; // [rsp+98h] [rbp-29h]
  __int64 v29; // [rsp+A0h] [rbp-21h]
  __int64 v30; // [rsp+A8h] [rbp-19h]
  unsigned int v31; // [rsp+B0h] [rbp-11h]
  __int64 v32; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(361);
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
  v31 = a1;
  v27 = a5;
  v26 = a6;
  v25 = a7;
  v24[3] = a8;
  v24[2] = a9;
  v24[1] = a10;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v32 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v15[6]; j != v15 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v32;
}
