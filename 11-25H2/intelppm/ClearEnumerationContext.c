/*
 * XREFs of ClearEnumerationContext @ 0x14000681C
 * Callers:
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearEnumerationContext(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
}
