/*
 * XREFs of DifNtCreateSectionWrapper @ 0x140629490
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtCreateSection @ 0x140A30C80 (NtCreateSection.c)
 */

__int64 __fastcall DifNtCreateSectionWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        LARGE_INTEGER *a4,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int64 *i; // rbx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG v20; // [rsp+50h] [rbp-30h]
  ULONG v21; // [rsp+54h] [rbp-2Ch]
  LARGE_INTEGER *v22; // [rsp+58h] [rbp-28h]
  OBJECT_ATTRIBUTES *v23; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v24; // [rsp+68h] [rbp-18h]
  HANDLE *v25; // [rsp+70h] [rbp-10h]
  unsigned int Section; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v19, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(439);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v19[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v25 = a1;
  v21 = SectionPageProtection;
  v20 = AllocationAttributes;
  v19[1] = FileHandle;
  v24 = a2;
  v23 = a3;
  v22 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v19);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Section = NtCreateSection(a1, a2, a3, a4, SectionPageProtection, AllocationAttributes, FileHandle);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v19);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Section;
}
