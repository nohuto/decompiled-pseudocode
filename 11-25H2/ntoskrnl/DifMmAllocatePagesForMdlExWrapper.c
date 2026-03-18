/*
 * XREFs of DifMmAllocatePagesForMdlExWrapper @ 0x1406268C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 *v9; // r13
  int v10; // ecx
  BOOLEAN v11; // r12
  __int64 *i; // r14
  BOOLEAN v13; // di
  __int64 *j; // rbx
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h]
  unsigned __int128 v18; // [rsp+50h] [rbp-20h]
  PMDL PagesForMdl; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  PagesForMdl = 0LL;
  v16 = 0LL;
  v7 = __PAIR128__(LowAddress.QuadPart, HighAddress.QuadPart);
  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(229);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      *(_QWORD *)&v16 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v16 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    *(_QWORD *)&v17 = a4;
    *((_QWORD *)&v16 + 1) = __PAIR64__(CacheType, Flags);
    v18 = v7;
    *((PHYSICAL_ADDRESS *)&v17 + 1) = SkipBytes;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v11 )
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
  if ( v9 )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v9[6]; j != v9 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return PagesForMdl;
}
