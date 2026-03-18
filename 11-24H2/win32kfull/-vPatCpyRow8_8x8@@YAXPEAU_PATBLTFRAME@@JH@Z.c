/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1403151CC
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x140319A60 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1401666F4 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v3; // r9
  int *v4; // r8
  int v5; // eax
  struct _PATBLTFRAME *v6; // r11
  int v7; // edx
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // edi
  int *v11; // r15
  __int64 v12; // r10
  int v13; // r12d
  int v14; // r14d
  int v15; // edx
  int v16; // r8d
  int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // r8d
  int v21; // esi
  unsigned int v22; // r10d
  unsigned int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // edi
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  unsigned __int64 v32; // rax
  int v33; // r14d
  int v34; // r14d
  int *v35; // rcx
  int v36; // r9d
  unsigned int v37; // [rsp+20h] [rbp-58h]
  _DWORD v38[2]; // [rsp+28h] [rbp-50h] BYREF
  int *v39; // [rsp+30h] [rbp-48h]
  int *v40; // [rsp+38h] [rbp-40h]
  unsigned __int64 v41; // [rsp+40h] [rbp-38h]
  _QWORD v42[2]; // [rsp+48h] [rbp-30h] BYREF
  int v43; // [rsp+58h] [rbp-20h]
  int v44; // [rsp+5Ch] [rbp-1Ch]
  int v45; // [rsp+60h] [rbp-18h]
  int v46; // [rsp+64h] [rbp-14h]
  __int64 v47; // [rsp+68h] [rbp-10h]
  char v49; // [rsp+C8h] [rbp+50h]
  char v51; // [rsp+D8h] [rbp+60h]

  v3 = (int *)*((_QWORD *)a1 + 1);
  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 4) * a2;
  v6 = a1;
  v42[0] = 0LL;
  v45 = 0;
  v47 = 0LL;
  v7 = (a2 - *((_DWORD *)a1 + 9)) & 7;
  v8 = *(_QWORD *)a1 + v5;
  v9 = *((_DWORD *)a1 + 8) & 3;
  v10 = *((_DWORD *)a1 + 8) & 7;
  v39 = v4;
  v40 = v3;
  v37 = v10;
  v49 = 8 * v9;
  v51 = 32 - 8 * v9;
  v11 = (int *)((char *)v3 + (unsigned int)(12 * v7));
  v41 = (unsigned __int64)(v3 + 24);
  do
  {
    v12 = *v4;
    v13 = 0;
    v14 = v4[1];
    v15 = *v4 & 3;
    v16 = v14 - v12;
    v17 = v14 & 3;
    if ( v16 - (-v15 & 3) - v17 >= 0 )
      v13 = (v16 - (-v15 & 3) - v17) >> 2;
    if ( v15 == 1 )
    {
      if ( v16 == 1 )
      {
        v15 = 4;
      }
      else
      {
        if ( v16 != 2 )
          goto LABEL_13;
        v15 = 5;
      }
      goto LABEL_12;
    }
    if ( v15 == 2 && v16 == 1 )
    {
      v15 = 6;
LABEL_12:
      v17 = 0;
    }
LABEL_13:
    v43 = 0;
    v42[1] = v38;
    v44 = 8;
    v18 = ((int)v12 >> 2) & 1;
    v46 = 2;
    v19 = v8 + (v12 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)v6 + 8) )
    {
      v22 = *v11;
      v23 = v11[1];
      if ( v10 >= 4 )
      {
        v20 = v11[1];
        if ( v10 == 4 )
        {
          v21 = *v11;
        }
        else
        {
          v20 = (v22 >> v51) | (v23 << v49);
          v21 = (v23 >> v51) | (v22 << v49);
        }
      }
      else
      {
        v20 = (v23 >> v51) | (v22 << v49);
        v21 = (v22 >> v51) | (v23 << v49);
      }
      if ( (_DWORD)v18 )
      {
        v24 = v20;
        v20 = v21;
        v21 = v24;
      }
    }
    else
    {
      v20 = v11[v18];
      v21 = v11[(((int)v12 >> 2) & 1) == 0];
    }
    v25 = v13;
    v26 = v20;
    if ( v15 )
    {
      v27 = v15 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( !v31 )
              {
                *(_BYTE *)(v19 + 1) = BYTE1(v20);
                goto LABEL_31;
              }
              if ( v31 == 1 )
LABEL_31:
                *(_BYTE *)(v19 + 2) = BYTE2(v20);
            }
            else
            {
              *(_BYTE *)(v19 + 1) = BYTE1(v20);
            }
          }
          else
          {
            *(_BYTE *)(v19 + 3) = HIBYTE(v20);
          }
LABEL_36:
          v26 = v21;
          v19 += 4LL;
          v21 = v20;
          goto LABEL_37;
        }
      }
      else
      {
        *(_BYTE *)(v19 + 1) = BYTE1(v20);
      }
      *(_WORD *)(v19 + 2) = HIWORD(v20);
      goto LABEL_36;
    }
LABEL_37:
    if ( v13 <= 7 )
    {
      if ( (unsigned int)v13 >= 2 )
      {
        v32 = (unsigned __int64)(unsigned int)v13 >> 1;
        do
        {
          *(_DWORD *)v19 = v26;
          v25 -= 2;
          *(_DWORD *)(v19 + 4) = v21;
          v19 += 8LL;
          --v32;
        }
        while ( v32 );
      }
      if ( v25 )
      {
        *(_DWORD *)v19 = v26;
        v19 += 4LL;
      }
    }
    else
    {
      v38[0] = v26;
      v38[1] = v21;
      v45 = v13;
      v42[0] = v19;
      vFetchAndCopy((__int64)v42);
      v6 = a1;
      v19 += 4LL * v13;
    }
    if ( v17 )
    {
      if ( (v13 & 1) != 0 )
        v26 = v21;
      v33 = v17 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 )
          {
            *(_WORD *)v19 = v26;
            *(_BYTE *)(v19 + 2) = BYTE2(v26);
          }
        }
        else
        {
          *(_WORD *)v19 = v26;
        }
      }
      else
      {
        *(_BYTE *)v19 = v26;
      }
    }
    v35 = v11 + 3;
    v4 = v39 + 2;
    v36 = a3 - 1;
    v11 = v40;
    v8 += *((int *)v6 + 4);
    v10 = v37;
    if ( (unsigned __int64)v35 < v41 )
      v11 = v35;
    v39 += 2;
    --a3;
  }
  while ( v36 );
}
