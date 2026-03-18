/*
 * XREFs of CiLogTaskIndexCancelYield @ 0x140004690
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x140001800 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     __security_check_cookie @ 0x1400059D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexCancelYield(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a1 + 144;
  UserData.Size = 4;
  return EtwWrite(RegHandle, &CiTaskIndexYieldCancelEvent, 0LL, 1u, &UserData);
}
