/*
 * XREFs of sub_18001FF50 @ 0x18001FF50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 */

DWORDLONG sub_18001FF50()
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  memset(&Buffer, 0, sizeof(Buffer));
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
