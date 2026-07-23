/*
 * XREFs of _CmEnumDevicesInContainerWithCallback @ 0x14081A358
 * Callers:
 *     PiDcResetChildDeviceContainers @ 0x140725760 (PiDcResetChildDeviceContainers.c)
 *     _CmGetContainerBooleanProperty @ 0x14081A704 (_CmGetContainerBooleanProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14081A4A8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 */

__int64 __fastcall CmEnumDevicesInContainerWithCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h]
  int v21; // [rsp+68h] [rbp-31h]

  memset_0(v17, 0, 0x58uLL);
  v9 = *(_QWORD *)(a1 + 504);
  v21 = 0;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  if ( v9 )
  {
    v10 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        return v17[0];
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmEnumDevicesInContainerWithCallbackWorker(a1, a2, v18, v19, v20, v21);
  v12 = v11;
  if ( !v9 )
    return v12;
  v17[0] = v11;
  v13 = guard_dispatch_icall_no_overrides(a1, a2);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v12;
  if ( v13 == -1073741536 )
    return v17[0];
  v15 = v12;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
