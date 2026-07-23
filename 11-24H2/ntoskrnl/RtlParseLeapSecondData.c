/*
 * XREFs of RtlParseLeapSecondData @ 0x14082BA74
 * Callers:
 *     ExpParseAndUpdateLeapSecondData @ 0x1407B6800 (ExpParseAndUpdateLeapSecondData.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14041A618 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlLongLongAdd @ 0x1405D1038 (RtlLongLongAdd.c)
 */

__int64 __fastcall RtlParseLeapSecondData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  signed __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v9; // eax
  __int64 v11; // r13
  int v12; // r11d
  unsigned __int64 v13; // rax
  signed __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int16 v16[4]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+58h]

  v4 = 0;
  v15 = 0LL;
  v6 = 0LL;
  *(_DWORD *)(a4 + 4) = 0;
  v7 = 0;
  v19 = 0;
  v9 = a2;
  while ( v7 < v9 )
  {
    v17 = 3866683LL;
    v11 = 3LL * v7;
    v16[0] = *(_WORD *)(a1 + 12LL * v7);
    v16[1] = *(_WORD *)(a1 + 12LL * v7 + 2);
    v16[2] = *(_WORD *)(a1 + 12LL * v7 + 4);
    v16[3] = *(_WORD *)(a1 + 12LL * v7 + 6);
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v16, &v15) )
      return 4;
    if ( v15 <= v6 )
      return 5;
    v6 = v15;
    if ( (int)RtlLongLongAdd(v15, 10000000LL * v19, (unsigned __int64 *)&v15) < 0 )
      return 7;
    v13 = v15;
    if ( (*(_BYTE *)(a1 + 12LL * v7 + 8) & 1) != 0 )
    {
      v13 = v15 | 0x8000000000000000uLL;
      v15 |= 0x8000000000000000uLL;
    }
    if ( a3 && v7 < *(_DWORD *)(a3 + 4) && v13 != *(_QWORD *)(a3 + 8LL * v7 + 8) )
      return 6;
    *(_QWORD *)(a4 + 8LL * v7++ + 8) = v13;
    ++*(_DWORD *)(a4 + 4);
    v9 = a2;
    v19 = v12 + 2 * ((*(_WORD *)(a1 + 4 * v11 + 8) & 1) == 0) - 1;
  }
  return v4;
}
