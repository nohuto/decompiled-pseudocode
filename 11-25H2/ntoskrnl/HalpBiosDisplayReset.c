/*
 * XREFs of HalpBiosDisplayReset @ 0x1405398B0
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140539920 (x86BiosCall.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 HalpBiosDisplayReset()
{
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  LODWORD(v1[0]) = 18;
  return x86BiosCall(16LL, v1);
}
