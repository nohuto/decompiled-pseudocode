/*
 * XREFs of ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x140060AC0
 * Callers:
 *     ?GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z @ 0x140060A30 (-GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x140098CA0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x140098F40 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1400990E0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall FxCollectionInternal::GetItem(FxCollectionInternal *this, unsigned int Index)
{
  int v2; // r8d
  _LIST_ENTRY *p_m_ListHead; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY **p_Blink; // rax

  if ( Index < this->m_Count )
  {
    v2 = 0;
    p_m_ListHead = &this->m_ListHead;
    Flink = p_m_ListHead->Flink;
    while ( Flink != p_m_ListHead )
    {
      if ( v2 == Index )
      {
        p_Blink = &Flink[-1].Blink;
        if ( !p_Blink )
          return 0LL;
        return *p_Blink;
      }
      Flink = Flink->Flink;
      ++v2;
    }
  }
  return 0LL;
}
