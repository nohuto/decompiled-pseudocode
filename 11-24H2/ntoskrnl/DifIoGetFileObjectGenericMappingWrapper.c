/*
 * XREFs of DifIoGetFileObjectGenericMappingWrapper @ 0x140629020
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetFileObjectGenericMapping @ 0x1409FFFA0 (IoGetFileObjectGenericMapping.c)
 */

__int64 DifIoGetFileObjectGenericMappingWrapper()
{
  __int64 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 *v4; // rdi
  int v5; // eax
  BOOLEAN v6; // si
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  BOOLEAN v11; // si
  _QWORD **v12; // rdi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(332);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v15 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v15 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v15, v1, v2, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *((_QWORD *)&v15 + 1) = IoGetFileObjectGenericMapping();
  if ( v4 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(v4 + 6);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v15, v8, v9, v10);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v15 + 1);
}
