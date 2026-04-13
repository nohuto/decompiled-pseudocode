/*
 * XREFs of ?QueryInterface@CCachedSTAObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CCachedSTAObject::QueryInterface(CCachedSTAObject *this, const struct _GUID *a2, void **a3)
{
  return QISearch(this, (LPCQITAB)&`CCachedSTAObject::QueryInterface'::`2'::qit, a2, a3);
}
