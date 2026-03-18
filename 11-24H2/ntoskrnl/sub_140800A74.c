/*
 * XREFs of sub_140800A74 @ 0x140800A74
 * Callers:
 *     ClipInitHandles @ 0x140655660 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140AA6D0C (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140800A74()
{
  qword_140E3E958 = 10LL;
  qword_140E3E948 = 0LL;
  qword_140E3E974 = 0LL;
  dword_140E3E97C = 0;
  qword_140E3E950 = 0LL;
  qword_140E3E968 = 0LL;
  dword_140E3E970 = 54;
  qword_140E3E940 = 8LL;
  qword_140E3E960 = (__int64)sub_1408FCCD0;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140E3E974 + 4), L"SHA256", 0LL, 0);
}
