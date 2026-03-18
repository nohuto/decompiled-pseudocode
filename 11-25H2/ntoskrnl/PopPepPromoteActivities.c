/*
 * XREFs of PopPepPromoteActivities @ 0x1402BEEB0
 * Callers:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1402C0F08 (PopPepComponentSetLatency.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403A5D50 (PopPepIdleTimeoutRoutine.c)
 *     PopPepSurprisePowerOn @ 0x14048CA9C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D6820 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // rsi
  _DWORD **v6; // r13
  unsigned int v7; // r10d
  int v8; // r12d
  char v9; // r15
  char *v10; // r9
  int v11; // edx
  _DWORD **v12; // rbx
  int i; // ebx
  int *v14; // r9
  int v15; // edx
  __int64 v16; // r14
  __int64 *v17; // r9
  int v18; // edx
  _DWORD **v19; // rbx
  unsigned int v20; // ebx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 v25; // r13
  unsigned int *v26; // r12
  unsigned int v27; // r15d
  int v28; // edi
  char *v29; // rax
  int v30; // edx
  _DWORD **v31; // r10
  char *v32; // r9
  unsigned int v33; // r14d
  unsigned int v34; // edx
  char *v35; // r9
  int v36; // r8d
  __int64 j; // r10
  _DWORD **v38; // r9
  char *v39; // r8
  int k; // edx
  unsigned int *v41; // rcx
  _DWORD **v42; // r8
  __int64 v43; // r10
  char v44; // r14
  char *v45; // rbx
  int v46; // edx
  char *v47; // r9
  int v48; // edx
  _DWORD *v49; // r9
  __int64 v50; // rdi
  __int64 *v51; // rdx
  unsigned int v52; // esi
  unsigned int v53; // ebp
  unsigned int v54; // edi
  unsigned int v55; // [rsp+0h] [rbp-58h]
  __int64 *v56; // [rsp+8h] [rbp-50h]
  __int64 v57; // [rsp+10h] [rbp-48h]
  unsigned int v58; // [rsp+70h] [rbp+18h]

  if ( !a3 )
    return;
  if ( !a2 && a3 == 2 )
    a3 = 1;
  v5 = *(unsigned int **)(a1 + 72);
  v6 = (_DWORD **)(a1 + 72);
  v7 = *v5;
  v8 = 4;
  if ( (*v5 & 1) != 0 )
  {
    v9 = *((_BYTE *)v5 + 16);
    v10 = byte_140001B58;
    v11 = 0;
    v12 = (_DWORD **)(a1 + 72);
    if ( !v9 )
      v10 = byte_140001B40;
    while ( v11 <= 0 )
    {
      if ( *(_DWORD *)v10 && (*(_DWORD *)v10 & **v12) != 0 )
        goto LABEL_28;
      ++v11;
      ++v12;
      v10 += 4;
    }
    for ( i = *(_DWORD *)(a1 + 180); !i; i = 1 )
    {
      v14 = &dword_140001B5C;
      v15 = 1;
      if ( !v9 )
        v14 = &dword_140001B44;
      v16 = 1LL;
      while ( v15 <= 3 )
      {
        if ( *v14 && (*v14 & **(_DWORD **)(a1 + 8 * v16 + 248)) != 0 )
          goto LABEL_28;
        ++v15;
        ++v16;
        ++v14;
      }
    }
    v17 = &qword_140001B68;
    v18 = 4;
    if ( !v9 )
      v17 = &qword_140001B50;
    v19 = (_DWORD **)(a1 + 104);
    while ( v18 <= 5 )
    {
      if ( *(_DWORD *)v17 && (*(_DWORD *)v17 & **v19) != 0 )
        goto LABEL_28;
      ++v18;
      ++v19;
      v17 = (__int64 *)((char *)v17 + 4);
    }
    v5[2] = v5[1];
    *v5 = v7 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
LABEL_28:
  if ( a3 == 2 )
  {
    v20 = *(_DWORD *)(a2 + 8);
    v58 = v20;
    v55 = v20;
    goto LABEL_30;
  }
  v20 = 0;
  if ( a3 != 3 )
    v20 = *(_DWORD *)(a1 + 180);
  v58 = v20;
  v52 = *(_DWORD *)(a1 + 180) - 1;
  if ( a3 != 3 )
    v52 = 0;
  v55 = v52;
  if ( v20 <= v52 )
  {
    do
    {
LABEL_30:
      v21 = qword_140001B90;
      v22 = 3LL;
      v56 = qword_140001B90;
      v57 = 3LL;
      v23 = a1 + 208LL * v20 + 192;
      v24 = 136LL;
      v25 = 64LL;
      do
      {
        v26 = *(unsigned int **)(v23 + v25);
        v27 = *v26;
        if ( (*v26 & 1) != 0 )
        {
          v28 = *(_DWORD *)v21;
          if ( *(_DWORD *)v21 )
          {
            v29 = byte_140001B58;
            v30 = 0;
            v31 = (_DWORD **)(a1 + 72);
            if ( !*((_BYTE *)v26 + 16) )
              v29 = byte_140001B40;
            v32 = &v29[v24];
            while ( v30 <= 0 )
            {
              if ( *(_DWORD *)v32 && (*(_DWORD *)v32 & **v31) != 0 )
                goto LABEL_55;
              ++v30;
              ++v31;
              v32 += 4;
            }
            if ( v28 == 2 )
            {
              v33 = *(_DWORD *)(v23 + 8);
              v34 = v33;
            }
            else if ( v28 == 3 )
            {
              v34 = 0;
              v33 = *(_DWORD *)(a1 + 180) - 1;
            }
            else
            {
              v34 = *(_DWORD *)(a1 + 180);
              v33 = 0;
            }
            while ( v34 <= v33 )
            {
              v35 = &v29[v24];
              v36 = 1;
              for ( j = 1LL; ; ++j )
              {
                v35 += 4;
                if ( v36 > 3 )
                  break;
                if ( *(_DWORD *)v35 && (*(_DWORD *)v35 & **(_DWORD **)(a1 + 8 * (j + 26LL * v34) + 248)) != 0 )
                  goto LABEL_55;
                ++v36;
              }
              ++v34;
            }
            v38 = (_DWORD **)(a1 + 104);
            v39 = &v29[v24 + 16];
            for ( k = 4; k <= 5; ++k )
            {
              if ( *(_DWORD *)v39 && (*(_DWORD *)v39 & **v38) != 0 )
                goto LABEL_55;
              ++v38;
              v39 += 4;
            }
            v26[2] = v26[1];
            *v26 = v27 & 0xFFFFFFFC | 2;
            _InterlockedIncrement((volatile signed __int32 *)(v23 + 104));
LABEL_55:
            v22 = v57;
            v21 = v56;
          }
          else
          {
            v26[2] = v26[1];
            *v26 = v27 & 0xFFFFFFFC | 2;
            _InterlockedIncrement((volatile signed __int32 *)(v23 + 104));
          }
        }
        v21 += 17;
        v24 += 136LL;
        v56 = v21;
        v25 += 8LL;
        v57 = --v22;
      }
      while ( v22 );
      v20 = v58 + 1;
      v58 = v20;
    }
    while ( v20 <= v55 );
    v6 = (_DWORD **)(a1 + 72);
    v8 = 4;
  }
  v41 = *(unsigned int **)(a1 + 104);
  v42 = (_DWORD **)(a1 + 104);
  if ( (*v41 & 1) != 0 )
  {
    *v41 = *v41 & 0xFFFFFFFC | 2;
    v41[2] = v41[1];
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
  v43 = *(_QWORD *)(a1 + 112);
  if ( (*(_DWORD *)v43 & 1) != 0 )
  {
    v44 = *(_BYTE *)(v43 + 16);
    v45 = byte_140001E00;
    v46 = 0;
    if ( !v44 )
      v45 = byte_140001DE8;
    v47 = v45;
    while ( v46 <= 0 )
    {
      if ( *(_DWORD *)v47 && (*(_DWORD *)v47 & **v6) != 0 )
        return;
      ++v46;
      ++v6;
      v47 += 4;
    }
    v53 = 0;
    v54 = *(_DWORD *)(a1 + 180) - 1;
    while ( v53 <= v54 )
    {
      v48 = 1;
      v49 = v45 + 4;
      v50 = 1LL;
      while ( v48 <= 3 )
      {
        if ( *v49 && (*v49 & **(_DWORD **)(a1 + 8 * (v50 + 26LL * v53) + 248)) != 0 )
          return;
        ++v48;
        ++v50;
        ++v49;
      }
      v54 = *(_DWORD *)(a1 + 180) - 1;
      ++v53;
    }
    v51 = &qword_140001E10;
    if ( !v44 )
      v51 = &qword_140001DF8;
    while ( v8 <= 5 )
    {
      if ( *(_DWORD *)v51 && (*(_DWORD *)v51 & **v42) != 0 )
        return;
      ++v8;
      ++v42;
      v51 = (__int64 *)((char *)v51 + 4);
    }
    *(_DWORD *)v43 = *(_DWORD *)v43 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v43 + 8) = *(_DWORD *)(v43 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
}
