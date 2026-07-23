/*
 * XREFs of _CmCreateInterfaceClass @ 0x1409C3C28
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1408B9700 (_PnpDispatchInterfaceClass.c)
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409C3AD4 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmCreateInterfaceClassWorker @ 0x1409C3DBC (_CmCreateInterfaceClassWorker.c)
 */

__int64 __fastcall CmCreateInterfaceClass(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 v10; // rsi
  int InterfaceClassWorker; // eax
  int v12; // ebx
  int v13; // eax
  int v15; // eax
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
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v15 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        goto LABEL_15;
      if ( v15 )
        goto LABEL_8;
    }
  }
  InterfaceClassWorker = CmCreateInterfaceClassWorker(a1, a2, v17, (unsigned int)&Handle, (__int64)v19, v20);
  v12 = InterfaceClassWorker;
  if ( !v10 )
    goto LABEL_16;
  v16[0] = InterfaceClassWorker;
  v13 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v13 == -1073741822 )
    goto LABEL_16;
  if ( v13 == -1073741536 )
  {
LABEL_15:
    v12 = v16[0];
    goto LABEL_16;
  }
  if ( v13 )
  {
LABEL_8:
    v12 = -1073741595;
    goto LABEL_9;
  }
LABEL_16:
  if ( v12 >= 0 && a4 )
  {
    *a4 = Handle;
LABEL_19:
    if ( a5 )
      *a5 = v19[0];
    return (unsigned int)v12;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v12 >= 0 )
    goto LABEL_19;
  return (unsigned int)v12;
}
