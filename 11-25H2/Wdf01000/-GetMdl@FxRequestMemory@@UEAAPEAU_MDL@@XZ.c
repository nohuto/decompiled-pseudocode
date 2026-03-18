/*
 * XREFs of ?GetMdl@FxRequestMemory@@UEAAPEAU_MDL@@XZ @ 0x140080730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall FxRequestMemory::GetMdl(FxRequestMemory *this)
{
  return this->m_ChildListHead.Flink;
}
