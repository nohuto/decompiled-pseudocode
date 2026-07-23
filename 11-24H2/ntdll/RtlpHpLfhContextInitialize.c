/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x180107E48
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _OWORD *a5,
        __int16 a6)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  unsigned __int8 v18; // cl

  memset_thunk_772440563353939046((void *)a1, 0, 0x6C0uLL);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 65) = a4;
  v10 = a5[1];
  *(_OWORD *)(a1 + 8) = *a5;
  v11 = a5[2];
  *(_WORD *)(a1 + 66) = a6 - a1;
  *(_OWORD *)(a1 + 24) = v10;
  v12 = 0LL;
  *(_OWORD *)(a1 + 40) = v11;
  do
    *(_QWORD *)(a1 + 8 * v12++ + 8) ^= a1 ^ RtlpHpHeapGlobals;
  while ( v12 < 4 );
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v13;
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
    *(_QWORD *)(a1 + 48) = a1 ^ RtlpHpHeapGlobals ^ v14;
  v15 = qword_1801CCF00;
  do
  {
    v16 = ((((v15 ^ (v15 >> 12)) << 25) ^ v15 ^ (v15 >> 12)) >> 27) ^ ((v15 ^ (v15 >> 12)) << 25) ^ v15 ^ (v15 >> 12);
    v17 = v15;
    v15 = _InterlockedCompareExchange64(&qword_1801CCF00, v16, v15);
  }
  while ( v17 != v15 );
  *(_QWORD *)(a1 + 80) = 0x2545F4914F6CDD1DLL * v16;
  v18 = 64;
  if ( a3 <= 0x40 )
    v18 = a3;
  *(_BYTE *)(a1 + 64) = v18;
  if ( v18 > 1u )
    *(_QWORD *)(a1 + 56) = (char *)&unk_180184D90
                         + ((unsigned __int64)((62 - (64 - v18)) * (64 - (unsigned int)v18 + 61)) >> 1);
  memset64((void *)(a1 + 448), 1uLL, 0x80uLL);
  *(_WORD *)(a1 + 68) = 0;
  return RtlpInitializeLfhRandomDataArray();
}
