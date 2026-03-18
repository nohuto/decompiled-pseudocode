/*
 * XREFs of SetGrayColorTable @ 0x14013C44C
 * Callers:
 *     AAHalftoneBitmap @ 0x14013A0D8 (AAHalftoneBitmap.c)
 *     GetDstBFInfo @ 0x1402F3414 (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGrayColorTable(_OWORD *a1, __int64 a2)
{
  int v2; // r10d
  unsigned __int8 *v4; // r8
  int v5; // edx
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _OWORD *v15; // r8
  __int128 v16; // xmm1
  _OWORD *v17; // rax
  _OWORD *v18; // rdx
  __int128 v19; // xmm1
  int v20; // edx
  int v21; // ecx
  int v22; // eax

  v2 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int8 **)(a2 + 80);
    if ( a1 )
    {
      do
      {
        v5 = *((_DWORD *)a1 + v4[1] + 256) + *((_DWORD *)a1 + v4[2] + 512);
        v6 = *v4;
        v4 += 4;
        *(v4 - 1) = (unsigned __int16)(*((_WORD *)a1 + 2 * v6) + v5) >> 8;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        v20 = 19595 * v4[2];
        v21 = 38469 * v4[1];
        v22 = *v4;
        v4 += 4;
        *(v4 - 1) = (7471 * v22 + v21 + v20 + 0x7FFF) / 0xFFFFu;
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v7 = *(_OWORD **)(a2 + 8);
    if ( a1 != v7 )
    {
      v8 = 8LL;
      v9 = 8LL;
      v10 = &v7[64 * (unsigned __int64)*(unsigned __int8 *)(a2 + 68)];
      v11 = a1;
      do
      {
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
        v10[4] = v11[4];
        v10[5] = v11[5];
        v10[6] = v11[6];
        v10 += 8;
        v12 = v11[7];
        v11 += 8;
        *(v10 - 1) = v12;
        --v9;
      }
      while ( v9 );
      v13 = a1 + 64;
      v14 = 8LL;
      v15 = (_OWORD *)(*(_QWORD *)(a2 + 8) + ((unsigned __int64)*(unsigned __int8 *)(a2 + 67) << 10));
      do
      {
        *v15 = *v13;
        v15[1] = v13[1];
        v15[2] = v13[2];
        v15[3] = v13[3];
        v15[4] = v13[4];
        v15[5] = v13[5];
        v15[6] = v13[6];
        v15 += 8;
        v16 = v13[7];
        v13 += 8;
        *(v15 - 1) = v16;
        --v14;
      }
      while ( v14 );
      v17 = a1 + 128;
      v18 = (_OWORD *)(((unsigned __int64)*(unsigned __int8 *)(a2 + 66) << 10) + *(_QWORD *)(a2 + 8));
      do
      {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v18[3] = v17[3];
        v18[4] = v17[4];
        v18[5] = v17[5];
        v18[6] = v17[6];
        v18 += 8;
        v19 = v17[7];
        v17 += 8;
        *(v18 - 1) = v19;
        --v8;
      }
      while ( v8 );
    }
  }
}
