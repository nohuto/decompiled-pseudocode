/*
 * XREFs of ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x14001DC9C
 * Callers:
 *     imp_WdfChildListEndIteration @ 0x140055990 (imp_WdfChildListEndIteration.c)
 * Callees:
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x14001DE8C (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 */

void __fastcall FxChildList::EndIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x12u, WPP_FxChildList_cpp_Traceguids);
  FxChildList::EndScan(this, &Iterator->Size);
  *(_OWORD *)Iterator->Reserved = 0LL;
  *(_OWORD *)&Iterator->Reserved[2] = 0LL;
}
