/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180011E18
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000AD88 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180050650 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18001118C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180011ED4 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180011F54 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800199A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180050824 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // esi
  const struct ACCENT_POLICY *v3; // rdx
  struct CVisual *v5; // r9
  unsigned int v6; // eax

  updated = 0;
  if ( !CAccent::_AnyTransparentBackground((CAccent *)this) )
  {
    if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(this + 36)) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v3, this + 41, 0LL);
      if ( updated < 0 )
      {
        v6 = 649;
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 320) )
    {
      v5 = this[41];
      *((_DWORD *)this + 94) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 38),
                  this + 42,
                  v5);
      if ( updated < 0 )
      {
        v6 = 660;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v6, 0LL);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v6 = 662;
      goto LABEL_11;
    }
  }
  return (unsigned int)updated;
}
