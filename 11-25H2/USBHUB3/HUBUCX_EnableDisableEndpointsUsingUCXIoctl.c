/*
 * XREFs of HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x140026EFC
 * Callers:
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1400218C0 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x140021D20 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x140021E30 (HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x140026BDC (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028AB4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

_UNKNOWN **__fastcall HUBUCX_EnableDisableEndpointsUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  _UNKNOWN **result; // rax
  _QWORD **v4; // r8
  _QWORD *i; // rax
  __int64 j; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 k; // rdx
  int v10; // r8d
  int v11; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 128) )
  {
    if ( !*(_DWORD *)(a1 + 112) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          4,
          5,
          25,
          (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 2416),
        0LL);
      v2 = 4028;
      return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, v2);
    }
    if ( (*(_DWORD *)(a1 + 1636) & 0x8000) != 0 )
    {
      v4 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = *v4; ; i = (_QWORD *)*i )
      {
        v7 = i - 1;
        if ( v4 == i )
          break;
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)v7 + 6); j = (unsigned int)(j + 1) )
        {
          if ( LODWORD(v7[9 * j + 6]) == 3 )
            LODWORD(v7[9 * j + 6]) = 6;
        }
      }
      *(_DWORD *)(a1 + 1564) = -2147481856;
      *(_DWORD *)(a1 + 1560) = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          4,
          5,
          26,
          (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids);
      v2 = 4020;
      return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, v2);
    }
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 432),
         0LL);
  memset((void *)(v8 + 4), 0, 0x5CuLL);
  *(_DWORD *)v8 = 96;
  *(_QWORD *)(v8 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 1636) & 0x8000) == 0 )
  {
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(a1 + 112);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 104);
  }
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 128);
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 + 144);
  *(_QWORD *)(v8 + 64) = *(_QWORD *)(a1 + 136);
  if ( *(_QWORD *)(a1 + 48) != -32LL )
  {
    *(_BYTE *)(v8 + 80) = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 37LL);
    if ( *(_QWORD *)(a1 + 64) )
    {
      for ( k = 0LL; k < 2; ++k )
        *(_BYTE *)(v8 + k + 81) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + k + 2);
    }
  }
  *(_DWORD *)(v8 + 84) = *(_DWORD *)(a1 + 148);
  *(_QWORD *)(v8 + 88) = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  result = (_UNKNOWN **)HUBUCX_SubmitUcxIoctl(a1, 4788279LL);
  v10 = (int)result;
  if ( (int)result < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v10;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            2u,
                            5u,
                            0x1Bu,
                            (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
                            v11);
    }
  }
  return result;
}
