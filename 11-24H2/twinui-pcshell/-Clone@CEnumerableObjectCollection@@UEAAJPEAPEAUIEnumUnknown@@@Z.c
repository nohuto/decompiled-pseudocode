/*
 * XREFs of ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z @ 0x1802E49F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::Clone(CEnumerableObjectCollection *this, struct IEnumUnknown **a2)
{
  return CEnumerableObjectCollection::Clone(
           (CEnumerableObjectCollection *)((char *)this - 16),
           &GUID_00000100_0000_0000_c000_000000000046,
           (void **)a2);
}
