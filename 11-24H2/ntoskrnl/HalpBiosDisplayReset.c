/*
 * XREFs of HalpBiosDisplayReset @ 0x14053C060
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x14053C0D0 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 HalpBiosDisplayReset()
{
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  LODWORD(v1[0]) = 18;
  return x86BiosCall(16LL, v1);
}
