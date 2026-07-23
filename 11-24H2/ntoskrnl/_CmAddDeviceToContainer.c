/*
 * XREFs of _CmAddDeviceToContainer @ 0x140A4C5C4
 * Callers:
 *     _CmMoveBaseContainer @ 0x14081AC7C (_CmMoveBaseContainer.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A4C720 (_CmAddDeviceToContainerWorker.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC718 (_PnpObjectRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall CmAddDeviceToContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  _DWORD *v15; // [rsp+28h] [rbp-69h]
  _DWORD v16[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h]
  __int64 v18; // [rsp+58h] [rbp-39h]
  _BYTE v19[64]; // [rsp+60h] [rbp-31h] BYREF

  memset_0(v16, 0, 0x58uLL);
  v9 = *(_QWORD *)(a1 + 504);
  v18 = a4;
  v17 = a3;
  if ( v9 )
  {
    v15 = v16;
    v10 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_17;
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmAddDeviceToContainerWorker(a1, a2, v17, v18, v19, v15);
  v12 = v11;
  if ( !v9 || (v16[0] = v11, v13 = guard_dispatch_icall_no_overrides(a1, a2), v13 == -1073741822) )
  {
LABEL_8:
    if ( !v19[0] )
      PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
    goto LABEL_10;
  }
  if ( v13 != -1073741536 )
  {
    if ( !v13 )
      goto LABEL_8;
    return (unsigned int)-1073741595;
  }
LABEL_17:
  v12 = v16[0];
LABEL_10:
  if ( v12 >= 0 && a5 )
    *a5 = v19[0];
  return (unsigned int)v12;
}
