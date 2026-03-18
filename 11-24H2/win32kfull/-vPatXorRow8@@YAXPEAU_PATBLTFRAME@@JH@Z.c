/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1403159D0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x14019DADC (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x14031F598 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  unsigned int v4; // ebx
  int v5; // r15d
  int v6; // eax
  __int64 v8; // r14
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r12
  signed int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // esi
  unsigned int v19; // ecx
  __int128 v20; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-10h]
  unsigned int v23; // [rsp+98h] [rbp+48h]
  int v24; // [rsp+A0h] [rbp+50h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 11);
  v22 = 0LL;
  v5 = a3;
  v6 = *((_DWORD *)a1 + 4) * a2;
  v20 = 0LL;
  v21 = 0LL;
  v8 = *(_QWORD *)a1 + v6;
  v9 = a2 - *((_DWORD *)a1 + 9);
  if ( v9 >= 0 )
    v10 = v9 % v4;
  else
    v10 = v4 - ~v9 % v4 - 1;
  v11 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v10;
  *((_QWORD *)&v20 + 1) = v11;
  if ( a3 )
  {
    do
    {
      v12 = *((_DWORD *)a1 + 10);
      v13 = (*v3 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
      v14 = (v3[1] * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
      v24 = (*((_BYTE *)v3 + 4) * *((_BYTE *)a1 + 48)) & 3;
      v15 = ((*v3 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
      v16 = dword_1403534D8[(*(_BYTE *)v3 * *((_BYTE *)a1 + 48)) & 3];
      v17 = ~dword_1403534D8[(*((_BYTE *)v3 + 4) * *((_BYTE *)a1 + 48)) & 3];
      v23 = v17;
      if ( v15 >= 0 )
        v18 = v15 % v12;
      else
        v18 = v12 - ~v15 % v12 - 1;
      if ( (_DWORD)v13 == (_DWORD)v14 )
      {
        LODWORD(v21) = v18;
        *(_DWORD *)(v13 + v8) ^= v16 & v17 & *(_DWORD *)(v18 + v11);
      }
      else
      {
        if ( ((*(_BYTE *)v3 * *((_BYTE *)a1 + 48)) & 3) != 0 )
        {
          LODWORD(v21) = v18;
          *(_DWORD *)(v13 + v8) ^= v16 & *(_DWORD *)(v18 + v11);
          LODWORD(v13) = v13 + 4;
          v18 += 4;
        }
        DWORD2(v21) = (unsigned int)(v14 - v13) >> 2;
        if ( (unsigned int)(v14 - v13) >= 4 )
        {
          v19 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v20 = v8 + (unsigned int)v13;
          v18 %= v19;
          *(_QWORD *)&v21 = __PAIR64__(v19, v18);
          HIDWORD(v21) = v19;
          if ( (((unsigned __int8)v18 | (unsigned __int8)v19) & 3) != 0 )
          {
            vFetchShiftAndMerge(&v20);
          }
          else
          {
            HIDWORD(v21) = v19 >> 2;
            vFetchAndMerge((__int64)&v20);
          }
          v17 = v23;
          v11 = *((_QWORD *)&v20 + 1);
        }
        if ( v24 )
        {
          LODWORD(v21) = ((int)v18 + 4 * (unsigned __int64)DWORD2(v21)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v14 + v8) ^= v17 & *(_DWORD *)((unsigned int)v21 + v11);
        }
      }
      if ( ++v10 == *((_DWORD *)a1 + 11) )
      {
        v11 = *((_QWORD *)a1 + 1);
        v10 = 0;
      }
      else
      {
        v11 += *((int *)a1 + 5);
      }
      v8 += *((int *)a1 + 4);
      *((_QWORD *)&v20 + 1) = v11;
      v3 += 2;
      --v5;
    }
    while ( v5 );
  }
}
