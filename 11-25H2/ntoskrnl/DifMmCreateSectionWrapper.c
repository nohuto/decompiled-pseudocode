/*
 * XREFs of DifMmCreateSectionWrapper @ 0x140626EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmCreateSection @ 0x14093C290 (MmCreateSection.c)
 */

__int64 __fastcall DifMmCreateSectionWrapper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v12; // rsi
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // r14
  __int64 *i; // rbx
  BOOLEAN v17; // di
  _QWORD **v18; // rsi
  _QWORD *j; // rbx
  PVOID v21; // [rsp+48h] [rbp-39h] BYREF
  __int64 v22; // [rsp+50h] [rbp-31h]
  __int64 v23; // [rsp+58h] [rbp-29h]
  unsigned __int64 v24; // [rsp+60h] [rbp-21h]
  __int64 v25; // [rsp+68h] [rbp-19h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  unsigned int v27; // [rsp+78h] [rbp-9h]
  __int64 v28; // [rsp+80h] [rbp-1h]
  unsigned int Section; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(&v21, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(438);
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
  v21 = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v28 = a1;
  v24 = __PAIR64__(a5, a6);
  v23 = a7;
  v22 = a8;
  v27 = a2;
  v26 = a3;
  v25 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v21);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Section = MmCreateSection(a1, a2, a3, a4, a5, a6, a7, a8, v21, v22, v23, v24, v25, v26, v27, v28);
  if ( v12 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v18 = (_QWORD **)(v12 + 6);
      for ( j = *v18; j != v18; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v21);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Section;
}
