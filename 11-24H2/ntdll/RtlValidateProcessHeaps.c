/*
 * XREFs of RtlValidateProcessHeaps @ 0x180141D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 */

bool RtlValidateProcessHeaps()
{
  return (int)RtlpEnumProcessHeaps(
                (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlValidateProcessHeapsCallback,
                0LL,
                0) >= 0;
}
