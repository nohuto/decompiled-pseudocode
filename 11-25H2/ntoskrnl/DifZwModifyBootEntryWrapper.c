/*
 * XREFs of DifZwModifyBootEntryWrapper @ 0x140634F30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwModifyBootEntry @ 0x14069D520 (ZwModifyBootEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwModifyBootEntryWrapper(PBOOT_ENTRY BootEntry)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v3; // rsi
  int v4; // eax
  BOOLEAN v5; // di
  __int64 *i; // rbx
  BOOLEAN v7; // di
  _QWORD **v8; // rsi
  _QWORD *j; // rbx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(91);
  v3 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v4 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v4 & 0x18) != 0 )
    {
      *(_QWORD *)&v11 = retaddr;
    }
    else if ( (v4 & 4) != 0 )
    {
      *(_QWORD *)&v11 = DifGetReturnAddressForWrappers();
    }
    v5 = 0;
    *((_QWORD *)&v11 + 1) = BootEntry;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v3[4]; i != v3 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v11);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LODWORD(v12) = ZwModifyBootEntry(BootEntry);
  if ( v3 )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(v3 + 6);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v11);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v12;
}
