/*
 * XREFs of DifNtMapViewOfSectionWrapper @ 0x140635780
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 */

__int64 __fastcall DifNtMapViewOfSectionWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  int v18; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int64 *i; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  BOOLEAN v25; // di
  _QWORD **v26; // rsi
  _QWORD *j; // rbx
  PVOID v29; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-51h]
  int v31; // [rsp+68h] [rbp-49h]
  __int64 v32; // [rsp+70h] [rbp-41h]
  __int64 v33; // [rsp+78h] [rbp-39h]
  __int64 v34; // [rsp+80h] [rbp-31h]
  __int64 v35; // [rsp+88h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-21h]
  __int64 v37; // [rsp+98h] [rbp-19h]
  __int64 v38; // [rsp+A0h] [rbp-11h]
  unsigned int v39; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v29, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(436);
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
  v29 = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v38 = a1;
  v34 = a5;
  v33 = a6;
  v32 = a7;
  v31 = a8;
  v30 = __PAIR64__(a9, a10);
  v37 = a2;
  v36 = a3;
  v35 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v29, v14, v15, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v39 = NtMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38);
  if ( v17 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v17 + 6);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v29, v22, v23, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v39;
}
