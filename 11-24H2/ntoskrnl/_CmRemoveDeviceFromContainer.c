/*
 * XREFs of _CmRemoveDeviceFromContainer @ 0x14081AD60
 * Callers:
 *     PiDcResetChildDeviceContainers @ 0x140725760 (PiDcResetChildDeviceContainers.c)
 *     _CmMoveBaseContainer @ 0x14081AC7C (_CmMoveBaseContainer.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC718 (_PnpObjectRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-41h]
  __int64 v16; // [rsp+58h] [rbp-39h]
  _BYTE v17[64]; // [rsp+60h] [rbp-31h] BYREF

  memset_0(v14, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v16 = a4;
  v15 = a3;
  if ( v8 )
  {
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v14[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmRemoveDeviceFromContainerWorker(a1, a2, v15, v16, (__int64)v17);
  v11 = v10;
  if ( v8 )
  {
    v14[0] = v10;
    v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return v14[0];
    }
  }
LABEL_8:
  if ( !v17[0] )
    PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
  return v11;
}
