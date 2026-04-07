/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x1800659E4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18002CF30 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180065CF4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800666E0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180066834 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x1800A18FC (--0CAccentTransition@@QEAA@XZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1AA4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // edi
  __int64 v3; // rcx
  CAccentTransition *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v5 = 755;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v5, 0LL);
    v6 = *((_QWORD *)this + 40);
    if ( v6 )
    {
      CBaseObject::Release((CBaseObject *)(v6 + 8));
      *((_QWORD *)this + 40) = 0LL;
    }
    return (unsigned int)updated;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 256)) || !CAccent::_IsAnimationNeeded(this) )
  {
    updated = CAccent::EndTransition(this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v5 = 773;
    goto LABEL_13;
  }
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = (CAccentTransition *)DefaultHeap::AllocClear(0x28uLL);
  if ( v4 )
    v4 = CAccentTransition::CAccentTransition(v4);
  *((_QWORD *)this + 40) = v4;
  updated = CAccentTransition::StartAnimation(v4, (CAccent *)((char *)this + 256), this);
  if ( updated < 0 )
  {
    v5 = 768;
    goto LABEL_13;
  }
  return (unsigned int)updated;
}
