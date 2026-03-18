/*
 * XREFs of HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x14002617C
 * Callers:
 *     HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x14001F9B0 (HUBDSM_AcquiringAddressZeroOwnershipOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028AB4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 432),
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)v2 = 24;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 24);
  result = HUBUCX_SubmitUcxIoctl(a1, 4788231LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x16u,
             (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
             v4);
  }
  return result;
}
