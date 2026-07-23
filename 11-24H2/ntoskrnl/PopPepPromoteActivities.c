/*
 * XREFs of PopPepPromoteActivities @ 0x1402C2120
 * Callers:
 *     PopPepComponentSetLatency @ 0x1402BF568 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1403A60EC (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x140447B60 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1405D87D4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D88D0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // r12d
  char v8; // r15
  char *v9; // r9
  int v10; // edx
  _DWORD **v11; // r10
  int i; // edx
  int *v13; // r10
  __int64 v14; // rsi
  int j; // r9d
  __int64 *v16; // r9
  int v17; // edx
  _DWORD **v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rbp
  unsigned int *v25; // r12
  unsigned int v26; // r15d
  int v27; // edi
  char *v28; // rax
  int v29; // edx
  _DWORD **v30; // r10
  char *v31; // r9
  unsigned int v32; // r14d
  unsigned int v33; // edx
  char *v34; // r9
  int v35; // r8d
  __int64 k; // r10
  _DWORD **v37; // r9
  _DWORD *v38; // r8
  int m; // edx
  unsigned int *v40; // rcx
  _DWORD **v41; // r8
  __int64 v42; // r10
  char v43; // r14
  char *v44; // rbx
  int v45; // edx
  char *v46; // r9
  int v47; // edx
  _DWORD *v48; // r9
  __int64 v49; // rdi
  __int64 *v50; // rdx
  unsigned int v51; // esi
  unsigned int n; // ebp
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 *v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  _DWORD **v57; // [rsp+20h] [rbp-48h]
  char *v58; // [rsp+28h] [rbp-40h]
  unsigned int v59; // [rsp+80h] [rbp+18h]
  unsigned int v60; // [rsp+88h] [rbp+20h]

  if ( !a3 )
    return;
  if ( !a2 && a3 == 2 )
    a3 = 1;
  v5 = *(unsigned int **)(a1 + 72);
  v6 = *v5;
  v57 = (_DWORD **)(a1 + 72);
  v7 = 4;
  if ( (*v5 & 1) != 0 )
  {
    v8 = *((_BYTE *)v5 + 16);
    v9 = byte_140001058;
    v10 = 0;
    if ( !v8 )
      v9 = byte_140001040;
    v11 = (_DWORD **)(a1 + 72);
    while ( v10 <= 0 )
    {
      if ( *(_DWORD *)v9 && (*(_DWORD *)v9 & **v11) != 0 )
        goto LABEL_29;
      ++v10;
      ++v11;
      v9 += 4;
    }
    for ( i = *(_DWORD *)(a1 + 180); !i; i = 1 )
    {
      v13 = &dword_14000105C;
      v14 = 1LL;
      if ( !v8 )
        v13 = &dword_140001044;
      for ( j = 1; j <= 3; ++j )
      {
        if ( *v13 && (*v13 & **(_DWORD **)(a1 + 8 * v14 + 248)) != 0 )
          goto LABEL_29;
        ++v14;
        ++v13;
      }
    }
    v16 = &qword_140001068;
    v17 = 4;
    if ( !v8 )
      v16 = &qword_140001050;
    v18 = (_DWORD **)(a1 + 104);
    while ( v17 <= 5 )
    {
      if ( *(_DWORD *)v16 && (*(_DWORD *)v16 & **v18) != 0 )
        goto LABEL_29;
      ++v17;
      ++v18;
      v16 = (__int64 *)((char *)v16 + 4);
    }
    v5[2] = v5[1];
    *v5 = v6 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
LABEL_29:
  if ( a3 == 2 )
  {
    v19 = *(_DWORD *)(a2 + 8);
    v59 = v19;
    v60 = v19;
    goto LABEL_31;
  }
  v19 = 0;
  if ( a3 != 3 )
    v19 = *(_DWORD *)(a1 + 180);
  v59 = v19;
  v51 = *(_DWORD *)(a1 + 180) - 1;
  if ( a3 != 3 )
    v51 = 0;
  v60 = v51;
  if ( v19 <= v51 )
  {
    do
    {
LABEL_31:
      v20 = 64LL;
      v21 = 136LL;
      v54 = 64LL;
      v53 = 136LL;
      v22 = qword_140001090;
      v23 = 3LL;
      v24 = a1 + 208LL * v19 + 192;
      v55 = qword_140001090;
      v56 = 3LL;
      do
      {
        v25 = *(unsigned int **)(v20 + v24);
        v26 = *v25;
        if ( (*v25 & 1) != 0 )
        {
          v27 = *(_DWORD *)v22;
          if ( *(_DWORD *)v22 )
          {
            v28 = byte_140001058;
            v29 = 0;
            if ( !*((_BYTE *)v25 + 16) )
              v28 = byte_140001040;
            v30 = (_DWORD **)(a1 + 72);
            v58 = &v28[v21];
            v31 = &v28[v21];
            while ( v29 <= 0 )
            {
              if ( *(_DWORD *)v31 && (*(_DWORD *)v31 & **v30) != 0 )
                goto LABEL_56;
              ++v29;
              ++v30;
              v31 += 4;
            }
            if ( v27 == 2 )
            {
              v32 = *(_DWORD *)(v24 + 8);
              v33 = v32;
            }
            else if ( v27 == 3 )
            {
              v33 = 0;
              v32 = *(_DWORD *)(a1 + 180) - 1;
            }
            else
            {
              v33 = *(_DWORD *)(a1 + 180);
              v32 = 0;
            }
            while ( v33 <= v32 )
            {
              v34 = v58;
              v35 = 1;
              for ( k = 1LL; ; ++k )
              {
                v34 += 4;
                if ( v35 > 3 )
                  break;
                if ( *(_DWORD *)v34 && (*(_DWORD *)v34 & **(_DWORD **)(a1 + 8 * (k + 26LL * v33) + 248)) != 0 )
                  goto LABEL_56;
                ++v35;
              }
              ++v33;
            }
            v37 = (_DWORD **)(a1 + 104);
            v38 = v58 + 16;
            for ( m = 4; m <= 5; ++m )
            {
              if ( *v38 && (*v38 & **v37) != 0 )
                goto LABEL_56;
              ++v37;
              ++v38;
            }
            v25[2] = v25[1];
            *v25 = v26 & 0xFFFFFFFC | 2;
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 104));
LABEL_56:
            v23 = v56;
            v21 = v53;
            v22 = v55;
            v20 = v54;
          }
          else
          {
            v25[2] = v25[1];
            *v25 = v26 & 0xFFFFFFFC | 2;
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 104));
          }
        }
        v21 += 136LL;
        v20 += 8LL;
        v53 = v21;
        v22 += 17;
        v54 = v20;
        --v23;
        v55 = v22;
        v56 = v23;
      }
      while ( v23 );
      v19 = v59 + 1;
      v59 = v19;
    }
    while ( v19 <= v60 );
    v7 = 4;
  }
  v40 = *(unsigned int **)(a1 + 104);
  v41 = (_DWORD **)(a1 + 104);
  if ( (*v40 & 1) != 0 )
  {
    *v40 = *v40 & 0xFFFFFFFC | 2;
    v40[2] = v40[1];
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
  v42 = *(_QWORD *)(a1 + 112);
  if ( (*(_DWORD *)v42 & 1) != 0 )
  {
    v43 = *(_BYTE *)(v42 + 16);
    v44 = byte_140001300;
    v45 = 0;
    if ( !v43 )
      v44 = byte_1400012E8;
    v46 = v44;
    while ( v45 <= 0 )
    {
      if ( *(_DWORD *)v46 && (*(_DWORD *)v46 & **v57) != 0 )
        return;
      ++v57;
      ++v45;
      v46 += 4;
    }
    for ( n = 0; n <= *(_DWORD *)(a1 + 180) - 1; ++n )
    {
      v47 = 1;
      v48 = v44 + 4;
      v49 = 1LL;
      while ( v47 <= 3 )
      {
        if ( *v48 && (*v48 & **(_DWORD **)(a1 + 8 * (v49 + 26LL * n) + 248)) != 0 )
          return;
        ++v47;
        ++v49;
        ++v48;
      }
    }
    v50 = &qword_140001310;
    if ( !v43 )
      v50 = &qword_1400012F8;
    while ( v7 <= 5 )
    {
      if ( *(_DWORD *)v50 && (*(_DWORD *)v50 & **v41) != 0 )
        return;
      ++v7;
      ++v41;
      v50 = (__int64 *)((char *)v50 + 4);
    }
    *(_DWORD *)v42 = *(_DWORD *)v42 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v42 + 8) = *(_DWORD *)(v42 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
}
