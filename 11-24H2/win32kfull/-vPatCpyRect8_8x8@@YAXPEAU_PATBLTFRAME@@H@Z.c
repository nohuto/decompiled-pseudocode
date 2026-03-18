/*
 * XREFs of ?vPatCpyRect8_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1401662D0
 * Callers:
 *     ?vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1401662B0 (-vBrushPath8_8x8Enum@@YAXPEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1401666F4 (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRect8_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rsi
  int *v3; // rcx
  int *v4; // r14
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r12d
  int v9; // r10d
  int v10; // r13d
  int v11; // ebx
  int v12; // edx
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  BOOL v16; // edx
  int *v17; // r11
  _BYTE *v18; // r14
  int v19; // eax
  int v20; // r9d
  __int64 v21; // r10
  _BOOL8 v22; // rcx
  int v23; // r8d
  int v24; // ebx
  int v25; // r15d
  int v26; // eax
  int v27; // r8d
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  int v30; // esi
  int v31; // r12d
  _BYTE *v32; // rdi
  char v33; // r10
  int *v34; // rcx
  bool v35; // zf
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // r15d
  int v39; // eax
  int v40; // [rsp+20h] [rbp-79h]
  int v41; // [rsp+24h] [rbp-75h]
  int v42; // [rsp+28h] [rbp-71h]
  unsigned int v43; // [rsp+2Ch] [rbp-6Dh]
  int v44; // [rsp+30h] [rbp-69h]
  int v45; // [rsp+34h] [rbp-65h]
  int v46; // [rsp+38h] [rbp-61h]
  int v47; // [rsp+3Ch] [rbp-5Dh]
  _DWORD v48[2]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE *v49; // [rsp+48h] [rbp-51h]
  int *v50; // [rsp+50h] [rbp-49h]
  int *v51; // [rsp+58h] [rbp-41h]
  int *v52; // [rsp+60h] [rbp-39h]
  __int64 v53; // [rsp+68h] [rbp-31h]
  __int64 v54; // [rsp+70h] [rbp-29h]
  unsigned __int64 v55; // [rsp+78h] [rbp-21h]
  _BOOL8 v56; // [rsp+80h] [rbp-19h]
  _QWORD v57[2]; // [rsp+88h] [rbp-11h] BYREF
  int v58; // [rsp+98h] [rbp-1h]
  int v59; // [rsp+9Ch] [rbp+3h]
  int v60; // [rsp+A0h] [rbp+7h]
  int v61; // [rsp+A4h] [rbp+Bh]
  __int64 v62; // [rsp+A8h] [rbp+Fh]
  char v65; // [rsp+110h] [rbp+77h]
  char v66; // [rsp+118h] [rbp+7Fh]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v57[0] = 0LL;
  v60 = 0;
  v4 = (int *)*((_QWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 8) & 3;
  LODWORD(v6) = *((_DWORD *)v2 + 4);
  v43 = *((_DWORD *)v2 + 8) & 7;
  v62 = 0LL;
  v51 = v3;
  v52 = v4;
  v65 = 8 * v5;
  v66 = 32 - 8 * v5;
  v55 = (unsigned __int64)(v4 + 24);
  do
  {
    v7 = *v3;
    v8 = 0;
    v9 = v3[1];
    v10 = *v3 & 3;
    v11 = v3[2] & 3;
    v12 = v3[2] - v7;
    v13 = v3[3] - v9;
    v40 = v11;
    if ( v12 - (-v10 & 3) - v11 >= 0 )
      v8 = (v12 - (-v10 & 3) - v11) >> 2;
    v41 = v8;
    if ( v10 == 1 )
    {
      if ( v12 == 1 )
      {
        v10 = 4;
      }
      else
      {
        if ( v12 != 2 )
          goto LABEL_6;
        v10 = 5;
      }
      goto LABEL_51;
    }
    if ( v10 == 2 && v12 == 1 )
    {
      v10 = 6;
LABEL_51:
      v40 = 0;
    }
LABEL_6:
    v58 = 0;
    v14 = (v9 - *((_DWORD *)v2 + 9)) & 7;
    v15 = ((int)v7 >> 2) & 1;
    v59 = 8;
    v61 = 2;
    v16 = (((int)v7 >> 2) & 1) == 0;
    v17 = (int *)((char *)v4 + (unsigned int)(12 * v14));
    v50 = v17;
    v44 = 8 * v6;
    v57[1] = v48;
    v18 = (_BYTE *)(*(_QWORD *)v2 + (v7 & 0xFFFFFFFFFFFFFFFCuLL) + v9 * (int)v6);
    v19 = v13 & 7;
    v49 = v18;
    v20 = (v13 >> 3) + 1;
    v42 = v19;
    if ( v13 > 8 )
    {
      v13 = 8;
LABEL_8:
      v21 = v15;
      v22 = v16;
      v56 = v16;
      v54 = v21;
      while ( 1 )
      {
        --v13;
        v23 = v19;
        v46 = v13;
        if ( *((_DWORD *)v2 + 8) )
        {
          v37 = *v17;
          v38 = v17[1];
          if ( v43 >= 4 )
          {
            v24 = v17[1];
            if ( v43 == 4 )
            {
              v25 = *v17;
            }
            else
            {
              v24 = (v37 >> v66) | (v38 << v65);
              v25 = (v38 >> v66) | (v37 << v65);
            }
          }
          else
          {
            v24 = (v38 >> v66) | (v37 << v65);
            v25 = (v37 >> v66) | (v38 << v65);
          }
          if ( v21 )
          {
            v39 = v24;
            v24 = v25;
            v25 = v39;
          }
        }
        else
        {
          v24 = v17[v21];
          v25 = v17[v22];
        }
        --v42;
        v26 = v20 - 1;
        if ( v23 )
          v26 = v20;
        v47 = v26;
        v20 = v26;
        v27 = v26;
        if ( v26 )
          break;
LABEL_32:
        v34 = v17 + 3;
        v6 = *((int *)v2 + 4);
        v17 = v52;
        v18 = &v49[v6];
        v19 = v42;
        if ( (unsigned __int64)v34 < v55 )
          v17 = v34;
        v49 += v6;
        v22 = v56;
        v50 = v17;
        if ( !v13 )
          goto LABEL_35;
      }
      v28 = v44;
      v53 = v44;
      while ( 1 )
      {
        --v27;
        v29 = v8;
        v45 = v27;
        v30 = v24;
        v31 = v25;
        v32 = v18;
        if ( v10 )
          break;
LABEL_21:
        v33 = v41;
        if ( v41 > 7 )
        {
          v48[0] = v30;
          v48[1] = v31;
          v60 = v41;
          v57[0] = v32;
          vFetchAndCopy(v57, v29);
          v33 = v41;
          v27 = v45;
          v28 = v53;
          v32 += 4 * v41;
        }
        else
        {
          if ( (unsigned int)v29 >= 2 )
          {
            v36 = v29 >> 1;
            do
            {
              *(_DWORD *)v32 = v30;
              LODWORD(v29) = v29 - 2;
              *((_DWORD *)v32 + 1) = v31;
              v32 += 8;
              --v36;
            }
            while ( v36 );
          }
          if ( (_DWORD)v29 )
          {
            *(_DWORD *)v32 = v30;
            v32 += 4;
          }
        }
        if ( v40 )
        {
          if ( (v33 & 1) != 0 )
            v30 = v31;
          if ( v40 == 1 )
          {
            *v32 = v30;
          }
          else
          {
            *(_WORD *)v32 = v30;
            if ( v40 != 2 )
              v32[2] = BYTE2(v30);
          }
        }
        v8 = v41;
        v18 += v28;
        if ( !v27 )
        {
          v17 = v50;
          v13 = v46;
          v2 = a1;
          v20 = v47;
          v21 = v54;
          goto LABEL_32;
        }
      }
      if ( v10 == 1 )
      {
        v18[1] = BYTE1(v24);
      }
      else if ( v10 != 2 )
      {
        if ( v10 == 3 )
        {
          v18[3] = HIBYTE(v24);
        }
        else if ( v10 == 4 )
        {
          v18[1] = BYTE1(v24);
        }
        else
        {
          if ( v10 == 5 )
            v18[1] = BYTE1(v24);
          v18[2] = BYTE2(v24);
        }
        goto LABEL_20;
      }
      *((_WORD *)v18 + 1) = HIWORD(v24);
LABEL_20:
      v32 = v18 + 4;
      v30 = v25;
      v31 = v24;
      goto LABEL_21;
    }
    if ( v13 )
      goto LABEL_8;
LABEL_35:
    v4 = v52;
    v3 = v51 + 4;
    v35 = a2-- == 1;
    v51 += 4;
  }
  while ( !v35 );
}
