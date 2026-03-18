/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14038C3C0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     BmlInternalTryPinningScaling @ 0x14038C2E8 (BmlInternalTryPinningScaling.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403B75AC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a2)
{
  char result; // al

  switch ( a1 )
  {
    case D3DKMDT_VPPS_IDENTITY:
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_CENTERED:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 1);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_STRETCHED:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 2);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 3);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_CUSTOM:
      a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)(*(unsigned int *)&a2 >> 4);
      return *(_BYTE *)&a2 & 1;
    case D3DKMDT_VPPS_NOTSPECIFIED:
      return 1;
  }
  WdLogSingleEntry1(1LL, a1);
  result = 0;
  WdLogGlobalForLineNumber = 1549;
  return result;
}
