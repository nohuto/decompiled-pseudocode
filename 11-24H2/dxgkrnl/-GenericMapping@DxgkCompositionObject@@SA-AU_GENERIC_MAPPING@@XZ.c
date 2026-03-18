/*
 * XREFs of ?GenericMapping@DxgkCompositionObject@@SA?AU_GENERIC_MAPPING@@XZ @ 0x140092484
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1401E1E84 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     <none>
 */

struct _GENERIC_MAPPING *__fastcall DxgkCompositionObject::GenericMapping(struct _GENERIC_MAPPING *__return_ptr retstr)
{
  struct _GENERIC_MAPPING *result; // rax

  result = retstr;
  *retstr = (struct _GENERIC_MAPPING)xmmword_140130BB0;
  return result;
}
