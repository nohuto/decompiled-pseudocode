/*
 * XREFs of _CmGetMatchingDeviceList @ 0x1409AA61C
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 */

__int64 __fastcall CmGetMatchingDeviceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6,
        int a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int MatchingDeviceListForSubkey; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17[4]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v18; // [rsp+50h] [rbp-51h]
  __int64 v19; // [rsp+58h] [rbp-49h]
  _WORD *v20; // [rsp+60h] [rbp-41h]
  unsigned int v21; // [rsp+68h] [rbp-39h]
  _DWORD *v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+78h] [rbp-29h]

  memset_0(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v19 = a3;
  v21 = a5;
  v18 = a2;
  v20 = a4;
  v22 = a6;
  v23 = a7;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return v17[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  if ( (_WORD)v23 )
    MatchingDeviceListForSubkey = -1073741811;
  else
    MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(a1, 0LL, 0, v18, v19, v20, v21, v22);
  if ( v11 )
  {
    v17[0] = MatchingDeviceListForSubkey;
    v15 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v15 != -1073741822 )
    {
      if ( v15 == -1073741536 )
        return v17[0];
      v16 = MatchingDeviceListForSubkey;
      if ( v15 )
        return (unsigned int)-1073741595;
      return v16;
    }
  }
  return MatchingDeviceListForSubkey;
}
