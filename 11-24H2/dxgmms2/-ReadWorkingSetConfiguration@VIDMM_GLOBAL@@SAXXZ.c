/*
 * XREFs of ?ReadWorkingSetConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x1401087CC
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140107540 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

void VIDMM_GLOBAL::ReadWorkingSetConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-79h] BYREF
  int v1; // [rsp+34h] [rbp-75h] BYREF
  _QWORD v2[22]; // [rsp+40h] [rbp-69h] BYREF

  v0 = 90;
  dword_140081420 = 90;
  v1 = 65;
  dword_140081424 = 65;
  memset(v2, 0, 0xA8uLL);
  v2[7] = 0LL;
  v2[2] = L"WorkingSet.DefaultMaximumPercentile";
  LODWORD(v2[1]) = 288;
  LODWORD(v2[4]) = 67108868;
  v2[3] = &dword_140081420;
  LODWORD(v2[6]) = 4;
  v2[5] = &v0;
  v2[9] = L"WorkingSet.DefaultMinimumPercentile";
  v2[10] = &dword_140081424;
  LODWORD(v2[8]) = 288;
  LODWORD(v2[11]) = 67108868;
  LODWORD(v2[13]) = 4;
  v2[12] = &v1;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", v2, 0LL, 0LL);
}
