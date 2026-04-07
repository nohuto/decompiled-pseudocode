/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x18000AD88
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x18000ADF0 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x18000AEFC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18001118C (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180011E18 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1CF0 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // edi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v4 = 762;
    goto LABEL_14;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 304)) || !CAccent::_IsAnimationNeeded(this) )
  {
    updated = CAccent::EndTransition(this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v4 = 780;
    goto LABEL_14;
  }
  v5 = *((_QWORD *)this + 46);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)(v5 + 8));
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(v6 + 36) = -1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)v6 = &CAccentTransition::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v6 + 8) = &CAccentTransition::`vftable'{for `CBaseObject'};
  }
  *((_QWORD *)this + 46) = v6;
  updated = CAccentTransition::StartAnimation((CAccentTransition *)v6, (CAccent *)((char *)this + 304), this);
  if ( updated < 0 )
  {
    v4 = 775;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v4, 0LL);
    v7 = *((_QWORD *)this + 46);
    if ( v7 )
    {
      CBaseObject::Release((CBaseObject *)(v7 + 8));
      *((_QWORD *)this + 46) = 0LL;
    }
  }
  return (unsigned int)updated;
}
