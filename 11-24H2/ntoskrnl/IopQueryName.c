/*
 * XREFs of IopQueryName @ 0x140952F80
 * Callers:
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 * Callees:
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 */

__int64 __fastcall IopQueryName(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        unsigned int *a5,
        char a6)
{
  return IopQueryNameInternal(a1, a2, 0, a3, a4, a5, a6);
}
