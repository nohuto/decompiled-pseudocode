/*
 * XREFs of DifZwQueryDefaultLocaleWrapper @ 0x140638110
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDefaultLocale @ 0x14069B3E0 (ZwQueryDefaultLocale.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwQueryDefaultLocaleWrapper(char a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rax
  void *v5; // rcx
  __int64 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // bp
  __int64 *i; // rbx
  BOOLEAN v10; // di
  _QWORD **v11; // rsi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(59);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      v5 = retaddr;
      *(_QWORD *)&v14 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v14 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    LOBYTE(v15) = a1;
    *((_QWORD *)&v14 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v14);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v5) = a1;
  HIDWORD(v15) = ZwQueryDefaultLocale(v5, a2);
  if ( v6 )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v11 = (_QWORD **)(v6 + 6);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v15);
}
