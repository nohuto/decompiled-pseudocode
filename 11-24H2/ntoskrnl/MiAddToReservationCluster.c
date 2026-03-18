/*
 * XREFs of MiAddToReservationCluster @ 0x14036A110
 * Callers:
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14036C05C (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v7; // rdx
  __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned int v13; // edi
  char v14; // al
  unsigned __int8 v15; // r15
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  int v18; // ebx
  __int64 v20; // rcx
  int *v21; // rdx
  int v22; // r8d
  int *v23; // r10
  bool i; // zf
  unsigned int v25; // eax
  bool v26; // al
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+70h] [rbp+8h]
  unsigned int v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v7 = *(_QWORD *)(a1 + 216);
  v27 = v7;
  v9 = v7 + 88 * ((*(_WORD *)(a1 + 172) & 0xF) + 48LL);
  v28 = v9;
  v10 = 0;
  while ( v10 != (_DWORD)a3 )
  {
    v11 = *(_QWORD *)(v9 + 16);
    if ( v11 == 0x3FFFFFFFFFLL )
      break;
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = 0;
    v14 = MiSafeLockPage(*(_QWORD *)(v9 + 16), v7, a3);
    a3 = v30;
    v15 = v14;
    if ( v14 != 17 )
    {
      if ( v11 != *(_QWORD *)(v9 + 16) )
      {
        MiUnlockPage(48 * v11 - 0x220000000000LL, v14);
        goto LABEL_42;
      }
      v16 = *(_QWORD *)(v12 + 16);
      if ( qword_140E2DB80 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140E2DB80;
      v17 = HIDWORD(v16);
      if ( (_DWORD)v17 != a4 )
      {
        v13 = v17 - a4;
        if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v27, v12 + 16)
          || (unsigned int)v17 < a4
          || v13 > 0x1F
          || v13 + v10 >= v30 )
        {
          goto LABEL_18;
        }
      }
      if ( _bittest64(*(const signed __int64 **)(a2 + 8), v17) )
        goto LABEL_18;
      if ( v13 )
      {
        if ( a4 >= *(_DWORD *)a2 )
          goto LABEL_18;
        if ( v13 <= 1 )
        {
          v26 = !_bittest((const signed __int32 *)(*(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)a4 >> 5)), a4 & 0x1F);
        }
        else
        {
          if ( *(_DWORD *)a2 - a4 < v13 )
            goto LABEL_18;
          v20 = *(_QWORD *)(a2 + 8);
          v21 = (int *)(v20 + 4 * ((unsigned __int64)a4 >> 5));
          v22 = *v21;
          v23 = (int *)(v20 + 4 * ((unsigned __int64)(v13 + a4 - 1) >> 5));
          if ( v21 != v23 )
          {
            for ( i = (v22 & (-1 << a4)) == 0; i; i = v22 == 0 )
            {
              v22 = *++v21;
              if ( v21 == v23 )
              {
                v25 = 0xFFFFFFFF >> ~(v13 + a4 - 1);
                goto LABEL_36;
              }
            }
LABEL_18:
            MiUnlockPage(48 * v11 - 0x220000000000LL, v15);
            return v10;
          }
          v25 = 0xFFFFFFFF >> (32 - v13) << a4;
LABEL_36:
          v26 = (v22 & v25) == 0;
        }
        if ( !v26 )
          goto LABEL_18;
      }
      v18 = MiReferencePageForModifiedWrite(48 * v11 - 0x220000000000LL);
      MiUnlockPage(48 * v11 - 0x220000000000LL, v15);
      if ( !v18 )
        return v10;
      if ( v13 )
      {
        v10 += v13;
        a4 += v13;
        *a6 += v13;
        do
        {
          *a5++ = qword_140E37378;
          --v13;
        }
        while ( v13 );
      }
      a3 = v30;
      ++v10;
      *a5 = v11;
      ++a4;
      ++a5;
      i = v18 == 3;
      v9 = v28;
      if ( i )
      {
        if ( v10 >= 0x10 )
          return v10;
LABEL_42:
        a3 = v30;
      }
    }
  }
  return v10;
}
