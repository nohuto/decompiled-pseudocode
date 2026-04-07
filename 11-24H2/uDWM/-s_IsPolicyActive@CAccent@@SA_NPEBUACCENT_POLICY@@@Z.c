/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18002CF30
 * Callers:
 *     ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180008B04 (-AllowSnapshot@CWindowData@@QEBA_NXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18002CC98 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002D1FC (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800659E4 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180065CF4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180066454 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 * Callees:
 *     <none>
 */

char __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  int v1; // eax
  char v2; // cl

  v1 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v2 = 1;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 0;
  return v2;
}
