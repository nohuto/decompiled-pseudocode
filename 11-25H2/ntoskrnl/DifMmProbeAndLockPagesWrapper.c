/*
 * XREFs of DifMmProbeAndLockPagesWrapper @ 0x140628430
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifMmProbeAndLockPagesWrapper(PMDL MemoryDescriptorList, KPROCESSOR_MODE a2, LOCK_OPERATION a3)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v7; // rsi
  int v8; // eax
  BOOLEAN v9; // bp
  __int64 *i; // rbx
  BOOLEAN v11; // di
  _QWORD **v12; // rsi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  PMDL v15; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(217);
  v7 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      *(_QWORD *)&v14 = retaddr;
    }
    else if ( (v8 & 4) != 0 )
    {
      *(_QWORD *)&v14 = DifGetReturnAddressForWrappers();
    }
    v9 = 0;
    v15 = MemoryDescriptorList;
    BYTE12(v14) = a2;
    DWORD2(v14) = a3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v14);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  MmProbeAndLockPages(MemoryDescriptorList, a2, a3);
  if ( v7 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(v7 + 6);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
