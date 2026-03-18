/*
 * XREFs of HashpFinalizeHash @ 0x14082031C
 * Callers:
 *     HashpHashMemory @ 0x14081FDCC (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Result @ 0x140519E90 (SymCryptSha256Result.c)
 *     SymCryptSha384Result @ 0x140522FCC (SymCryptSha384Result.c)
 *     SymCryptSha512Result @ 0x14052465C (SymCryptSha512Result.c)
 *     SymCryptSha1Result @ 0x1405259C0 (SymCryptSha1Result.c)
 *     SymCryptMd5Result @ 0x1405263D0 (SymCryptMd5Result.c)
 */

__int64 __fastcall HashpFinalizeHash(_DWORD *a1, _OWORD *a2)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return SymCryptMd5Result((__int64)(a1 + 4), a2);
    case 0x8004:
      return SymCryptSha1Result(a1 + 4, a2);
    case 0x800C:
      return SymCryptSha256Result(a1 + 4, a2);
    case 0x800D:
      return SymCryptSha384Result((__int64)(a1 + 4), a2);
    case 0x800E:
      return SymCryptSha512Result(a1 + 4, a2);
  }
  return result;
}
