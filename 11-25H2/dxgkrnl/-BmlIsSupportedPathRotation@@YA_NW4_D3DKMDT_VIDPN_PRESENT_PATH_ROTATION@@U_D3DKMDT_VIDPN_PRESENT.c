/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D3DDC
 * Callers:
 *     BmlPinPathContentRotation @ 0x1402D3CFC (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403C2B70 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

char __fastcall BmlIsSupportedPathRotation(
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  int v2; // eax
  unsigned int v3; // r10d
  __int64 v4; // r11
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  char v8; // r8
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r10d
  int v13; // eax
  int v14; // eax

  v2 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          WdLogSingleEntry1(1LL, v4);
          WdLogGlobalForLineNumber = 1551;
          return 0;
        }
        v7 = v3 >> 3;
      }
      else
      {
        v7 = v3 >> 2;
      }
    }
    else
    {
      v7 = v3 >> 1;
    }
  }
  else
  {
    LOBYTE(v7) = v3;
  }
  v8 = 1;
  if ( (v7 & 1) == 0 )
    return 0;
  v9 = v4;
  if ( (unsigned int)(v4 - 1) <= 0xF )
    v9 = ((int)v4 - 1) / 4 + 1;
  v10 = v9 - 1;
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          WdLogSingleEntry1(1LL, v4);
          WdLogGlobalForLineNumber = 1575;
          return 0;
        }
        v11 = v3 >> 7;
      }
      else
      {
        v11 = v3 >> 6;
      }
    }
    else
    {
      v11 = v3 >> 5;
    }
  }
  else
  {
    v11 = v3 >> 4;
  }
  if ( (v11 & 1) == 0 )
    return 0;
  return v8;
}
