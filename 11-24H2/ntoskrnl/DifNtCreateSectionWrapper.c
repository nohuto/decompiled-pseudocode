/*
 * XREFs of DifNtCreateSectionWrapper @ 0x140635450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     NtCreateSection @ 0x14096BE90 (NtCreateSection.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int64 *i; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOLEAN v22; // di
  __int64 *j; // rbx
  _QWORD v25[2]; // [rsp+40h] [rbp-40h] BYREF
  ULONG v26; // [rsp+50h] [rbp-30h]
  ULONG v27; // [rsp+54h] [rbp-2Ch]
  LARGE_INTEGER *v28; // [rsp+58h] [rbp-28h]
  OBJECT_ATTRIBUTES *v29; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v30; // [rsp+68h] [rbp-18h]
  HANDLE *v31; // [rsp+70h] [rbp-10h]
  unsigned int Section; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v25, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(439);
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
  v25[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v31 = a1;
  v27 = SectionPageProtection;
  v26 = AllocationAttributes;
  v25[1] = FileHandle;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v25, v11, v12, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Section = NtCreateSection(a1, a2, a3, a4, SectionPageProtection, AllocationAttributes, FileHandle);
  if ( v14 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v25, v19, v20, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Section;
}
