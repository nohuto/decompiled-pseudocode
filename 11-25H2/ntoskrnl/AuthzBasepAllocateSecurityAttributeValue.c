/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x140291150
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140290794 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140290A60 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_OWORD *AuthzBasepAllocateSecurityAttributeValue()
{
  ULONG_PTR v0; // rcx
  _OWORD *result; // rax

  v0 = 64LL;
  if ( KeGetCurrentIrql() < 2u )
    v0 = 256LL;
  result = (_OWORD *)ExAllocatePool2(v0);
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
  }
  return result;
}
