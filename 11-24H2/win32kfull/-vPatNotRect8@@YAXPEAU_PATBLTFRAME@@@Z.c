/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1403154B0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x14022524C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x14031F61C (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r8
  int v2; // r12d
  int v4; // r10d
  int v5; // r12d
  unsigned int v6; // r14d
  char v7; // cl
  unsigned int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  bool v12; // sf
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r13d
  unsigned int v16; // r14d
  int v17; // edi
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // r15d
  int v21; // esi
  int v22; // r13d
  unsigned int *v23; // r11
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // esi
  int v27; // eax
  int v28; // edi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  int v32; // r11d
  unsigned int *v33; // r9
  __int64 v34; // r10
  __int64 v35; // r8
  int v36; // [rsp+20h] [rbp-38h]
  __int128 v37; // [rsp+28h] [rbp-30h] BYREF
  __int128 v38; // [rsp+38h] [rbp-20h]
  __int64 v39; // [rsp+48h] [rbp-10h]
  int v40; // [rsp+A0h] [rbp+48h]
  unsigned int v41; // [rsp+B8h] [rbp+60h]

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
  v36 = v9;
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
  if ( v18 >= 0 )
    v20 = v18 % v19;
  else
    v20 = v19 - ~v18 % v19 - 1;
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
LABEL_19:
      DWORD2(v38) = (v10 - v8) >> 2;
      if ( v10 - v8 >= 4 )
      {
        v26 = v1[1];
        DWORD1(v38) = *((_DWORD *)a1 + 10);
        v27 = *((_DWORD *)a1 + 4) * v26;
        v28 = v20;
        v16 %= DWORD1(v38);
        LODWORD(v38) = v16;
        HIDWORD(v38) = DWORD1(v38);
        v29 = v8 + (__int64)v27;
        v30 = *((_DWORD *)a1 + 5) * v20;
        *(_QWORD *)&v37 = *(_QWORD *)a1 + v29;
        *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1) + v30;
        v31 = v1[3];
        if ( (((unsigned __int8)v16 | BYTE4(v38)) & 3) != 0 )
        {
          if ( v26 < v31 )
          {
            do
            {
              vFetchShiftNotAndCopy(&v37);
              if ( ++v28 == *((_DWORD *)a1 + 11) )
              {
                v28 = 0;
                *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v37 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v26;
              *(_QWORD *)&v37 = *((int *)a1 + 4) + (_QWORD)v37;
              LODWORD(v38) = v16;
            }
            while ( v26 < v1[3] );
          }
        }
        else
        {
          HIDWORD(v38) = DWORD1(v38) >> 2;
          if ( v26 < v31 )
          {
            do
            {
              vFetchNotAndCopy((__int64)&v37);
              if ( ++v28 == *((_DWORD *)a1 + 11) )
              {
                v28 = 0;
                *((_QWORD *)&v37 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v37 + 1) += *((int *)a1 + 5);
              }
              v1 = (_DWORD *)*((_QWORD *)a1 + 3);
              ++v26;
              *(_QWORD *)&v37 = *((int *)a1 + 4) + (_QWORD)v37;
            }
            while ( v26 < v1[3] );
          }
        }
      }
      if ( v36 )
      {
        v32 = v1[1];
        v33 = (unsigned int *)(*(_QWORD *)a1 + v10 + (__int64)(*((_DWORD *)a1 + 4) * v32));
        v34 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v20;
        if ( v32 < v1[3] )
        {
          v35 = (v16 + 4 * DWORD2(v38)) % *((_DWORD *)a1 + 10);
          do
          {
            ++v20;
            *v33 = *v33 & ~v15 | v15 & ~*(_DWORD *)(v35 + v34);
            if ( v20 == *((_DWORD *)a1 + 11) )
            {
              v34 = *((_QWORD *)a1 + 1);
              v20 = 0;
            }
            else
            {
              v34 += *((int *)a1 + 5);
            }
            ++v32;
            v33 = (unsigned int *)((char *)v33 + *((int *)a1 + 4));
          }
          while ( v32 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  LODWORD(v38) = v16;
  v22 = v20;
  v23 = (unsigned int *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v17));
  v24 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v20;
  while ( v17 < v1[3] )
  {
    *v23 = *v23 & ~v14 | v14 & ~*(_DWORD *)(v16 + v24);
    v25 = v22 + 1;
    v40 = *((_DWORD *)a1 + 11);
    if ( v22 + 1 == v40 )
      v24 = *((_QWORD *)a1 + 1);
    else
      v24 += *((int *)a1 + 5);
    v22 = 0;
    v1 = (_DWORD *)*((_QWORD *)a1 + 3);
    v23 = (unsigned int *)((char *)v23 + *((int *)a1 + 4));
    ++v17;
    if ( v25 != v40 )
      v22 = v25;
  }
  if ( !v21 )
  {
    v15 = v41;
    v8 += 4;
    v16 += 4;
    goto LABEL_19;
  }
}
