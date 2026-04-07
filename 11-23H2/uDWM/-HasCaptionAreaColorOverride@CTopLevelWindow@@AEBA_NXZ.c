/*
 * XREFs of ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18001A988
 * Callers:
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18003B620 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 * Callees:
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001AA6C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x180020C8C (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

char __fastcall CTopLevelWindow::HasCaptionAreaColorOverride(CTopLevelWindow *this)
{
  int v1; // edx
  char v2; // bl
  CDesktopManager *v3; // rdi
  bool active; // si

  v1 = *(_DWORD *)(*((_QWORD *)this + 94) + 192LL);
  if ( v1 == 1 )
    return 0;
  v2 = 0;
  if ( v1 )
    return 1;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  active = CTopLevelWindow::TreatAsActiveWindow(this);
  if ( !*((_BYTE *)v3 + 632) )
    CDesktopManager::LoadAccentColorSettings(v3);
  if ( active ? *((_BYTE *)v3 + 633) : *((_BYTE *)v3 + 634) )
    return 1;
  return v2;
}
