/*
 * XREFs of MiRemoveHugeRangeAnyColor @ 0x140672B48
 * Callers:
 *     MiGetBestHugeRangeFromNode @ 0x140671050 (MiGetBestHugeRangeFromNode.c)
 * Callees:
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiGetPerfectColorHeadHugeRange @ 0x140671548 (MiGetPerfectColorHeadHugeRange.c)
 */

__int64 *__fastcall MiRemoveHugeRangeAnyColor(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  char v5; // di
  __int64 *v6; // rax
  _BOOL8 v7; // rbp
  __int64 v8; // r10
  __int64 *result; // rax
  unsigned __int64 v10; // r11
  _QWORD *v11; // r13
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // r11d
  __int64 v18; // r12
  unsigned int v19; // r14d
  int v20; // edi
  unsigned int v21; // ecx
  char v22; // al
  __int64 v23; // r10
  unsigned __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 *PerfectColorHeadHugeRange; // rax
  _QWORD v29[3]; // [rsp+20h] [rbp-68h] BYREF
  int v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+3Ch] [rbp-4Ch]
  int v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+44h] [rbp-44h]
  __int64 v34; // [rsp+48h] [rbp-40h]
  __int64 v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h]
  unsigned int v37; // [rsp+A0h] [rbp+18h]

  v3 = 0LL;
  v4 = a2;
  v33 = 0;
  v5 = a3;
  v34 = 0LL;
  v6 = &MiZeroThenZero;
  if ( (a3 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v29[2] = v6;
  v7 = (a3 & 0x10) == 0;
  v8 = *(_QWORD *)(a1 + 16) + 57216LL * (((unsigned int)a2 >> 9) & 0x3F);
  result = *(__int64 **)(v8 + 8 * ((((unsigned int)a2 >> 8) & 1) + 2 * v7) + 15000);
  if ( result )
  {
    v29[0] = *(_QWORD *)(a1 + 16) + 57216LL * (((unsigned int)a2 >> 9) & 0x3F);
    v32 = a3;
    v31 = a2;
    v30 = 1;
    v29[1] = MiGetColorHeadHugeRangeBase(v8, a2, v7);
    v11 = 0LL;
    v13 = v12 + 16 * (v7 + 940);
    v14 = 0LL;
    v15 = *(&MiState + ((v10 >> 16) & 3) + 1120);
    v16 = v15;
    v17 = (unsigned __int8)v4;
    v18 = 0LL;
    v37 = (unsigned __int8)v4;
    v19 = (unsigned __int8)v4;
    v35 = v13;
    v36 = v15;
    v20 = v5 & 0x40;
    if ( v20 )
    {
      v21 = v4 & 0xF;
      do
      {
        v22 = v21;
        v21 += 16;
        v18 |= 1LL << (v22 & 0x3F);
      }
      while ( v21 < 0x40 && v21 < v15 );
LABEL_8:
      v13 = v35;
    }
    v23 = *(_QWORD *)(v13 + 8);
    while ( 1 )
    {
      v24 = (unsigned __int64)v19 >> 6;
      if ( v11 != (_QWORD *)(v23 + 8 * v24) )
      {
        v11 = (_QWORD *)(v23 + 8 * v24);
        v14 = *v11 & ~((1LL << (v19 & 0x3F)) - 1);
        if ( v20 )
          v14 &= ~v18;
        if ( ((v19 ^ (unsigned __int64)v16) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v14 &= (1LL << (v16 & 0x3F)) - 1;
      }
      v25 = v19 & 0xFFFFFFC0;
      if ( v14 )
        break;
      v19 = v25 + 64;
      if ( v19 >= v16 )
      {
        v11 = 0LL;
        if ( v17 && v16 == v36 )
        {
          v16 = v17;
          v19 = 0;
          goto LABEL_8;
        }
        return (__int64 *)v3;
      }
    }
    _BitScanForward64(&v26, v14);
    v19 = v26 + v25;
    v27 = v4 ^ (v19 % *(&MiState + (HIWORD(v4) & 3) + 1120));
    v4 ^= (unsigned __int8)(v4 ^ (v19 % *(&MiState + (HIWORD(v4) & 3) + 1120)));
    _bittestandreset64((__int64 *)&v14, (unsigned int)v26);
    v31 = v4;
    PerfectColorHeadHugeRange = MiGetPerfectColorHeadHugeRange((__int64)v29, v27);
    if ( !PerfectColorHeadHugeRange )
    {
      v17 = v37;
      goto LABEL_8;
    }
    return PerfectColorHeadHugeRange;
  }
  return result;
}
