/*
 * XREFs of DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper @ 0x140630190
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403957C0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall DifMmAllocateContiguousMemorySpecifyCacheNodeWrapper(
        SIZE_T a1,
        PHYSICAL_ADDRESS a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 *v11; // r13
  int v12; // ecx
  BOOLEAN v13; // r12
  __int64 *i; // r14
  __int64 v15; // rdx
  BOOLEAN v16; // di
  __int64 *j; // rbx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  PVOID ContiguousMemorySpecifyCacheNode; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  ContiguousMemorySpecifyCacheNode = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(235);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      *(_QWORD *)&v19 = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)&v19 = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    *((_QWORD *)&v21 + 1) = a1;
    *((_QWORD *)&v19 + 1) = __PAIR64__(CacheType, PreferredNode);
    *(PHYSICAL_ADDRESS *)&v21 = a2;
    *((PHYSICAL_ADDRESS *)&v20 + 1) = a3;
    *(PHYSICAL_ADDRESS *)&v20 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ContiguousMemorySpecifyCacheNode = MmAllocateContiguousMemorySpecifyCacheNode(
                                       a1,
                                       a2,
                                       a3,
                                       a4,
                                       CacheType,
                                       PreferredNode);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ContiguousMemorySpecifyCacheNode;
}
