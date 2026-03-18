/*
 * XREFs of HUBFDO_IoctlGetPortStatus @ 0x14007E4B8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007B820 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD40 (HUBSM_AddHsmEvent.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007ED08 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortStatus(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // edi
  int v10; // edi
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  int v14; // [rsp+28h] [rbp-20h]
  void *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_14006C198);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v15,
         0LL);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = v9;
      WPP_RECORDER_SF_d(v8[317], 2u, 3u, 0x3Eu, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids, v14);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v9);
  }
  v9 = HUBFDO_IoctlValidateParameters((_DWORD)v8, 4, a4, (_DWORD)v15, 8LL, a3);
  if ( v9 < 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v9);
  v10 = *(unsigned __int16 *)v15;
  memset(v15, 0, a3);
  *(_DWORD *)v15 = v10;
  for ( i = (_QWORD *)v8[297]; ; i = (_QWORD *)*i )
  {
    v12 = i - 31;
    if ( v8 + 297 == i )
      goto LABEL_9;
    if ( *((unsigned __int16 *)v12 + 100) == v10 )
      break;
  }
  if ( i == (_QWORD *)248 )
  {
LABEL_9:
    v9 = -1073741811;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
      WdfDriverGlobals,
      a2,
      8LL);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v9);
  }
  v8[325] = v12;
  v8[318] = a2;
  return HUBSM_AddHsmEvent((__int64)v8, 2039);
}
