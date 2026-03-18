/*
 * XREFs of ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x140039CBC
 * Callers:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x140039990 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FE7C (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x140319350 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return 1;
  v3 = v2 - 1;
  if ( !v3 )
    return 1;
  v4 = v3 - 1;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
  v6 = v5 - 1;
  if ( !v6 )
    return DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
  return v6 == 250;
}
