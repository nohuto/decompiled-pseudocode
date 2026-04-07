/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180065BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180065C8C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180065CC8 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180065CF4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180065DDC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800665AC (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A1868 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int updated; // esi
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( CAccent::_AnyTransparentBackground(this) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 60) - 3) <= 1 && (*((_DWORD *)this + 8) & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateAcrylicBlurBehind(this);
      if ( updated < 0 )
      {
        v3 = 700;
LABEL_9:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v3, 0LL);
        CAccent::_CleanupNonStaticsResources(this);
        return (unsigned int)updated;
      }
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 8) & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateResources(this);
      if ( updated < 0 )
      {
        v3 = 688;
        goto LABEL_9;
      }
    }
    if ( (*((_DWORD *)this + 8) & 0x2000) != 0 )
      CAccent::_UpdateTransitionGradient(this);
  }
  v4 = *((_DWORD *)this + 8) & 0xFFFF8FFF;
  *((_DWORD *)this + 8) = v4;
  if ( (v4 & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 8) &= ~0x8000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v3 = 714;
    goto LABEL_9;
  }
  return (unsigned int)updated;
}
