/*
 * XREFs of DifZwAlpcCreatePortSectionWrapper @ 0x14063A400
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcCreatePortSection @ 0x1406A8370 (ZwAlpcCreatePortSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcCreatePortSectionWrapper(
        void *a1,
        ULONG a2,
        void *a3,
        SIZE_T a4,
        HANDLE *AlpcSectionHandle,
        ULONG_PTR *ActualSectionSize)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 *v11; // r14
  int v12; // ecx
  BOOLEAN v13; // si
  __int64 *i; // rbx
  __int64 v15; // rdx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-40h] BYREF
  ULONG v20; // [rsp+58h] [rbp-18h]
  void *v21; // [rsp+60h] [rbp-10h]
  unsigned int PortSection; // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v19, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(140);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      v19[0] = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      v19[0] = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    v21 = a1;
    v19[2] = AlpcSectionHandle;
    v19[1] = ActualSectionSize;
    v20 = a2;
    v19[4] = a3;
    v19[3] = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v19, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  PortSection = ZwAlpcCreatePortSection(a1, a2, a3, a4, AlpcSectionHandle, ActualSectionSize);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v19, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return PortSection;
}
