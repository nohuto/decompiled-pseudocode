/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180011ED4
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180011E18 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18001118C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CRenderDataVisual **a3,
        struct CVisual *a4)
{
  int inserted; // ebx
  _QWORD *v8; // r8
  unsigned int v10; // eax
  bool v11; // [rsp+20h] [rbp-18h]

  inserted = 0;
  if ( CAccent::s_IsPolicyActive(a2) && !*v8 )
  {
    inserted = CRenderDataVisual::Create(a3);
    if ( inserted < 0 )
    {
      v10 = 563;
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), *a3, a4, 1, v11);
      if ( inserted >= 0 )
        return (unsigned int)inserted;
      v10 = 564;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10, 0LL);
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
  }
  return (unsigned int)inserted;
}
