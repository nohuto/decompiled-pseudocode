/*
 * XREFs of DifExInitializeLookasideListExWrapper @ 0x140612B70
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

__int64 __fastcall DifExInitializeLookasideListExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  __int64 *i; // rbx
  BOOLEAN v18; // di
  __int64 *j; // rbx
  PVOID v21; // [rsp+58h] [rbp-49h] BYREF
  int v22; // [rsp+60h] [rbp-41h]
  __int16 v23; // [rsp+64h] [rbp-3Dh]
  int v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  int v26; // [rsp+78h] [rbp-29h]
  int v27; // [rsp+7Ch] [rbp-25h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  __int64 v29; // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  unsigned int v31; // [rsp+98h] [rbp-9h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v21, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(399);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21 = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v30 = a1;
  v26 = a5;
  v25 = a6;
  v24 = a7;
  v23 = a8;
  v22 = a9;
  v29 = a2;
  v28 = a3;
  v27 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v21);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v31 = guard_dispatch_icall_no_overrides(a1);
  if ( v13 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v13[6]; j != v13 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v21);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v31;
}
