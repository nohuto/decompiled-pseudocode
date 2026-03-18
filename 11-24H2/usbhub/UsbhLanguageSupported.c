/*
 * XREFs of UsbhLanguageSupported @ 0x140039D88
 * Callers:
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // esi
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v3 = a3;
  v4 = PdoExt(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 273);
  if ( v5 )
  {
    if ( v4[545] )
    {
      while ( *v5 )
      {
        if ( *v5 == (_WORD)v3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                20,
                (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
                v3);
          }
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
        v3);
  }
  return 0;
}
