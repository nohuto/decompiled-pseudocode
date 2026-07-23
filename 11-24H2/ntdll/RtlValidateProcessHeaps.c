/*
 * XREFs of RtlValidateProcessHeaps @ 0x18013FF30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  return (int)RtlpEnumProcessHeaps(
                (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlValidateProcessHeapsCallback,
                0LL,
                0) >= 0;
}
