/*
 * XREFs of CmFcpManagerArmFeatureUsageRetryTimer @ 0x14066708C
 * Callers:
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 * Callees:
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageRetryTimer(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 409) )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    result = ExSetTimer(*(_QWORD *)(a1 + 560), -600000000LL, 0LL, (ULONG_PTR)v3);
    *(_BYTE *)(a1 + 409) = 1;
  }
  return result;
}
