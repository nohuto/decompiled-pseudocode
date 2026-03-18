/*
 * XREFs of ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x140043ACC
 * Callers:
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14004259C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x140043DA8 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall FxDisposeList::Initialize(FxDisposeList *this, void *WdmObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  signed int _a1; // eax
  unsigned int v6; // edi

  m_Globals = this->m_Globals;
  this->m_ObjectFlags |= 0x800u;
  _a1 = FxSystemWorkItem::_Create(m_Globals, WdmObject, &this->m_SystemWorkItem);
  v6 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, _a1);
    return v6;
  }
  else
  {
    this->m_WdmObject = WdmObject;
    return 0LL;
  }
}
