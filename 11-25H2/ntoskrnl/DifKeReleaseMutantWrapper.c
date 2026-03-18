/*
 * XREFs of DifKeReleaseMutantWrapper @ 0x140623800
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1402F0930 (KeReleaseMutant.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifKeReleaseMutantWrapper(struct _KMUTANT *a1, KPRIORITY a2, BOOLEAN a3, BOOLEAN a4)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v8; // rsi
  int v9; // eax
  BOOLEAN v10; // r14
  __int64 *i; // rbx
  BOOLEAN v12; // di
  _QWORD **v13; // rsi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(261);
  v8 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v9 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v9 & 0x18) != 0 )
    {
      *(_QWORD *)&v16 = retaddr;
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_QWORD *)&v16 = DifGetReturnAddressForWrappers();
    }
    v10 = 0;
    *(_QWORD *)&v17 = a1;
    HIDWORD(v16) = a2;
    BYTE9(v16) = a3;
    BYTE8(v16) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v17) = KeReleaseMutant(a1, a2, a3, a4);
  if ( v8 )
  {
    if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v13 = (_QWORD **)(v8 + 6);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v17);
}
