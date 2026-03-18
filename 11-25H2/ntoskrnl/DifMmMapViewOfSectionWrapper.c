/*
 * XREFs of DifMmMapViewOfSectionWrapper @ 0x1406280D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 */

__int64 __fastcall DifMmMapViewOfSectionWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v14; // rsi
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r14
  __int64 *i; // rbx
  BOOLEAN v19; // di
  _QWORD **v20; // rsi
  _QWORD *j; // rbx
  PVOID v23; // [rsp+58h] [rbp-59h] BYREF
  int v24; // [rsp+60h] [rbp-51h]
  int v25; // [rsp+64h] [rbp-4Dh]
  int v26; // [rsp+68h] [rbp-49h]
  __int64 v27; // [rsp+70h] [rbp-41h]
  __int64 v28; // [rsp+78h] [rbp-39h]
  __int64 v29; // [rsp+80h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp-29h]
  __int64 v31; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+98h] [rbp-19h]
  __int64 v33; // [rsp+A0h] [rbp-11h]
  unsigned int v34; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(435);
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
  v23 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v33 = a1;
  v29 = a5;
  v28 = a6;
  v27 = a7;
  v26 = a8;
  v25 = a9;
  v24 = a10;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v23);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v34 = MmMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v14 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v20 = (_QWORD **)(v14 + 6);
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v23);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v34;
}
