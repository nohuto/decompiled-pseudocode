/*
 * XREFs of _CmGetMatchingDevicePanelList @ 0x14081DD50
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140820650 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081DEB0 (_CmGetMatchingDevicePanelListWorker.c)
 */

__int64 __fastcall CmGetMatchingDevicePanelList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int MatchingDevicePanelListWorker; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _DWORD v19[4]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-51h]
  __int64 v21; // [rsp+58h] [rbp-49h]
  __int64 v22; // [rsp+60h] [rbp-41h]
  int v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  int v25; // [rsp+78h] [rbp-29h]

  memset_0(v19, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v21 = a3;
  v23 = a5;
  v20 = a2;
  v22 = a4;
  v24 = a6;
  v25 = a7;
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
        return v19[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingDevicePanelListWorker = CmGetMatchingDevicePanelListWorker(a1, v20, v21, v22, v23, v24, v25);
  v14 = MatchingDevicePanelListWorker;
  if ( !v11 )
    return v14;
  v19[0] = MatchingDevicePanelListWorker;
  v15 = guard_dispatch_icall_no_overrides(a1, 0LL);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return v19[0];
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
