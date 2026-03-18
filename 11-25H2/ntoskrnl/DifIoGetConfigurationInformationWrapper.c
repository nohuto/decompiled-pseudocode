/*
 * XREFs of DifIoGetConfigurationInformationWrapper @ 0x14061C760
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetConfigurationInformation @ 0x1407080D0 (IoGetConfigurationInformation.c)
 */

__int64 DifIoGetConfigurationInformationWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 *v1; // rdi
  int v2; // eax
  BOOLEAN v3; // si
  __int64 *i; // rbx
  BOOLEAN v5; // si
  _QWORD **v6; // rdi
  _QWORD *j; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(338);
  v1 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v2 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v2 & 0x18) != 0 )
    {
      *(_QWORD *)&v9 = retaddr;
    }
    else if ( (v2 & 4) != 0 )
    {
      *(_QWORD *)&v9 = DifGetReturnAddressForWrappers();
    }
    v3 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v3 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v1[4]; i != v1 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v9);
      }
      if ( v3 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *((_QWORD *)&v9 + 1) = IoGetConfigurationInformation();
  if ( v1 )
  {
    if ( (v5 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v6 = (_QWORD **)(v1 + 6);
      for ( j = *v6; j != v6; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v9);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v9 + 1);
}
