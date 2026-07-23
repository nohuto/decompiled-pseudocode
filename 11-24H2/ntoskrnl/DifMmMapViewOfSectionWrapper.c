/*
 * XREFs of DifMmMapViewOfSectionWrapper @ 0x140632650
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmMapViewOfSection @ 0x1408DE270 (MmMapViewOfSection.c)
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
  __int64 v14; // rdx
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  _QWORD **v22; // rsi
  _QWORD *j; // rbx
  PVOID v25; // [rsp+58h] [rbp-59h] BYREF
  int v26; // [rsp+60h] [rbp-51h]
  int v27; // [rsp+64h] [rbp-4Dh]
  int v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-21h]
  __int64 v34; // [rsp+98h] [rbp-19h]
  __int64 v35; // [rsp+A0h] [rbp-11h]
  unsigned int v36; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(435);
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
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = a5;
  v30 = a6;
  v29 = a7;
  v28 = a8;
  v27 = a9;
  v26 = a10;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v36 = MmMapViewOfSection(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v22 = (_QWORD **)(v15 + 6);
      for ( j = *v22; j != v22; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v25, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
