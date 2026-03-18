/*
 * XREFs of MiRemovePageAnyColor @ 0x1402F65A4
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402F75B8 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x1402F3B70 (MiSlistGetFreePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiColorHasSlists @ 0x1402F6D90 (MiColorHasSlists.c)
 */

__int64 __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v9; // r8
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r10
  __int64 v13; // r11
  _BOOL8 v14; // rcx
  __int64 *v15; // rax
  __int64 result; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  unsigned int v26; // r15d
  __int64 v27; // r12
  int v28; // edi
  __int64 v29; // r11
  unsigned __int64 v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 FreePage; // rax
  unsigned int v36; // ecx
  char v37; // al
  __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v40; // [rsp+38h] [rbp-30h]
  int v41; // [rsp+40h] [rbp-28h]
  unsigned int v42; // [rsp+44h] [rbp-24h]
  int v43; // [rsp+48h] [rbp-20h]
  int v44; // [rsp+4Ch] [rbp-1Ch]
  __int64 v45; // [rsp+50h] [rbp-18h]
  _QWORD *v46; // [rsp+B0h] [rbp+48h]
  unsigned int v47; // [rsp+B8h] [rbp+50h]
  unsigned int v48; // [rsp+C0h] [rbp+58h]
  int v49; // [rsp+C8h] [rbp+60h]

  v49 = a4;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = MiZeroThenZero;
  v6 = 0LL;
  v7 = a2;
  v44 = 0;
  v45 = 0LL;
  v9 = HIWORD(a2) & 3;
  v10 = a2;
  v11 = (a2 >> 15) & 1;
  if ( (a3 & 0x10) == 0 )
    v5 = &MiFreeThenFree;
  v40 = v5;
  v12 = 57216LL * ((a2 >> 9) & 0x3F) + v4;
  v13 = v12 + 1280 * v9;
  v14 = (a3 & 0x10) == 0;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v15 = (__int64 *)(v12 + 8 * (v14 + 2 * ((BYTE1(a2) & 1) + 947LL)));
  else
    v15 = (__int64 *)(v13 + 8 * (v14 + 1));
  result = *v15;
  if ( result )
  {
    v39[0] = v12;
    v41 = a4;
    v43 = a3;
    v42 = a2;
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v17 = (a2 >> 8) & 1;
    else
      v17 = 0LL;
    v18 = 0LL;
    v46 = 0LL;
    v19 = *(int *)v40;
    v20 = *(_QWORD *)(v12 + 8 * (((v7 >> 18) & 3) + 4 * (v17 + 2 * (v19 + 2 * (v11 + 10 * v9)))) + 992);
    v21 = 0LL;
    v39[1] = v20;
    v22 = 16 * (v19 + 2 * (((v10 >> 18) & 3) + 4 * v11 + 4));
    v23 = *(&MiState + ((v10 >> 16) & 3) + 1120);
    v24 = v13 + v22;
    v25 = v23;
    v38 = v24;
    v26 = (unsigned __int8)v7;
    v48 = v23;
    v27 = 0LL;
    v47 = (unsigned __int8)v7;
    v28 = a3 & 0x40;
    if ( v28 )
    {
      v36 = v7 & 0xF;
      do
      {
        v37 = v36;
        v36 += 16;
        v27 |= 1LL << (v37 & 0x3F);
      }
      while ( v36 < 0x40 && v36 < v23 );
LABEL_20:
      v24 = v38;
    }
    v29 = *(_QWORD *)(v24 + 8);
    do
    {
      v30 = (unsigned __int64)v26 >> 6;
      if ( v21 != (_QWORD *)(v29 + 8 * v30) )
      {
        v21 = (_QWORD *)(v29 + 8 * v30);
        v46 = v21;
        v18 = *v21 & ~((1LL << (v26 & 0x3F)) - 1);
        if ( v28 )
          v18 &= ~v27;
        if ( ((v26 ^ (unsigned __int64)v25) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
          v18 &= (1LL << (v25 & 0x3F)) - 1;
      }
      v31 = v26 & 0xFFFFFFC0;
      if ( v18 )
      {
        _BitScanForward64((unsigned __int64 *)&v32, v18);
        v26 = v32 + v31;
        v33 = HIWORD(v7) & 3;
        v34 = v7 ^ (v26 % *(&MiState + v33 + 1120));
        v7 ^= (unsigned __int8)(v7 ^ (v26 % *(&MiState + v33 + 1120)));
        v18 &= ~(1LL << v32);
        v42 = v7;
        if ( !v49 )
        {
          if ( (unsigned int)MiColorHasSlists(v7, v34, v32) )
          {
            FreePage = (__int64)MiSlistGetFreePage((__int64)v39, 0);
            if ( FreePage )
              return FreePage;
          }
        }
        FreePage = MiGetPerfectColorHeadPage(v39);
        if ( FreePage )
          return FreePage;
        v21 = v46;
        v49 = v41;
        goto LABEL_20;
      }
      v26 = v31 + 64;
    }
    while ( v26 < v25 );
    v21 = 0LL;
    v46 = 0LL;
    if ( v47 && v25 == v48 )
    {
      v25 = v47;
      v26 = 0;
      goto LABEL_20;
    }
    return v6;
  }
  return result;
}
