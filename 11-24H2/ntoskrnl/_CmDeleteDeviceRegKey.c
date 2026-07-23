/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x1409AAB2C
 * Callers:
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PipResetDevice @ 0x140C23DB0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A73AFC (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v16; // [rsp+20h] [rbp-71h]
  _DWORD v17[4]; // [rsp+40h] [rbp-51h] BYREF
  int v18; // [rsp+50h] [rbp-41h]
  int v19; // [rsp+54h] [rbp-3Dh]
  char v20; // [rsp+58h] [rbp-39h]
  int v21; // [rsp+5Ch] [rbp-35h]

  memset_0(v17, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v21 = 0;
  v19 = a4;
  v18 = a3;
  v20 = 1;
  if ( v8 )
  {
    v16 = 1;
    v9 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v17[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v16) = v20;
  v11 = CmDeleteDeviceRegKeyWorker(a1, a2, v18, v19, v16);
  v10 = v11;
  if ( !v8 )
    return v10;
  v17[0] = v11;
  v12 = guard_dispatch_icall_no_overrides(a1, a2);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v10;
  if ( v12 == -1073741536 )
    return v17[0];
  v14 = v10;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
