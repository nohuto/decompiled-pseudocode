/*
 * XREFs of HUBID_BuildUxdPnpId @ 0x14001F478
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x14007FAA4 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memmove @ 0x140046600 (memmove.c)
 *     HUBREG_GetUxdPnpValue @ 0x140087204 (HUBREG_GetUxdPnpValue.c)
 */

void *__fastcall HUBID_BuildUxdPnpId(__int64 a1, const void **a2)
{
  void *result; // rax
  int v5; // edx
  void *v6; // rsi
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  result = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
                     WdfDriverGlobals,
                     0LL,
                     0LL,
                     &v8);
  if ( (int)result >= 0 )
  {
    v7 = *(_OWORD *)(a1 + 1676);
    result = (void *)HUBREG_GetUxdPnpValue(a1, &v7, v8);
    if ( (int)result >= 0 )
    {
      if ( !v8 )
        return result;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v8,
        a2);
      result = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a2 + 2LL, 1681082453LL);
      v6 = result;
      if ( result )
      {
        result = memmove(result, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)a2 += 2;
        a2[1] = v6;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 3;
        result = (void *)WPP_RECORDER_SF_(
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           v5,
                           5,
                           11,
                           (__int64)&WPP_bdf3ab4397113be5813bb2cc4e6ee38f_Traceguids);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (void *)WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       3u,
                       5u,
                       0xAu,
                       (__int64)&WPP_bdf3ab4397113be5813bb2cc4e6ee38f_Traceguids,
                       (_DWORD)result);
  }
  if ( v8 )
    return (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
