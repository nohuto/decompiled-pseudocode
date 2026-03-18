/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1401C96B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vConvertAndSaveBGRATo1(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r14d
  _BYTE *v9; // r15
  int v10; // r9d
  unsigned __int64 v11; // r13
  char NearestIndexFromColorref; // al
  char v13; // si
  char v14; // si
  char v15; // si
  char v16; // si
  char v17; // si
  char v18; // si
  char v19; // al
  int v20; // r13d
  int v21; // esi
  unsigned __int8 v22; // r15
  char v23; // al
  int v24; // ecx
  char v25; // r13
  char v26; // r15
  char v27; // si
  _BYTE *v28; // [rsp+60h] [rbp+40h]
  unsigned int v29; // [rsp+70h] [rbp+50h]
  unsigned int v30; // [rsp+70h] [rbp+50h]
  unsigned int v31; // [rsp+70h] [rbp+50h]
  unsigned int v32; // [rsp+70h] [rbp+50h]
  unsigned int v33; // [rsp+70h] [rbp+50h]
  unsigned int v34; // [rsp+70h] [rbp+50h]
  unsigned int v35; // [rsp+70h] [rbp+50h]
  unsigned int v36; // [rsp+70h] [rbp+50h]
  unsigned int v37; // [rsp+70h] [rbp+50h]
  unsigned int v38; // [rsp+70h] [rbp+50h]

  v7 = a3;
  v9 = (_BYTE *)(a1 + ((__int64)a4 >> 3));
  v28 = v9;
  v10 = a4 & 7;
  if ( v10 )
  {
    v19 = *v9;
    v20 = 7 - v10;
    v21 = 7 - v10 + 1;
    if ( v21 >= a3 )
      v21 = a3;
    v7 = a3 - v21;
    if ( v21 )
    {
      v22 = *v9;
      do
      {
        v37 = *a2;
        LOBYTE(v37) = BYTE2(*a2);
        BYTE2(v37) = *a2;
        HIBYTE(v37) = 2;
        ++a2;
        v23 = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v37, *(_DWORD *)(a6 + 28) != 0) << v20;
        v24 = v22 & ~(1 << v20--);
        v22 = v24 | v23;
        --v21;
      }
      while ( v21 );
      v19 = v24 | v23;
      v9 = v28;
    }
    *v9++ = v19;
    v28 = v9;
  }
  if ( v7 >= 8 )
  {
    v11 = (unsigned __int64)(unsigned int)v7 >> 3;
    v7 -= 8 * ((unsigned int)v7 >> 3);
    do
    {
      v29 = *a2;
      LOBYTE(v29) = BYTE2(*a2);
      BYTE2(v29) = *a2;
      HIBYTE(v29) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v29, *(_DWORD *)(a6 + 28) != 0);
      v30 = a2[1];
      BYTE2(v30) = v30;
      LOBYTE(v30) = BYTE2(a2[1]);
      HIBYTE(v30) = 2;
      v13 = ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v30, *(_DWORD *)(a6 + 28) != 0) << 6) | (NearestIndexFromColorref << 7);
      v31 = a2[2];
      LOBYTE(v31) = BYTE2(v31);
      BYTE2(v31) = a2[2];
      HIBYTE(v31) = 2;
      v14 = (32 * ulGetNearestIndexFromColorref(a6, a7, v31, *(_DWORD *)(a6 + 28) != 0)) | v13;
      v32 = a2[3];
      LOBYTE(v32) = BYTE2(v32);
      BYTE2(v32) = a2[3];
      HIBYTE(v32) = 2;
      v15 = (16 * ulGetNearestIndexFromColorref(a6, a7, v32, *(_DWORD *)(a6 + 28) != 0)) | v14;
      v33 = a2[4];
      LOBYTE(v33) = BYTE2(v33);
      BYTE2(v33) = a2[4];
      HIBYTE(v33) = 2;
      v16 = (8 * ulGetNearestIndexFromColorref(a6, a7, v33, *(_DWORD *)(a6 + 28) != 0)) | v15;
      v34 = a2[5];
      LOBYTE(v34) = BYTE2(v34);
      BYTE2(v34) = a2[5];
      HIBYTE(v34) = 2;
      v17 = (4 * ulGetNearestIndexFromColorref(a6, a7, v34, *(_DWORD *)(a6 + 28) != 0)) | v16;
      v35 = a2[6];
      LOBYTE(v35) = BYTE2(v35);
      BYTE2(v35) = a2[6];
      HIBYTE(v35) = 2;
      v18 = (2 * ulGetNearestIndexFromColorref(a6, a7, v35, *(_DWORD *)(a6 + 28) != 0)) | v17;
      v36 = a2[7];
      LOBYTE(v36) = BYTE2(v36);
      BYTE2(v36) = a2[7];
      HIBYTE(v36) = 2;
      a2 += 8;
      *v9++ = v18 | ulGetNearestIndexFromColorref(a6, a7, v36, *(_DWORD *)(a6 + 28) != 0);
      --v11;
    }
    while ( v11 );
    v28 = v9;
  }
  if ( v7 )
  {
    v25 = *v9;
    v26 = 7;
    do
    {
      v38 = *a2;
      LOBYTE(v38) = BYTE2(*a2);
      BYTE2(v38) = *a2;
      HIBYTE(v38) = 2;
      v27 = v26;
      ++a2;
      --v26;
      v25 = v25 & ~(1 << v27) | ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v38, *(_DWORD *)(a6 + 28) != 0) << v27);
      --v7;
    }
    while ( v7 );
    *v28 = v25;
  }
}
