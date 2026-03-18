/*
 * XREFs of SeAuditHeaderRequired @ 0x14041D940
 * Callers:
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140F04662 || byte_140F0467A || byte_140F04663 || byte_140F0467B);
}
