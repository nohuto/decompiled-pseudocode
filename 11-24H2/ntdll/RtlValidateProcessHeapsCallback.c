/*
 * XREFs of RtlValidateProcessHeapsCallback @ 0x18013FF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 */

__int64 __fastcall RtlValidateProcessHeapsCallback(void *a1)
{
  return RtlValidateHeap(a1, 0, 0LL) == 0 ? 0xC0000001 : 0;
}
