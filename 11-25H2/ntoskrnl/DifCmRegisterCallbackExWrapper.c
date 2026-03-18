/*
 * XREFs of DifCmRegisterCallbackExWrapper @ 0x14060E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmRegisterCallbackEx @ 0x140A93D10 (CmRegisterCallbackEx.c)
 */

__int64 __fastcall DifCmRegisterCallbackExWrapper(
        EX_CALLBACK_FUNCTION *a1,
        const UNICODE_STRING *a2,
        void *a3,
        void *a4,
        LARGE_INTEGER *Cookie,
        PVOID Reserved)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  _QWORD v17[7]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v17, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(429);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      v17[0] = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      v17[0] = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    v17[6] = a1;
    v17[2] = Cookie;
    v17[1] = Reserved;
    v17[5] = a2;
    v17[4] = a3;
    v17[3] = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v17);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  v18 = CmRegisterCallbackEx(a1, a2, a3, a4, Cookie, Reserved);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v17);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v18;
}
