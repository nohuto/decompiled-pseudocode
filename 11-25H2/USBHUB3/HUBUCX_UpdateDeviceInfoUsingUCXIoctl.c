/*
 * XREFs of HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029738
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x140025010 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1400263B8 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028AB4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E5E0 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBUCX_UpdateDeviceInfoUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 result; // rax

  v2 = *a1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  memset(v3, 0, 0x48uLL);
  v4 = v3[6] | 0xB;
  v3[6] = v4;
  v5 = v4 | 4;
  v6 = v4 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v2 + 2504) & 4) == 0 )
    v6 = v5;
  v3[6] = v6;
  if ( (*((_DWORD *)a1 + 411) & 0x400) != 0 )
    v3[6] = v6 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*a1 + 248);
  *((_QWORD *)v3 + 2) = a1[3];
  *((_QWORD *)v3 + 4) = (char *)a1 + 1988;
  *((_QWORD *)v3 + 5) = a1[257];
  IsEnabledDeviceUsageNoInline = Feature_UTSP__private_IsEnabledDeviceUsageNoInline();
  v8 = a1[1];
  if ( IsEnabledDeviceUsageNoInline )
  {
    *((_DWORD *)a1 + 681) = 1;
    if ( (*(_DWORD *)(v8 + 204) & 0x800) == 0 )
      goto LABEL_10;
    *((_DWORD *)a1 + 681) = 4;
  }
  else
  {
    *((_DWORD *)a1 + 409) |= 0x200000u;
    if ( (*(_DWORD *)(v8 + 204) & 0x800) == 0 )
      goto LABEL_10;
  }
  v3[6] |= 0x80u;
LABEL_10:
  if ( (unsigned int)HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(a1) == 4089 )
    v9 = *((unsigned __int16 *)a1 + 1102);
  else
    v9 = 0;
  v3[12] = v9;
  if ( (a1[204] & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters((__int64)a1, (__int64)v3);
  if ( (a1[308] & 0x80) != 0 )
  {
    v10 = *((_DWORD *)a1 + 408);
    if ( (v10 & 0x20) != 0 && (v10 & 2) == 0 && *(_DWORD *)(a1[1] + 208) == 512 )
    {
      v3[6] |= 0x40u;
      if ( *(_BYTE *)(*a1 + 240) )
        *((_WORD *)v3 + 32) = 20;
      else
        *((_WORD *)v3 + 32) = *(unsigned __int8 *)(a1[313] + 5);
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x21u,
             (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
             result);
  return result;
}
