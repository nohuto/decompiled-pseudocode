/*
 * XREFs of SeAuditHeaderRequired @ 0x140420690
 * Callers:
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140F04282 || byte_140F0429A || byte_140F04283 || byte_140F0429B);
}
