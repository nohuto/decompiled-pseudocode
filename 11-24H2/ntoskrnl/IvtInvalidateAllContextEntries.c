/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x14056F4D8
 * Callers:
 *     IvtInitializeIommu @ 0x140B51B90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[1] = 0LL;
  v3[0] = 17LL;
  IvtIommuSendCommand(a1, v3, 0LL);
  return IvtIommuWaitCommand(a1, 0, 0);
}
