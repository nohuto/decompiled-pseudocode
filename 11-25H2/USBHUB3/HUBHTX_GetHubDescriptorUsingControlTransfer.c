/*
 * XREFs of HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x140004914
 * Callers:
 *     HUBHSM_GettingHubDescriptor @ 0x1400091B0 (HUBHSM_GettingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBHTX_GetDescriptor @ 0x1400046D0 (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHTX_GetHubDescriptorUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  char v3; // r9
  int v4; // r8d
  int v5; // [rsp+20h] [rbp-18h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 256) == 1 || *(_DWORD *)(a1 + 256) == 2 )
  {
    v3 = 41;
    v4 = 71;
LABEL_7:
    result = HUBHTX_GetDescriptor(a1, a1 + 1188, v4, v3, v5, 1);
    if ( (int)result >= 0 )
      return result;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 256) == 3 )
  {
    v3 = 42;
    v4 = 12;
    goto LABEL_7;
  }
  LODWORD(result) = -1073741823;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2528),
      2u,
      3u,
      0x10u,
      (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
      v6);
  }
  return HUBSM_AddEvent(a1 + 1272, 2004LL);
}
