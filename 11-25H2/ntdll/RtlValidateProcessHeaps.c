/*
 * XREFs of RtlValidateProcessHeaps @ 0x180143470
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  return (int)RtlpEnumProcessHeaps(
                (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlValidateProcessHeapsCallback,
                0LL,
                0) >= 0;
}
