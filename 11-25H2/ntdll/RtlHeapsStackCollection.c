/*
 * XREFs of RtlHeapsStackCollection @ 0x1800E4C14
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E496C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 RtlHeapsStackCollection()
{
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 1;
  v1[1] = 0x8000000;
  v1[2] = 0x8000000;
  return RtlpEnumProcessHeaps(
           (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpStackTraceDatabaseHeapEnum,
           (__int64)v1,
           0);
}
