/*
 * XREFs of DifCcCopyWriteExWrapper @ 0x14061A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     CcCopyWriteEx @ 0x1404A1E30 (CcCopyWriteEx.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall DifCcCopyWriteExWrapper(
        struct _FILE_OBJECT *a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  int v14; // ecx
  BOOLEAN v15; // si
  __int64 *i; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOLEAN v20; // di
  __int64 *j; // rbx
  __int128 v23; // [rsp+30h] [rbp-40h] BYREF
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(433);
  v13 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      *(_QWORD *)&v23 = retaddr;
    }
    else if ( (v14 & 4) != 0 )
    {
      *(_QWORD *)&v23 = DifGetReturnAddressForWrappers();
    }
    v15 = 0;
    *((_QWORD *)&v25 + 1) = a1;
    *(_QWORD *)&v24 = a5;
    *((_QWORD *)&v23 + 1) = a6;
    *(_QWORD *)&v25 = a2;
    HIDWORD(v24) = a3;
    BYTE8(v24) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v10, v11, v12);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v26) = CcCopyWriteEx(a1, a2, a3, a4, a5, a6);
  if ( v13 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v13[6]; j != v13 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v17, v18, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v26;
}
