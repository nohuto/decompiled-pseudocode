/*
 * XREFs of DifMmAllocatePagesForMdlExWrapper @ 0x140632880
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MmAllocatePagesForMdlEx @ 0x140411F30 (MmAllocatePagesForMdlEx.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PMDL __fastcall DifMmAllocatePagesForMdlExWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T a4,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  unsigned __int128 v7; // rdi
  __int64 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r13
  int v13; // ecx
  BOOLEAN v14; // r12
  __int64 *i; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  BOOLEAN v19; // di
  __int64 *j; // rbx
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h]
  unsigned __int128 v24; // [rsp+50h] [rbp-20h]
  PMDL PagesForMdl; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  PagesForMdl = 0LL;
  v22 = 0LL;
  v7 = __PAIR128__(LowAddress.QuadPart, HighAddress.QuadPart);
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(229);
  v12 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v13 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v13 & 0x18) != 0 )
    {
      *(_QWORD *)&v22 = retaddr;
    }
    else if ( (v13 & 4) != 0 )
    {
      *(_QWORD *)&v22 = DifGetReturnAddressForWrappers();
    }
    v14 = 0;
    *(_QWORD *)&v23 = a4;
    *((_QWORD *)&v22 + 1) = __PAIR64__(CacheType, Flags);
    v24 = v7;
    *((PHYSICAL_ADDRESS *)&v23 + 1) = SkipBytes;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v22, v9, v10, v11);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  PagesForMdl = MmAllocatePagesForMdlEx(
                  *(PHYSICAL_ADDRESS *)((char *)&v7 + 8),
                  *(PHYSICAL_ADDRESS *)&v7,
                  SkipBytes,
                  a4,
                  CacheType,
                  Flags);
  if ( v12 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v12[6]; j != v12 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v22, v16, v17, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return PagesForMdl;
}
