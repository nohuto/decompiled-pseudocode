/*
 * XREFs of DifZwQueryDefaultLocaleWrapper @ 0x1406440D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDefaultLocale @ 0x1406A66B0 (ZwQueryDefaultLocale.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwQueryDefaultLocaleWrapper(char a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // bp
  __int64 *i; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  BOOLEAN v16; // di
  _QWORD **v17; // rsi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(59);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      v6 = retaddr;
      *(_QWORD *)&v20 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v20 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    LOBYTE(v21) = a1;
    *((_QWORD *)&v20 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v20, v5, v7, v8);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v6) = a1;
  HIDWORD(v21) = ZwQueryDefaultLocale(v6, a2);
  if ( v9 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v17 = (_QWORD **)(v9 + 6);
      for ( j = *v17; j != v17; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v20, v13, v14, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v21);
}
