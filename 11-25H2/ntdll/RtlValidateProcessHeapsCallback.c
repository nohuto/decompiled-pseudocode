/*
 * XREFs of RtlValidateProcessHeapsCallback @ 0x1801434A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 */

__int64 __fastcall RtlValidateProcessHeapsCallback(void *a1)
{
  return RtlValidateHeap(a1, 0, 0LL) == 0 ? 0xC0000001 : 0;
}
