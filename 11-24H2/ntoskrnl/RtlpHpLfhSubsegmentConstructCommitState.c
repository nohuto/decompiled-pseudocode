/*
 * XREFs of RtlpHpLfhSubsegmentConstructCommitState @ 0x1403D97B4
 * Callers:
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1403D8038 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentConstructCommitState(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _WORD *a4)
{
  __int64 v5; // r8
  unsigned int v6; // edi
  int v7; // r14d
  int v8; // eax
  int v11; // r13d
  unsigned __int64 v12; // r15
  unsigned __int64 *v13; // rbp
  unsigned __int64 v14; // r8
  char v15; // cl
  unsigned __int64 v16; // rdx
  __int64 v17; // r11
  int v18; // r9d
  int v19; // eax
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // r11
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edx
  char v27; // cl
  __int64 v28; // r8
  int i; // edx
  unsigned __int16 v31; // [rsp+42h] [rbp+12h]

  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = qword_140E28348 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  *a4 = 1;
  v31 = HIWORD(v8);
  v11 = (unsigned __int16)v8;
  v12 = 0xFFFFFFFFFFFFFFFFuLL >> (-(char)(*(_BYTE *)(a2 + 37) + *(_BYTE *)(a2 + 34)) & 0x3F);
  v13 = &a3[(unsigned int)*(unsigned __int8 *)(a2 + 24) - 9];
  if ( a3 <= v13 )
  {
    do
    {
      v14 = *a3;
      if ( a3 == v13 )
        v14 &= v12;
      v6 += __popcnt(v14);
      while ( v14 )
      {
        v15 = *(_BYTE *)(a2 + 38);
        _BitScanForward64(&v16, v14);
        v14 ^= 1LL << v16;
        LODWORD(v16) = HIWORD(v8) + (unsigned __int16)v8 * (v7 + v16);
        v17 = (unsigned int)v16 >> 12 >> v15;
        v18 = (((unsigned int)v16 + (unsigned __int16)v8 - 1) >> 12 >> v15) - v17 + 1;
        if ( (((unsigned int)v16 + (unsigned __int16)v8 - 1) >> 12 >> v15) - (_DWORD)v17 != -1 )
        {
          do
          {
            ++a4[v17];
            v17 = (unsigned int)(v17 + 1);
            --v18;
          }
          while ( v18 );
        }
      }
      ++a3;
      v7 += 64;
    }
    while ( a3 <= v13 );
    v5 = a1;
  }
  v19 = *(unsigned __int8 *)(a2 + 37);
  if ( (_BYTE)v19 )
  {
    v6 -= v19;
    v21 = 4096;
    v22 = HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38);
    v23 = v5 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6);
    if ( v22 > 0x1000 )
    {
      do
      {
        v24 = v21 - v31;
        v25 = v11 * ((v24 * (unsigned __int64)*(unsigned int *)(v23 + 72)) >> 32);
        v26 = v24 - v25;
        if ( (_DWORD)v24 != v25 )
        {
          v27 = *(_BYTE *)(a2 + 38);
          v28 = (v21 - v26) >> 12 >> v27;
          for ( i = ((v21 - v26 + v11 - 1) >> 12 >> v27) - v28 + 1; i; --i )
          {
            --a4[v28];
            v28 = (unsigned int)(v28 + 1);
          }
        }
        v21 += 4096;
      }
      while ( v21 < v22 );
    }
  }
  return v6;
}
