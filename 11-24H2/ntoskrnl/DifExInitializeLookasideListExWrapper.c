/*
 * XREFs of DifExInitializeLookasideListExWrapper @ 0x14061EB30
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

__int64 __fastcall DifExInitializeLookasideListExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int64 *APIThunkContextById; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r14
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // si
  __int64 *i; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  BOOLEAN v24; // di
  __int64 *j; // rbx
  PVOID v27; // [rsp+58h] [rbp-49h] BYREF
  int v28; // [rsp+60h] [rbp-41h]
  __int16 v29; // [rsp+64h] [rbp-3Dh]
  int v30; // [rsp+68h] [rbp-39h]
  __int64 v31; // [rsp+70h] [rbp-31h]
  int v32; // [rsp+78h] [rbp-29h]
  unsigned int v33; // [rsp+7Ch] [rbp-25h]
  __int64 v34; // [rsp+80h] [rbp-21h]
  __int64 v35; // [rsp+88h] [rbp-19h]
  __int64 v36; // [rsp+90h] [rbp-11h]
  unsigned int v37; // [rsp+98h] [rbp-9h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v27, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(399);
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
  v27 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v36 = a1;
  v32 = a5;
  v31 = a6;
  v30 = a7;
  v29 = a8;
  v28 = a9;
  v35 = a2;
  v34 = a3;
  v33 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v27, v13, v14, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v37 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v16 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v16[6]; j != v16 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v27, v21, v22, v23);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v37;
}
