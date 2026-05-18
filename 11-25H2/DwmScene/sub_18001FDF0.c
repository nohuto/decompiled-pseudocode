/*
 * XREFs of sub_18001FDF0 @ 0x18001FDF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 */

DWORDLONG sub_18001FDF0()
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  memset(&Buffer, 0, sizeof(Buffer));
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
