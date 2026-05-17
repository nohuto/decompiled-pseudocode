/*
 * XREFs of RtlValidateProcessHeapsCallback @ 0x180141DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidateHeap @ 0x18003F7D0 (RtlValidateHeap.c)
 */

__int64 __fastcall RtlValidateProcessHeapsCallback(__int64 a1)
{
  return (unsigned __int8)RtlValidateHeap(a1, 0, 0LL) == 0 ? 0xC0000001 : 0;
}
