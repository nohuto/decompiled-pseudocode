/*
 * XREFs of DifExAllocatePoolWithTagWrapper @ 0x140610C50
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

__int64 __fastcall DifExAllocatePoolWithTagWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int64 *i; // rbx
  BOOLEAN v17; // di
  __int64 *j; // rbx
  _QWORD v20[2]; // [rsp+58h] [rbp-41h] BYREF
  int v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  __int64 v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  unsigned int v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(v20, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(414);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v20[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v27 = a1;
  v23 = a5;
  v22 = a6;
  v21 = a7;
  v20[1] = a8;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v20);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v28 = guard_dispatch_icall_no_overrides(a1);
  if ( v12 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v20);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v28;
}
