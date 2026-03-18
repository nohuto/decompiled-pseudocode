/*
 * XREFs of EditionFindThreadPointerData @ 0x1C0152CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0152A1C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall EditionFindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}
