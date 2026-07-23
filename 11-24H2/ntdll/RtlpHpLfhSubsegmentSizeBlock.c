/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x1800B68F0
 * Callers:
 *     RtlpHpSegReportPageRange @ 0x18011B4C0 (RtlpHpSegReportPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  unsigned __int64 v7; // rsi
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 result; // rax
  unsigned __int16 v14; // dx
  int v15; // r8d

  v4 = *(_DWORD *)(a2 + 40);
  v7 = a2 >> 12;
  v9 = a3 - (((unsigned int)qword_1801CCEC8 ^ v4 ^ (unsigned int)(a2 >> 12)) >> 16) - a2;
  v10 = (v9 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
  if ( v9 != (_DWORD)v10 * (unsigned __int16)(qword_1801CCEC8 ^ v4 ^ (a2 >> 12)) )
    return -1LL;
  v11 = 1LL << (v10 & 0x1F);
  v12 = a2 + 8 * (v10 >> 5);
  if ( (*(_DWORD *)(v12 + 64) & (unsigned int)v11) == 0 )
    return -1LL;
  result = (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)(v7 ^ v4);
  if ( (HIDWORD(*(_QWORD *)(v12 + 64)) & v11) != 0 )
  {
    v14 = *(_WORD *)(result + a3 - 2);
    v15 = v14 & 0x3FF;
    if ( (v14 & 0x8000u) != 0 )
      v15 = 1;
    if ( a4 )
      *a4 = (v14 >> 14) & 1;
    return (unsigned int)(result - v15);
  }
  else if ( a4 )
  {
    *a4 = 0;
  }
  return result;
}
