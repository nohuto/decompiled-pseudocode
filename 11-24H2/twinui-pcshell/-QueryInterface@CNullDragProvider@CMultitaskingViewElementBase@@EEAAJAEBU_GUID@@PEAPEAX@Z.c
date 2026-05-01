/*
 * XREFs of ?QueryInterface@CNullDragProvider@CMultitaskingViewElementBase@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C4A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CMultitaskingViewElementBase::CNullDragProvider::QueryInterface(
        CMultitaskingViewElementBase::CNullDragProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  return QISearch(this, (LPCQITAB)&`CMultitaskingViewElementBase::CNullDragProvider::QueryInterface'::`2'::qit, a2, a3);
}
