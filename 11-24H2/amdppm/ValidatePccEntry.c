/*
 * XREFs of ValidatePccEntry @ 0x140031CB4
 * Callers:
 *     InitAcpiLegacyPcc @ 0x14003D214 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x140006F38 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall ValidatePccEntry(_DWORD *a1, const wchar_t *a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // r9

  v2 = -1073741811;
  if ( !qword_140015BC0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        3,
        48,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids);
    }
    return v2;
  }
  if ( *a1 > (unsigned int)(dword_140015BC8 - 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v2;
    v3 = 49;
LABEL_7:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v3,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a2);
    return v2;
  }
  if ( a1[1] <= (unsigned int)(dword_140015BC8 - 4) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 50;
    goto LABEL_7;
  }
  return v2;
}
