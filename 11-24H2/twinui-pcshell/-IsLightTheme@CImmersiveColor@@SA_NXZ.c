/*
 * XREFs of ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x1801524B4
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x180152308 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802C3BB8 (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

bool CImmersiveColor::IsLightTheme(void)
{
  __int64 Color; // rax

  Color = CImmersiveColor::GetColor(215LL);
  return (_WORD)Color == 0xFFFF && BYTE2(Color) == 0xFF;
}
