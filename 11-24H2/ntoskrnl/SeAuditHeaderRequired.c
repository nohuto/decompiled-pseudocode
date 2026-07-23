/*
 * XREFs of SeAuditHeaderRequired @ 0x140411D10
 * Callers:
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140F04902 || byte_140F0491A || byte_140F04903 || byte_140F0491B);
}
