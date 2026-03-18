/*
 * XREFs of Controller_PopulateDeviceFlagsFromRegistry @ 0x1400772E4
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_di @ 0x140044FA8 (WPP_RECORDER_SF_di.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromRegistry(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // edx
  unsigned int v9; // edi
  _QWORD *v10; // rsi
  __int64 v11; // [rsp+28h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a1;
  v14 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  if ( a2 == 2 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 312))(WdfDriverGlobals, v3);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033
                                                                                                 + 952))(
               WdfDriverGlobals,
               v5,
               131097LL,
               0LL,
               &v14);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 384))(
               WdfDriverGlobals,
               v3,
               1LL,
               131097LL,
               0LL,
               &v14);
  }
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UseStrictBiosHandoff");
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01033 + 1920))(
               WdfDriverGlobals,
               v14,
               &DestinationString,
               &v13);
    if ( (int)result >= 0 )
    {
      result = v13;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          result = 0x8000000000000000uLL;
          a1[92] |= 0x8000000000000000uLL;
        }
      }
      else
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        a1[92] &= ~0x8000000000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    result = WPP_RECORDER_SF_d(a1[9], v7, 4, 167, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, result);
  }
  v8 = v14;
  if ( v14 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      result = WPP_RECORDER_SF_d(a1[9], v8, 4, 168, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, a2);
    }
  }
  v9 = 0;
  v10 = a1 + 92;
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      result = (__int64)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v11) = v9;
        result = WPP_RECORDER_SF_di(
                   a1[9],
                   5u,
                   4u,
                   0xA9u,
                   (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
                   v11,
                   *v10);
      }
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 2 );
  return result;
}
