/*
 * XREFs of ?bSrcCopySRLE8D8@@YAHPEAUBLTINFO@@@Z @ 0x1401E2EF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  int v2; // r12d
  unsigned __int8 *v3; // rsi
  __int64 v4; // r13
  int v5; // r10d
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  int v8; // r15d
  int v9; // r8d
  int v10; // r9d
  int v11; // r11d
  int v12; // edi
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r12d
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  int v20; // r8d
  _BYTE *v21; // r9
  __int64 v22; // rax
  unsigned __int8 *v23; // rsi
  __int64 v24; // rax
  int v26; // ecx
  unsigned int v27; // ecx
  int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+24h] [rbp-64h]
  int v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h]
  unsigned int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 11);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 23);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v8 = *((_DWORD *)a1 + 15);
  v9 = *((_DWORD *)a1 + 22);
  v10 = *((_DWORD *)a1 + 24);
  v11 = *((_DWORD *)a1 + 14);
  v12 = *((_DWORD *)a1 + 32);
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v13 = *((_DWORD *)a1 + 25);
  v32 = v13;
  v30 = v2;
  v33 = v7;
  v34 = v9;
  v35 = v10;
  v28 = v5;
  v29 = v11;
  if ( v8 < v5 )
    return 1LL;
  while ( 1 )
  {
    v6 += 2;
    if ( v6 > v7 )
      return 0LL;
    v14 = *v3;
    v15 = v3[1];
    v3 += 2;
    if ( v14 )
    {
      if ( v8 < v13 && v12 < v10 )
      {
        if ( (int)(v14 + v12) > v9 )
        {
          v16 = *(_DWORD *)(v31 + 4LL * (unsigned int)v15);
          if ( v12 < v9 )
          {
            v14 += v12 - v9;
            v12 = v9;
          }
          if ( (int)(v14 + v12) > v10 )
          {
            v17 = v12 + v14 - v10;
            v14 = v10 - v12;
          }
          else
          {
            v17 = 0;
          }
          if ( v14 )
          {
            memset_0((void *)(v4 + v12), v16, v14);
            v9 = v34;
            v12 += v14;
            v10 = v35;
            v7 = v33;
            v5 = v28;
            v11 = v29;
          }
          v12 += v17;
          v2 = v30;
          goto LABEL_14;
        }
        v13 = v32;
      }
      v12 += v14;
    }
    else
    {
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == 1 )
          return 0LL;
        if ( (_DWORD)v15 == 2 )
        {
          v6 += 2;
          if ( v6 > v7 )
            return 0LL;
          v26 = v3[1];
          v12 += *v3;
          v3 += 2;
          v8 -= v26;
          v4 += v26 * v2;
          if ( v8 < v5 )
          {
            *((_DWORD *)a1 + 34) = v12;
            goto LABEL_34;
          }
          v7 = v33;
        }
        else
        {
          v18 = v15 + v6;
          if ( v18 > v7 )
            return 0LL;
          v19 = v15 & 1;
          if ( v8 >= v32 || v12 >= v10 || (int)v15 + v12 <= v9 )
          {
            v12 += v15;
            v23 = &v3[v15];
          }
          else
          {
            if ( v12 < v9 )
            {
              v27 = v9 - v12;
              v12 = v9;
              v3 += v27;
              LODWORD(v15) = v15 - v27;
            }
            if ( (int)v15 + v12 > v10 )
            {
              v20 = v12 + v15 - v10;
              LODWORD(v15) = v10 - v12;
            }
            else
            {
              v20 = 0;
            }
            if ( (_DWORD)v15 )
            {
              v21 = (_BYTE *)(v4 + v12);
              v12 += v15;
              do
              {
                v22 = *v3++;
                *v21++ = *(_BYTE *)(v31 + 4 * v22);
                LODWORD(v15) = v15 - 1;
              }
              while ( (_DWORD)v15 );
              v10 = v35;
              v11 = v29;
            }
            v7 = v33;
            v23 = &v3[v20];
            v12 += v20;
            v9 = v34;
          }
          v6 = v19 + v18;
          v24 = v19;
          v5 = v28;
          v3 = &v23[v24];
        }
      }
      else
      {
        --v8;
        v4 += v2;
        v12 = v11;
        if ( v8 < v5 )
        {
          *((_DWORD *)a1 + 34) = v11;
LABEL_34:
          *((_QWORD *)a1 + 14) = v4;
          *((_QWORD *)a1 + 13) = v3;
          *((_DWORD *)a1 + 31) = v6;
          *((_DWORD *)a1 + 33) = v8;
          return 1LL;
        }
      }
LABEL_14:
      v13 = v32;
    }
  }
}
