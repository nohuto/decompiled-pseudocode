/*
 * XREFs of DifMmAllocatePagesForMdlWrapper @ 0x140626A70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmAllocatePagesForMdl @ 0x140415420 (MmAllocatePagesForMdl.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifMmAllocatePagesForMdlWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T a4)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v8; // r13
  int v9; // eax
  BOOLEAN v10; // r12
  __int64 *i; // r14
  BOOLEAN v12; // di
  __int64 *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(230);
  v8 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v9 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v9 & 0x18) != 0 )
    {
      *(_QWORD *)&v15 = retaddr;
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_QWORD *)&v15 = DifGetReturnAddressForWrappers();
    }
    v10 = 0;
    *(PHYSICAL_ADDRESS *)&v17 = LowAddress;
    *((PHYSICAL_ADDRESS *)&v16 + 1) = HighAddress;
    *(PHYSICAL_ADDRESS *)&v16 = SkipBytes;
    *((_QWORD *)&v15 + 1) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *((_QWORD *)&v17 + 1) = MmAllocatePagesForMdl(LowAddress, HighAddress, SkipBytes, a4);
  if ( v8 )
  {
    if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v8[6]; j != v8 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v17 + 1);
}
