/*
 * XREFs of RtlStringFromGUID @ 0x1800FB070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringFromGUID(unsigned int *a1, __int64 a2)
{
  return RtlStringFromGUIDEx(a1, a2, 1);
}
