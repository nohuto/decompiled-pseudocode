/*
 * XREFs of AstInitializeBloomFilter @ 0x14070D964
 * Callers:
 *     AstInitialize @ 0x140C0CF98 (AstInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall AstInitializeBloomFilter(__int64 a1, __int64 a2, __int64 a3)
{
  dword_140F8BB50 = -849937013;
  AstIoctlBloomFilter = 0x8000;
  qword_140F8BB48 = a3;
}
