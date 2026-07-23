/*
 * XREFs of HashpHashBytes @ 0x1408308F8
 * Callers:
 *     HashpHashMemory @ 0x140830304 (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Append @ 0x140518710 (SymCryptSha256Append.c)
 *     SymCryptSha384Append @ 0x14052303C (SymCryptSha384Append.c)
 *     SymCryptSha512Append @ 0x140523138 (SymCryptSha512Append.c)
 *     SymCryptSha1Append @ 0x140524860 (SymCryptSha1Append.c)
 *     SymCryptMd5Append @ 0x140525B80 (SymCryptMd5Append.c)
 */

__int64 __fastcall HashpHashBytes(_DWORD *a1, char *a2, unsigned int a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return SymCryptMd5Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x8004:
      return SymCryptSha1Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x800C:
      return SymCryptSha256Append(a1 + 4, a2, a3);
    case 0x800D:
      return SymCryptSha384Append();
    case 0x800E:
      return SymCryptSha512Append(a1 + 4, a2, a3);
  }
  return result;
}
