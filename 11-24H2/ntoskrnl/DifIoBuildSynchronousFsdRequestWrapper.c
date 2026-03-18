/*
 * XREFs of DifIoBuildSynchronousFsdRequestWrapper @ 0x1406263F0
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

__int64 __fastcall DifIoBuildSynchronousFsdRequestWrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *APIThunkContextById; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r14
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // si
  __int64 *i; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  BOOLEAN v23; // di
  __int64 *j; // rbx
  _QWORD v26[5]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  __int64 v29; // [rsp+90h] [rbp-9h]
  unsigned int v30; // [rsp+98h] [rbp-1h]
  __int64 v31; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(v26, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(360);
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
  v26[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v30 = a1;
  v26[4] = a5;
  v26[3] = a6;
  v26[2] = a7;
  v26[1] = a8;
  v29 = a2;
  v28 = a3;
  v27 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v26, v12, v13, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v31 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v15 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v15[6]; j != v15 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v26, v20, v21, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v31;
}
