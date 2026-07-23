/*
 * XREFs of DifKeReleaseMutantWrapper @ 0x14062DD80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifKeReleaseMutantWrapper(struct _KMUTANT *a1, KPRIORITY a2, BOOLEAN a3, BOOLEAN a4)
{
  __int64 *APIThunkContextById; // rax
  __int64 v8; // rdx
  __int64 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // r14
  __int64 *i; // rbx
  __int64 v13; // rdx
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(261);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    *(_QWORD *)&v19 = a1;
    HIDWORD(v18) = a2;
    BYTE9(v18) = a3;
    BYTE8(v18) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v8);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v19) = KeReleaseMutant(a1, a2, a3, a4);
  if ( v9 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v9 + 6);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v13);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v19);
}
