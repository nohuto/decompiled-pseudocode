/*
 * XREFs of DifZwAlpcCreatePortSectionWrapper @ 0x14062FE80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwAlpcCreatePortSection @ 0x14069C100 (ZwAlpcCreatePortSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcCreatePortSectionWrapper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  PVOID ReturnAddressForWrappers; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-20h]
  unsigned int v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  unsigned int PortSection; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(&ReturnAddressForWrappers, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(140);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    v23 = a1;
    v19 = a5;
    v18 = a6;
    v22 = a2;
    v21 = a3;
    v20 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  PortSection = ZwAlpcCreatePortSection(a1, a2, a3, a4, a5, a6, ReturnAddressForWrappers, v18, v19, v20, v21, v22, v23);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&ReturnAddressForWrappers);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return PortSection;
}
