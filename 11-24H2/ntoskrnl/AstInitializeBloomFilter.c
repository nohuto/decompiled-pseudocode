/*
 * XREFs of AstInitializeBloomFilter @ 0x1407175F4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __fastcall AstInitializeBloomFilter(__int64 a1, __int64 a2, __int64 a3)
{
  dword_140F8C510 = -849937013;
  AstIoctlBloomFilter = 0x8000;
  qword_140F8C508 = a3;
}
