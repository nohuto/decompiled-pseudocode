/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x1403BAA30
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403BA040 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_OWORD *__fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1)
{
  __int64 v1; // rdx
  ULONG_PTR v2; // rcx
  _OWORD *result; // rax

  v1 = a1;
  v2 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v2 = 64LL;
  result = (_OWORD *)ExAllocatePool2(v2, v1 + 64, 0x74416553u);
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
  }
  return result;
}
