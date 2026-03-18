/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x14019D7C0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x14019DADC (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x14031F598 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v2; // r12d
  int v4; // r10d
  int v5; // r12d
  unsigned int v6; // r15d
  char v7; // cl
  unsigned int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  bool v12; // sf
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r13d
  unsigned int v16; // r15d
  int v17; // r11d
  int v18; // eax
  unsigned int v19; // r14d
  int v20; // r14d
  int v21; // esi
  int v22; // esi
  int v23; // eax
  int v24; // edi
  __int64 v25; // rcx
  int v26; // eax
  int v27; // ecx
  int v28; // edi
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  int v31; // r12d
  int v32; // r13d
  int v33; // r10d
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int128 v37; // [rsp+20h] [rbp-38h] BYREF
  __int128 v38; // [rsp+30h] [rbp-28h]
  __int64 v39; // [rsp+40h] [rbp-18h]
  unsigned int v40; // [rsp+A8h] [rbp+50h]
  unsigned int v41; // [rsp+B0h] [rbp+58h]
  int v42; // [rsp+B8h] [rbp+60h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v2 = *((_DWORD *)a1 + 12);
  v39 = 0LL;
  v4 = *v1 * v2;
  v5 = v1[2] * v2;
  v6 = *((_DWORD *)a1 + 10);
  v37 = 0LL;
  v7 = v4;
  v8 = v4 & 0xFFFFFFFC;
  v9 = v5 & 3;
  v10 = v5 & 0xFFFFFFFC;
  v11 = v7 & 3;
  v42 = v9;
  v40 = v10;
  v12 = (int)(v8 - *((_DWORD *)a1 + 8)) < 0;
  v13 = v8 - *((_DWORD *)a1 + 8);
  v38 = 0LL;
  v14 = dword_1403534D8[v11];
  v15 = ~dword_1403534D8[v9];
  v41 = v15;
  if ( v12 )
    v16 = v6 - ~v13 % v6 - 1;
  else
    v16 = v13 % v6;
  v17 = v1[1];
  v18 = v17 - *((_DWORD *)a1 + 9);
  v19 = *((_DWORD *)a1 + 11);
  if ( v18 < 0 )
    v20 = v19 - ~v18 % v19 - 1;
  else
    v20 = v18 % v19;
  if ( v8 == v10 )
  {
    v14 &= v15;
    v21 = 1;
  }
  else
  {
    v21 = 0;
    if ( !(_DWORD)v11 )
    {
LABEL_7:
      DWORD2(v38) = (v10 - v8) >> 2;
      if ( v10 - v8 >= 4 )
      {
        v22 = v1[1];
        DWORD1(v38) = *((_DWORD *)a1 + 10);
        v23 = *((_DWORD *)a1 + 4) * v22;
        v24 = v20;
        v16 %= DWORD1(v38);
        LODWORD(v38) = v16;
        HIDWORD(v38) = DWORD1(v38);
        v25 = v8 + (__int64)v23;
        v26 = *((_DWORD *)a1 + 5) * v20;
        *(_QWORD *)&v37 = *(_QWORD *)a1 + v25;
        *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1) + v26;
        v27 = v1[3];
        if ( (((unsigned __int8)v16 | BYTE4(v38)) & 3) != 0 )
        {
          if ( v22 < v27 )
          {
            do
            {
              vFetchShiftAndMerge(&v37);
              if ( ++v24 == *((_DWORD *)a1 + 11) )
              {
                v24 = 0;
                *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v37 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v22;
              *(_QWORD *)&v37 = *((int *)a1 + 4) + (_QWORD)v37;
              LODWORD(v38) = v16;
            }
            while ( v22 < v1[3] );
          }
        }
        else
        {
          HIDWORD(v38) = DWORD1(v38) >> 2;
          if ( v22 < v27 )
          {
            do
            {
              vFetchAndMerge(&v37);
              if ( ++v24 == *((_DWORD *)a1 + 11) )
              {
                v24 = 0;
                *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v37 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v22;
              *(_QWORD *)&v37 = *((int *)a1 + 4) + (_QWORD)v37;
            }
            while ( v22 < v1[3] );
          }
        }
      }
      if ( v42 )
      {
        v33 = v1[1];
        v34 = (_DWORD *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v33));
        v35 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v20;
        v36 = (v16 + 4 * DWORD2(v38)) % *((_DWORD *)a1 + 10);
        if ( v33 < v1[3] )
        {
          do
          {
            ++v20;
            *v34 ^= v15 & *(_DWORD *)(v36 + v35);
            if ( v20 == *((_DWORD *)a1 + 11) )
            {
              v35 = *((_QWORD *)a1 + 1);
              v20 = 0;
            }
            else
            {
              v35 += *((int *)a1 + 5);
            }
            ++v33;
            v34 = (_DWORD *)((char *)v34 + *((int *)a1 + 4));
          }
          while ( v33 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  LODWORD(v38) = v16;
  v28 = v20;
  v29 = (_DWORD *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v17));
  v30 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v20;
  if ( v17 < v1[3] )
  {
    do
    {
      v31 = v28 + 1;
      *v29 ^= v14 & *(_DWORD *)(v16 + v30);
      v32 = *((_DWORD *)a1 + 11);
      if ( v28 + 1 == v32 )
        v30 = *((_QWORD *)a1 + 1);
      else
        v30 += *((int *)a1 + 5);
      v28 = 0;
      v1 = (_DWORD *)*((_QWORD *)a1 + 3);
      v29 = (_DWORD *)((char *)v29 + *((int *)a1 + 4));
      ++v17;
      if ( v31 != v32 )
        v28 = v31;
    }
    while ( v17 < v1[3] );
    v10 = v40;
    v15 = v41;
  }
  if ( !v21 )
  {
    v8 += 4;
    v16 += 4;
    goto LABEL_7;
  }
}
