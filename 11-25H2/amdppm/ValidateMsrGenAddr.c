/*
 * XREFs of ValidateMsrGenAddr @ 0x140030908
 * Callers:
 *     ValidateMsr_PCT @ 0x1400309D8 (ValidateMsr_PCT.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  unsigned int v1; // ebx
  int v2; // r9d
  int v4; // [rsp+28h] [rbp-10h]

  if ( *a1 == 127 )
  {
    if ( a1[1] == 64 )
    {
      v1 = 0;
      if ( a1[2] )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 39;
          goto LABEL_13;
        }
      }
      else if ( a1[3] != 64 )
      {
        v1 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 40;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v2 = 38;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 37;
LABEL_13:
      v4 = -1073741811;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        1,
        v2,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        v4);
    }
  }
  return v1;
}
