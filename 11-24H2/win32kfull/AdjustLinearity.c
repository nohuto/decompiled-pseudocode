/*
 * XREFs of AdjustLinearity @ 0x1401D7BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, INT *a2, INT *a3, int *a4)
{
  int v7; // r9d
  int v8; // r8d
  INT v9; // ebx
  INT v10; // r11d
  int v11; // eax
  int v12; // esi
  int v13; // r13d
  int v14; // r12d
  int v15; // edx
  int v16; // r9d
  int v17; // edi
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r10d
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  int v25; // edi
  int v26; // eax
  int v27; // ebp
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // di
  int v30; // r9d
  INT v31; // r10d
  int v32; // r9d
  INT v33; // r8d
  INT v34; // ebx
  INT v35; // eax
  unsigned __int16 v36; // [rsp+20h] [rbp-68h]
  unsigned __int16 v37; // [rsp+22h] [rbp-66h]
  unsigned __int16 v38; // [rsp+24h] [rbp-64h]
  INT v39; // [rsp+30h] [rbp-58h]
  unsigned __int16 v40; // [rsp+34h] [rbp-54h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]

  if ( a2 && a3 && a1 && *(_DWORD *)a1 <= 0x8000u && *(_DWORD *)(a1 + 4) <= 0x8000u )
  {
    if ( a4 )
    {
      v7 = *a4;
      v8 = a4[2];
      if ( v7 == v8 || a4[1] == a4[3] )
        return;
      v9 = EngMulDiv(*a2 - v7, *(_DWORD *)a1, v8 - v7);
      v39 = v9;
      v10 = EngMulDiv(*a3 - a4[1], *(_DWORD *)(a1 + 4), a4[3] - a4[1]);
    }
    else
    {
      v9 = *a2;
      v10 = *a3;
      v39 = *a2;
    }
    v11 = *(unsigned __int16 *)(a1 + 12);
    v12 = 0;
    v13 = *(unsigned __int16 *)(a1 + 10);
    v14 = *(unsigned __int16 *)(a1 + 8);
    v15 = v14 + v13 * v11;
    v16 = v14 + v11 * (v13 + 1);
    do
    {
      if ( v9 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 20) || v9 >= *(unsigned __int16 *)(a1 + 8LL * v16 + 20) )
        v17 = *(unsigned __int16 *)(a1 + 8LL * v15 + 28) <= v9
           && *(unsigned __int16 *)(a1 + 8LL * v16 + 28) <= v9
           && v14 + 2 < v11;
      else
        v17 = -(v14 != 0);
      if ( v10 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 22) || v10 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 30) )
        v18 = *(unsigned __int16 *)(a1 + 8LL * v16 + 22) <= v10
           && *(unsigned __int16 *)(a1 + 8LL * v16 + 30) <= v10
           && v13 + 2 < *(unsigned __int16 *)(a1 + 14);
      else
        v18 = -(v13 != 0);
      if ( !v17 && !v18 )
        break;
      v13 += v18;
      v14 += v17;
      ++v12;
      v15 = v14 + v13 * v11;
      v16 = v14 + v11 * (v13 + 1);
    }
    while ( v12 <= v11 + *(unsigned __int16 *)(a1 + 14) );
    v19 = v15;
    v20 = v16;
    v42 = v16;
    v41 = v15;
    v21 = *(unsigned __int16 *)(a1 + 8LL * v15 + 22);
    v22 = *(unsigned __int16 *)(a1 + 8LL * v16 + 22);
    if ( (_WORD)v22 != (_WORD)v21 )
    {
      v37 = *(_WORD *)(a1 + 8LL * v16 + 30);
      v36 = *(_WORD *)(a1 + 8 * v19 + 30);
      if ( v37 != v36 )
      {
        v23 = *(unsigned __int16 *)(a1 + 8 * v19 + 28);
        v24 = *(unsigned __int16 *)(a1 + 8 * v19 + 20);
        if ( (_WORD)v23 != (_WORD)v24 )
        {
          v25 = *(unsigned __int16 *)(a1 + 8 * v20 + 28);
          v26 = *(unsigned __int16 *)(a1 + 8 * v20 + 20);
          if ( (_WORD)v25 != (_WORD)v26 )
          {
            v27 = *(unsigned __int16 *)(a1 + 8 * v20 + 20);
            *(_WORD *)(a1 + 8) = v14;
            *(_WORD *)(a1 + 10) = v13;
            v40 = v24 + (v10 - v21) * (v26 - v24) / (v22 - v21);
            v38 = v23 + (v10 - v36) * (v25 - v23) / (v37 - v36);
            v28 = v21 + (v36 - v21) * (v39 - v24) / (v23 - v24);
            v29 = v22 + (v37 - v22) * (v39 - v27) / (v25 - v27);
            if ( v38 != v40 && v29 != v28 )
            {
              v30 = *(unsigned __int16 *)(a1 + 8 * v41 + 16);
              v31 = v30 + (v39 - v40) * (*(unsigned __int16 *)(a1 + 8 * v41 + 24) - v30) / (v38 - v40);
              v32 = *(unsigned __int16 *)(a1 + 8 * v41 + 18);
              v33 = *(_DWORD *)a1;
              v34 = v32 + (v10 - v28) * (*(unsigned __int16 *)(a1 + 8 * v42 + 18) - v32) / (v29 - v28);
              if ( v31 < 0 )
              {
                v31 = 0;
              }
              else if ( v33 <= v31 )
              {
                v31 = v33 - 1;
              }
              if ( v34 < 0 )
              {
                v34 = 0;
              }
              else
              {
                v35 = *(_DWORD *)(a1 + 4);
                if ( v35 <= v34 )
                  v34 = v35 - 1;
              }
              if ( v33 )
              {
                if ( *(_DWORD *)(a1 + 4) )
                {
                  *a2 = *a4 + EngMulDiv(v31, a4[2] - *a4, v33);
                  *a3 = a4[1] + EngMulDiv(v34, a4[3] - a4[1], *(_DWORD *)(a1 + 4));
                }
              }
            }
          }
        }
      }
    }
  }
}
