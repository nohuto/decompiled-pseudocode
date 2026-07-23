/*
 * XREFs of DifNtMapViewOfSectionWrapper @ 0x1406297C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 */

__int64 __fastcall DifNtMapViewOfSectionWrapper(
        void *a1,
        void *a2,
        PVOID *a3,
        ULONG_PTR a4,
        SIZE_T CommitSize,
        LARGE_INTEGER *SectionOffset,
        ULONG_PTR *ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
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
  ULONG v24; // [rsp+60h] [rbp-51h]
  ULONG v25; // [rsp+64h] [rbp-4Dh]
  SECTION_INHERIT v26; // [rsp+68h] [rbp-49h]
  ULONG_PTR *v27; // [rsp+70h] [rbp-41h]
  LARGE_INTEGER *v28; // [rsp+78h] [rbp-39h]
  SIZE_T v29; // [rsp+80h] [rbp-31h]
  ULONG_PTR v30; // [rsp+88h] [rbp-29h]
  PVOID *v31; // [rsp+90h] [rbp-21h]
  void *v32; // [rsp+98h] [rbp-19h]
  void *v33; // [rsp+A0h] [rbp-11h]
  unsigned int v34; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(436);
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
  v29 = CommitSize;
  v28 = SectionOffset;
  v27 = ViewSize;
  v26 = InheritDisposition;
  v25 = AllocationType;
  v24 = Win32Protect;
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
  v34 = NtMapViewOfSection(
          a1,
          a2,
          a3,
          a4,
          CommitSize,
          SectionOffset,
          ViewSize,
          InheritDisposition,
          AllocationType,
          Win32Protect);
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
