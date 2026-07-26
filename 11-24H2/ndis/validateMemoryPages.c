/*
 * XREFs of validateMemoryPages @ 0x1400A238C
 * Callers:
 *     verifySingleNb @ 0x1400A2498 (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400A2250 (datapathVerifierReportProblem.c)
 */

__int64 __fastcall validateMemoryPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 i; // rbx
  __int64 v9; // rdi

  v4 = *(_DWORD *)(a1 + 40);
  result = a2 + a3;
  if ( (unsigned int)result > v4 )
    a3 = v4 - a2;
  v6 = a2 + *(_QWORD *)(a1 + 24);
  v7 = ((((_WORD)a2 + *(_WORD *)(a1 + 24)) & 0xFFF) + 4095LL + (unsigned __int64)a3) >> 12;
  for ( i = 0LL; ; ++i )
  {
    v9 = v6;
    if ( i >= v7 )
      break;
    result = ExAccessByte(v6);
    v6 = v9 + 4096;
  }
  return result;
}
