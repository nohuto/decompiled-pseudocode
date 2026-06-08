/*
 * XREFs of InitPep @ 0x14003B614
 * Callers:
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003B9D4 (PepNotifyQuerySocIdentifier.c)
 *     RegisterPepDevice @ 0x14003BE8C (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // edx
  int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  char v8; // dl
  char v10; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v3 = RegisterPepDevice(a1);
  if ( v3 >= 0 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_140014928)(*(unsigned int *)(a1 + 56), *v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL);
    if ( !PepSocIdInitialized )
    {
      PepNotifyQuerySocIdentifier(a1);
      PepSocIdInitialized = 1;
    }
    if ( !PepLpiInitialized )
    {
      v5 = *(_QWORD *)(a1 + 280);
      if ( (v5 & 0x100000000000LL) != 0 && (v5 & 0x20E0000000000LL) != 0 )
      {
        v6 = *v4;
        v10 = 0;
        v7 = PoFxProcessorNotification(v6, 34LL, &v10);
        v8 = 0;
        if ( v7 >= 0 )
          v8 = v10;
        PepLpiDisabled = v8;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *(_QWORD *)(a1 + 280) &= 0xFFFDE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400145A8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      13,
      (__int64)&WPP_1e2c66cd4e403eb679a1b1edce07a74a_Traceguids,
      v3);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
