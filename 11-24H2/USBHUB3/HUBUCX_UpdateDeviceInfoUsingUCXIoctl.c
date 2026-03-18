/*
 * XREFs of HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1400298C8
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x140025050 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x140026448 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028C5C (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E754 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBUCX_UpdateDeviceInfoUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-10h]

  v2 = *a1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[55],
                   0LL);
  memset(v3, 0, 0x48uLL);
  v4 = v3[6] | 0xB;
  v3[6] = v4;
  v5 = v4 | 4;
  v6 = v4 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v2 + 2512) & 4) == 0 )
    v6 = v5;
  v3[6] = v6;
  if ( (*((_DWORD *)a1 + 413) & 0x400) != 0 )
    v3[6] = v6 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*a1 + 248);
  *((_QWORD *)v3 + 2) = a1[3];
  *((_QWORD *)v3 + 4) = (char *)a1 + 1996;
  *((_QWORD *)v3 + 5) = a1[258];
  v7 = a1[1];
  *((_DWORD *)a1 + 683) = 1;
  if ( (*(_DWORD *)(v7 + 204) & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 683) = 4;
    v3[6] |= 0x80u;
  }
  if ( (unsigned int)HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(a1) == 4089 )
    v8 = *((unsigned __int16 *)a1 + 1106);
  else
    v8 = 0;
  v3[12] = v8;
  if ( (a1[205] & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters((__int64)a1, (__int64)v3);
  if ( (*((_DWORD *)a1 + 618) & 0x80u) != 0 )
  {
    v9 = *((_DWORD *)a1 + 410);
    if ( (v9 & 0x20) != 0 && (v9 & 2) == 0 && *(_DWORD *)(a1[1] + 208) == 512 )
    {
      v3[6] |= 0x40u;
      if ( *(_BYTE *)(*a1 + 240) )
        *((_WORD *)v3 + 32) = 20;
      else
        *((_WORD *)v3 + 32) = *(unsigned __int8 *)(a1[314] + 5);
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x21u,
             (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
             v11);
  }
  return result;
}
