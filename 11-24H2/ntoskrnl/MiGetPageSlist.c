/*
 * XREFs of MiGetPageSlist @ 0x14033F3D8
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14033FA14 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x14033DDB0 (MiSlistGetFreePage.c)
 */

PSLIST_ENTRY __fastcall MiGetPageSlist(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 *v7; // rax
  int v8; // r8d
  _QWORD *v9; // r10
  unsigned __int64 v10; // rbp
  __int64 v11; // r11
  __int64 v12; // r13
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // edi
  __int64 *v16; // r14
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  unsigned int v19; // r15d
  unsigned __int64 v20; // r8
  PSLIST_ENTRY FreePage; // rax
  unsigned int v23; // ecx
  char v24; // al
  _QWORD *v25; // [rsp+20h] [rbp-78h]
  _QWORD v26[3]; // [rsp+28h] [rbp-70h] BYREF
  int v27; // [rsp+40h] [rbp-58h]
  unsigned int v28; // [rsp+44h] [rbp-54h]
  int v29; // [rsp+48h] [rbp-50h]
  int v30; // [rsp+4Ch] [rbp-4Ch]
  __int64 v31; // [rsp+50h] [rbp-48h]
  unsigned int v32; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v3 = 0LL;
  v5 = *(_QWORD *)(a1 + 14984);
  v26[1] = 0LL;
  v27 = 0;
  v30 = 0;
  if ( (*(_DWORD *)(v5 + 4) & 0x10) != 0 )
    return 0LL;
  v26[0] = a1;
  v7 = &MiZeroThenZero;
  v31 = 0LL;
  v8 = a3 & 0x10;
  v9 = 0LL;
  v25 = 0LL;
  if ( !v8 )
    v7 = &MiFreeThenFree;
  v10 = 0LL;
  v26[2] = v7;
  v11 = *(_QWORD *)(v5 + 16);
  v12 = 0LL;
  v29 = a3;
  v28 = a2;
  v13 = *(&MiState + (HIWORD(a2) & 3) + 1120);
  v32 = (unsigned __int8)a2;
  v14 = (unsigned __int8)a2;
  v33 = v13;
  v15 = a3 & 0x40;
  if ( v15 )
  {
    v23 = a2 & 0xF;
    do
    {
      v24 = v23;
      v23 += 16;
      v12 |= 1LL << (v24 & 0x3F);
    }
    while ( v23 < 0x40 && v23 < *(&MiState + (HIWORD(a2) & 3) + 1120) );
  }
  v16 = (__int64 *)(v11 + 57216LL * ((a2 >> 9) & 0x3F) + (-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 14872);
LABEL_6:
  while ( 2 )
  {
    v17 = *v16;
    do
    {
      v18 = (unsigned __int64)v14 >> 6;
      if ( v9 != (_QWORD *)(v17 + 8 * v18) )
      {
        v9 = (_QWORD *)(v17 + 8 * v18);
        v25 = v9;
        v10 = *v9 & ~((1LL << (v14 & 0x3F)) - 1);
        if ( v15 )
          v10 &= ~v12;
        if ( ((v14 ^ (unsigned __int64)v13) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v10 &= (1LL << (v13 & 0x3F)) - 1;
      }
      v19 = v14 & 0xFFFFFFC0;
      if ( v10 )
      {
        _BitScanForward64(&v20, v10);
        v14 = v20 + v19;
        a2 ^= (unsigned __int8)(a2 ^ (v14 % *(&MiState + (HIWORD(a2) & 3) + 1120)));
        _bittestandreset64((__int64 *)&v10, (unsigned int)v20);
        v28 = a2;
        FreePage = MiSlistGetFreePage((__int64)v26, 1);
        if ( FreePage )
          return FreePage;
        v9 = v25;
        goto LABEL_6;
      }
      v14 = v19 + 64;
    }
    while ( v14 < v13 );
    v9 = 0LL;
    v25 = 0LL;
    if ( v32 && v13 == v33 )
    {
      v13 = v32;
      v14 = 0;
      continue;
    }
    return (PSLIST_ENTRY)v3;
  }
}
