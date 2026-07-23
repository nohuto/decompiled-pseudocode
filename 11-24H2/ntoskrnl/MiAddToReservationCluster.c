/*
 * XREFs of MiAddToReservationCluster @ 0x1402EBEB0
 * Callers:
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402EDDFC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int v17; // ebx
  __int64 v19; // rcx
  int *v20; // rdx
  int v21; // r8d
  int *v22; // r10
  bool i; // zf
  unsigned int v24; // eax
  bool v25; // al
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp+8h]
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v29 = a3;
  v26 = *(_QWORD *)(a1 + 216);
  v8 = v26 + 88 * ((*(_WORD *)(a1 + 172) & 0xF) + 48LL);
  v27 = v8;
  v9 = 0;
  while ( v9 != a3 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    if ( v10 == 0x3FFFFFFFFFLL )
      break;
    v11 = 48 * v10 - 0x220000000000LL;
    v12 = 0;
    v13 = MiSafeLockPage(*(_QWORD *)(v8 + 16));
    a3 = v29;
    v14 = v13;
    if ( v13 != 17 )
    {
      if ( v10 != *(_QWORD *)(v8 + 16) )
      {
        MiUnlockPage(48 * v10 - 0x220000000000LL, v13);
        goto LABEL_42;
      }
      v15 = *(_QWORD *)(v11 + 16);
      if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
        v15 &= ~qword_140E2DCC0;
      v16 = HIDWORD(v15);
      if ( (_DWORD)v16 != a4 )
      {
        v12 = v16 - a4;
        if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v26, v11 + 16)
          || (unsigned int)v16 < a4
          || v12 > 0x1F
          || v12 + v9 >= v29 )
        {
          goto LABEL_18;
        }
      }
      if ( _bittest64(*(const signed __int64 **)(a2 + 8), v16) )
        goto LABEL_18;
      if ( v12 )
      {
        if ( a4 >= *(_DWORD *)a2 )
          goto LABEL_18;
        if ( v12 <= 1 )
        {
          v25 = !_bittest((const signed __int32 *)(*(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)a4 >> 5)), a4 & 0x1F);
        }
        else
        {
          if ( *(_DWORD *)a2 - a4 < v12 )
            goto LABEL_18;
          v19 = *(_QWORD *)(a2 + 8);
          v20 = (int *)(v19 + 4 * ((unsigned __int64)a4 >> 5));
          v21 = *v20;
          v22 = (int *)(v19 + 4 * ((unsigned __int64)(v12 + a4 - 1) >> 5));
          if ( v20 != v22 )
          {
            for ( i = (v21 & (-1 << a4)) == 0; i; i = v21 == 0 )
            {
              v21 = *++v20;
              if ( v20 == v22 )
              {
                v24 = 0xFFFFFFFF >> ~(v12 + a4 - 1);
                goto LABEL_36;
              }
            }
LABEL_18:
            MiUnlockPage(48 * v10 - 0x220000000000LL, v14);
            return v9;
          }
          v24 = 0xFFFFFFFF >> (32 - v12) << a4;
LABEL_36:
          v25 = (v21 & v24) == 0;
        }
        if ( !v25 )
          goto LABEL_18;
      }
      v17 = MiReferencePageForModifiedWrite(48 * v10 - 0x220000000000LL);
      MiUnlockPage(48 * v10 - 0x220000000000LL, v14);
      if ( !v17 )
        return v9;
      if ( v12 )
      {
        v9 += v12;
        a4 += v12;
        *a6 += v12;
        do
        {
          *a5++ = qword_140E374B8;
          --v12;
        }
        while ( v12 );
      }
      a3 = v29;
      ++v9;
      *a5 = v10;
      ++a4;
      ++a5;
      i = v17 == 3;
      v8 = v27;
      if ( i )
      {
        if ( v9 >= 0x10 )
          return v9;
LABEL_42:
        a3 = v29;
      }
    }
  }
  return v9;
}
