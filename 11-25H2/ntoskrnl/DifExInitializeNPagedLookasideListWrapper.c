/*
 * XREFs of DifExInitializeNPagedLookasideListWrapper @ 0x140612D50
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

void __fastcall DifExInitializeNPagedLookasideListWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int16 a7,
        int a8)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int64 *i; // rbx
  BOOLEAN v17; // di
  __int64 *j; // rbx
  PVOID v19; // [rsp+58h] [rbp-31h] BYREF
  int v20; // [rsp+60h] [rbp-29h]
  __int16 v21; // [rsp+64h] [rbp-25h]
  int v22; // [rsp+68h] [rbp-21h]
  __int64 v23; // [rsp+70h] [rbp-19h]
  int v24; // [rsp+78h] [rbp-11h]
  __int64 v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  void *retaddr; // [rsp+C0h] [rbp+37h]

  memset_0(&v19, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(398);
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
  v19 = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v27 = a1;
  v23 = a5;
  v22 = a6;
  v21 = a7;
  v20 = a8;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v19);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  guard_dispatch_icall_no_overrides(a1);
  if ( v12 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
