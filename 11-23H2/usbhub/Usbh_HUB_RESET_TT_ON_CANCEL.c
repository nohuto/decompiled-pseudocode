/*
 * XREFs of Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C00473E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_HUB_RESET_TT_ON_CANCEL(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        50,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x33u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v9);
    }
  }
  LOBYTE(v7) = *a3 != 0;
  result = *(_DWORD *)(a1 + 2568) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 2568) = result | v7;
  return result;
}
