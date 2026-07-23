/*
 * XREFs of _CmCreateDeviceInterface @ 0x1409C3968
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409C3AD4 (_CmCreateDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmCreateDeviceInterface(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 v10; // rsi
  int v11; // eax
  int DeviceInterfaceWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v16[4]; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+50h] [rbp-49h]
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v19[4]; // [rsp+60h] [rbp-39h] BYREF
  int v20; // [rsp+64h] [rbp-35h]

  memset_0(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  if ( a3 || (v17 = 1, a4) )
    v17 = a3;
  v20 = a6;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_15;
      if ( v11 )
        goto LABEL_17;
    }
  }
  DeviceInterfaceWorker = CmCreateDeviceInterfaceWorker(a1, a2, v17, (unsigned int)&Handle, (__int64)v19, v20);
  v13 = DeviceInterfaceWorker;
  if ( v10 )
  {
    v16[0] = DeviceInterfaceWorker;
    v14 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_17:
        v13 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v13 = v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_21:
    if ( a5 )
      *a5 = v19[0];
    return (unsigned int)v13;
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  if ( v13 >= 0 )
    goto LABEL_21;
  return (unsigned int)v13;
}
