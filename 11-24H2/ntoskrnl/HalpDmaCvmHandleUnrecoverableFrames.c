/*
 * XREFs of HalpDmaCvmHandleUnrecoverableFrames @ 0x14054CD5C
 * Callers:
 *     HalpDmaCvmSetPageShareability @ 0x1406FDBFC (HalpDmaCvmSetPageShareability.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpDmaCvmHandleUnrecoverableFrames(__int64 a1, __int64 a2, unsigned int a3)
{
  _InterlockedAdd(&dword_140FC0D50, a3);
}
