/*
 * XREFs of DifNtCreateSectionWrapper @ 0x140633A10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtCreateSection @ 0x1409548F0 (NtCreateSection.c)
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
  __int64 v11; // rdx
  __int64 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int64 *i; // rbx
  __int64 v17; // rdx
  BOOLEAN v18; // di
  __int64 *j; // rbx
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG v22; // [rsp+50h] [rbp-30h]
  ULONG v23; // [rsp+54h] [rbp-2Ch]
  LARGE_INTEGER *v24; // [rsp+58h] [rbp-28h]
  OBJECT_ATTRIBUTES *v25; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v26; // [rsp+68h] [rbp-18h]
  HANDLE *v27; // [rsp+70h] [rbp-10h]
  unsigned int Section; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(439);
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
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v27 = a1;
  v23 = SectionPageProtection;
  v22 = AllocationAttributes;
  v21[1] = FileHandle;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v21, v11);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Section = NtCreateSection(a1, a2, a3, a4, SectionPageProtection, AllocationAttributes, FileHandle);
  if ( v12 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v21, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Section;
}
