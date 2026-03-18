/*
 * XREFs of DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140627D90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifMmMapLockedPagesSpecifyCacheWrapper(
        struct _MDL *a1,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // rsi
  int v11; // ecx
  BOOLEAN v12; // r14
  __int64 *i; // rbx
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(219);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v18 + 1) = __PAIR64__(BugCheckOnFailure, Priority);
    BYTE12(v19) = a2;
    DWORD2(v19) = a3;
    *(_QWORD *)&v19 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v18);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *((_QWORD *)&v20 + 1) = MmMapLockedPagesSpecifyCache(a1, a2, a3, a4, BugCheckOnFailure, Priority);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v10 + 6);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v20 + 1);
}
