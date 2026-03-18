/*
 * XREFs of ?GetBlackScreenTrigger@@YA?AW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@IW4_D3DKMT_BLACK_SCREEN_DETECTION_CALLER@@@Z @ 0x1401C8F68
 * Callers:
 *     DrvDxgkCheckDisplayState @ 0x1401CAAE8 (DrvDxgkCheckDisplayState.c)
 * Callees:
 *     Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401CCA8C (Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetBlackScreenTrigger(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = a1 - 1;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 2;
  if ( !v4 )
  {
    v6 = a2 - 1;
    if ( !v6 )
      return 4LL;
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return 9LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 10LL;
      if ( v9 == 1 && (unsigned int)Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline() )
        return 11LL;
      return 4LL;
    }
    return 1LL;
  }
  if ( v4 == 4 )
    return 8LL;
  else
    return 0LL;
}
