/*
 * XREFs of ?vSolidXorRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x14019BD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_bottom; // rsi
  __int64 v7; // rbx
  char v8; // r15
  int v9; // r10d
  int v10; // r13d
  unsigned __int8 *v11; // r14
  int v12; // r11d
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r11
  int v19; // r11d
  int v20; // edi
  unsigned __int8 *v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r11d
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+40h] [rbp+10h]
  unsigned __int8 *v31; // [rsp+48h] [rbp+18h]

  if ( a2 )
  {
    v31 = a3;
    p_bottom = &a1->bottom;
    v7 = a4;
    v8 = 5 - a6;
    v9 = a2;
    while ( 1 )
    {
      v10 = *(p_bottom - 1);
      v11 = &a3[(int)v7 * *(p_bottom - 2)];
      v12 = v10 - *(p_bottom - 3);
      v13 = *p_bottom - *(p_bottom - 2);
      v14 = (unsigned int)(*(p_bottom - 3) >> v8);
      v15 = (unsigned int)(v10 >> v8);
      v16 = (*(p_bottom - 3) << a6) & 0x1F;
      v17 = *((_DWORD *)&aulMsk + v16);
      v18 = ((unsigned __int8)(*(p_bottom - 3) << a6) + (unsigned __int8)(v12 << a6)) & 0x1F;
      v30 = v18;
      v19 = ~*((_DWORD *)&aulMsk + v18);
      if ( (_DWORD)v14 == (_DWORD)v15 )
        break;
      v20 = 0;
      if ( (_DWORD)v16 )
        goto LABEL_15;
LABEL_5:
      if ( (_DWORD)v15 != (_DWORD)v14 )
      {
        v21 = &v11[4 * v14];
        if ( v13 )
        {
          v22 = v13;
          do
          {
            v23 = v15 - v14;
            do
            {
              *(_DWORD *)v21 ^= a5;
              v21 += 4;
              --v23;
            }
            while ( v23 );
            v21 += v7 - 4LL * (unsigned int)(v15 - v14);
            --v22;
          }
          while ( v22 );
        }
      }
      if ( v30 )
      {
        v27 = a5 & v19;
        v28 = &v11[4 * v15];
        if ( v13 )
        {
          v29 = v13;
          do
          {
            *(_DWORD *)v28 ^= v27;
            v28 += v7;
            --v29;
          }
          while ( v29 );
        }
      }
LABEL_12:
      a3 = v31;
      p_bottom += 4;
      if ( !--v9 )
        return;
    }
    v17 &= v19;
    v20 = 1;
LABEL_15:
    v24 = a5 & v17;
    v25 = &v11[4 * v14];
    if ( v13 )
    {
      v26 = v13;
      do
      {
        *(_DWORD *)v25 ^= v24;
        v25 += v7;
        --v26;
      }
      while ( v26 );
    }
    v14 = (unsigned int)(v14 + 1);
    if ( v20 )
      goto LABEL_12;
    goto LABEL_5;
  }
}
