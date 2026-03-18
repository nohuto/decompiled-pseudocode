/*
 * XREFs of ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1400B54EC
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B4F78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CitpProgramIdCalculateHash(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r10
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int8 *v16; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9

  v1 = *a1;
  v2 = -1LL;
  v4 = 314159LL;
  if ( *a1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v1[2 * v5] );
    v6 = 2 * v5;
    if ( v6 >= 8 )
    {
      v7 = (unsigned __int64)v6 >> 3;
      v6 -= 8 * ((unsigned __int64)v6 >> 3);
      do
      {
        v8 = v1[6] + 37 * (v1[5] + 37 * (v1[4] + 37 * (v1[3] + 37 * (v1[2] + 37 * (v1[1] + 37 * (*v1 + 37 * v4))))));
        v9 = v1[7];
        v1 += 8;
        v4 = v9 + 37 * v8;
        --v7;
      }
      while ( v7 );
    }
    v10 = v6 - 1;
    if ( !v10 )
      goto LABEL_18;
    v11 = v10 - 1;
    if ( !v11 )
    {
LABEL_17:
      v4 = *v1++ + 37 * v4;
LABEL_18:
      v4 = *v1 + 37 * v4;
      goto LABEL_19;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_16:
      v4 = *v1++ + 37 * v4;
      goto LABEL_17;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_15:
      v4 = *v1++ + 37 * v4;
      goto LABEL_16;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_14:
      v4 = *v1++ + 37 * v4;
      goto LABEL_15;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_13:
      v4 = *v1++ + 37 * v4;
      goto LABEL_14;
    }
    if ( v15 == 1 )
    {
      v4 = *v1++ + 37 * v4;
      goto LABEL_13;
    }
  }
LABEL_19:
  v16 = a1[1];
  if ( v16 )
  {
    do
      ++v2;
    while ( *(_WORD *)&v16[2 * v2] );
    v18 = 2 * v2;
    if ( v18 >= 8 )
    {
      v19 = (unsigned __int64)v18 >> 3;
      v18 -= 8 * ((unsigned __int64)v18 >> 3);
      do
      {
        v20 = v16[6]
            + 37 * (v16[5] + 37 * (v16[4] + 37 * (v16[3] + 37 * (v16[2] + 37 * (v16[1] + 37 * (*v16 + 37 * v4))))));
        v21 = v16[7];
        v16 += 8;
        v4 = v21 + 37 * v20;
        --v19;
      }
      while ( v19 );
    }
    v22 = v18 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
                v4 = *v16++ + 37 * v4;
              }
              v4 = *v16++ + 37 * v4;
            }
            v4 = *v16++ + 37 * v4;
          }
          v4 = *v16++ + 37 * v4;
        }
        v4 = *v16++ + 37 * v4;
      }
      v4 = *v16++ + 37 * v4;
    }
    v4 = *v16 + 37 * v4;
  }
  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
}
