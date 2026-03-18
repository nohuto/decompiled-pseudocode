/*
 * XREFs of ?IsIdentityTransform@@YA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AAAC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

bool __fastcall IsIdentityTransform(const struct tagINPUT_TRANSFORM *Source1)
{
  _DWORD Source2[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(Source2, 0, sizeof(Source2));
  Source2[15] = 1065353216;
  Source2[10] = 1065353216;
  Source2[5] = 1065353216;
  Source2[0] = 1065353216;
  return RtlCompareMemory(Source1, Source2, 0x40uLL) == 64;
}
