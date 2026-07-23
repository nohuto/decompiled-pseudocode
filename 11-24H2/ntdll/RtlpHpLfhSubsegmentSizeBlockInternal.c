/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800D0A40
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D0870 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(unsigned __int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // dx
  int v8; // r8d

  result = (unsigned __int16)qword_1801CCEC8 ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned int)(unsigned __int16)(a1 >> 12);
  v6 = HIDWORD(*(_QWORD *)(a1 + 8 * ((unsigned __int64)a3 >> 5) + 64));
  if ( _bittest64(&v6, a3 & 0x1F) )
  {
    v7 = *(_WORD *)(result + a2 - 2);
    v8 = *(_WORD *)(result + a2 - 2) & 0x3FF;
    if ( (v7 & 0x8000u) != 0 )
      v8 = 1;
    if ( a4 )
      *a4 = (v7 >> 14) & 1;
    return (unsigned int)(result - v8);
  }
  else if ( a4 )
  {
    *a4 = 0;
  }
  return result;
}
