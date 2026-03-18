/*
 * XREFs of DifIoSetShareAccessWrapper @ 0x14061F160
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoSetShareAccess @ 0x14099D9F0 (IoSetShareAccess.c)
 */

void __fastcall DifIoSetShareAccessWrapper(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // bp
  __int64 *i; // rbx
  BOOLEAN v13; // di
  _QWORD **v14; // rsi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(310);
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
    *((_QWORD *)&v17 + 1) = __PAIR64__(DesiredAccess, DesiredShareAccess);
    *(_QWORD *)&v17 = FileObject;
    *((_QWORD *)&v16 + 1) = ShareAccess;
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
  IoSetShareAccess(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess);
  if ( v9 )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v14 = (_QWORD **)(v9 + 6);
      for ( j = *v14; j != v14; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
