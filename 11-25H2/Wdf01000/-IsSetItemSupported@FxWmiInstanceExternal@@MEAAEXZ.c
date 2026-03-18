/*
 * XREFs of ?IsSetItemSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x14008DA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxWmiInstanceExternal::IsSetItemSupported(FxWmiInstanceInternal *this)
{
  return this->m_SetItem != 0LL;
}
