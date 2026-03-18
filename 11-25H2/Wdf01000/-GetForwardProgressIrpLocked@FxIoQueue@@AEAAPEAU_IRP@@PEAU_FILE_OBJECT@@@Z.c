/*
 * XREFs of ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x1400484F0
 * Callers:
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x140048454 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxIoQueue::GetForwardProgressIrpLocked(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  _LIST_ENTRY *p_m_PendedIrpList; // r9
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY **p_Blink; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rax

  p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
  for ( i = p_m_PendedIrpList->Flink; ; i = Flink )
  {
    p_Blink = 0LL;
    if ( i == p_m_PendedIrpList )
      break;
    Flink = i->Flink;
    p_Blink = &i[-11].Blink;
    if ( !FileObject || FileObject == (_FILE_OBJECT *)p_Blink[23][3].Flink )
    {
      if ( Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      i->Blink = i;
      i->Flink = i;
      if ( _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
      {
        p_Blink[18] = 0LL;
        return p_Blink;
      }
    }
  }
  return p_Blink;
}
