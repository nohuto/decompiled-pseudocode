/*
 * XREFs of ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x18053D4EC
 * Callers:
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802C3BB8 (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiveMonitorManager@@PEAUHWND__@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x18053D538 (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEA.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool __fastcall GhostDivider::IsTransparencyEnabled(GhostDivider *this)
{
  char v1; // bl
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(this);
  v1 = 0;
  v3 = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
         L"EnableTransparency",
         &v3) >= 0 )
    return v3 != 0;
  return v1;
}
