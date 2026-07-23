/*
 * XREFs of SymCryptMd5Init @ 0x140526480
 * Callers:
 *     HashpInitHash @ 0x140830970 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMd5Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1400202E8;
  return result;
}
