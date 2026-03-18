/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x140588B38
 * Callers:
 *     HvlAcknowledgePageRequest @ 0x140585D60 (HvlAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140588B90 (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvcallFastExtended(v5, a2, 32 * a1, 0LL, 0);
  *a3 = WORD2(result) & 0xFFF;
  return result;
}
