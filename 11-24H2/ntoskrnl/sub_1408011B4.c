/*
 * XREFs of sub_1408011B4 @ 0x1408011B4
 * Callers:
 *     ClipInitHandles @ 0x140653D60 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140AA1E08 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_1408011B4()
{
  qword_140E3EA98 = 10LL;
  qword_140E3EA88 = 0LL;
  qword_140E3EAB4 = 0LL;
  dword_140E3EABC = 0;
  qword_140E3EA90 = 0LL;
  qword_140E3EAA8 = 0LL;
  dword_140E3EAB0 = 54;
  qword_140E3EA80 = 8LL;
  qword_140E3EAA0 = (__int64)sub_14091F5B0;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140E3EAB4 + 4), L"SHA256", 0LL, 0);
}
