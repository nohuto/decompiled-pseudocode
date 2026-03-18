/*
 * XREFs of PpmHeteroDistributeUtility @ 0x140408490
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     PpmParkDistributeUtility @ 0x1404088A0 (PpmParkDistributeUtility.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1404F75CC (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 v0; // rax
  bool v1; // r10
  __int64 v2; // rbx
  int v4; // edi
  unsigned int v5; // r8d
  __int64 v6; // r9
  _BYTE *v7; // rdx
  bool v8; // zf
  unsigned int v9; // ecx
  __int64 v10; // r8
  char v11; // r15
  __int64 v12; // r12
  unsigned __int16 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rdx
  char v16; // si
  int v17; // r8d
  unsigned int v18; // edi
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r15
  unsigned __int16 v22; // si
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int16 v26; // si
  unsigned __int16 v27; // si
  unsigned __int64 v28; // rdi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  __int64 Prcb; // rax
  __int64 v32; // rcx
  unsigned __int16 v33; // si
  int v34; // r8d
  unsigned int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-49h]
  __int64 *v45; // [rsp+48h] [rbp-21h]
  unsigned __int64 v46; // [rsp+50h] [rbp-19h]
  __int128 v47; // [rsp+60h] [rbp-9h] BYREF
  __int64 v48; // [rsp+70h] [rbp+7h]
  int v49; // [rsp+D0h] [rbp+67h] BYREF
  bool v50; // [rsp+D8h] [rbp+6Fh]
  unsigned int v51; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v52; // [rsp+E8h] [rbp+7Fh]

  v48 = 0LL;
  v47 = 0LL;
  v45 = PpmCurrentProfile[0];
  v46 = 61LL * dword_140F0B70C;
  v0 = 0LL;
  v1 = BYTE3(PpmCurrentProfile[0][v46 + 22]) != 0;
  v52 = 0;
  v50 = v1;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = PpmParkNodes + 208 * v0;
      if ( PpmHeteroPolicy == 4 )
        break;
      LOBYTE(v44) = v1;
      PpmParkDistributeUtility(
        *(_QWORD *)(v2 + 16),
        *(_QWORD *)(v2 + 24),
        *(unsigned __int16 *)(v2 + 4),
        *(_BYTE *)(v2 + 118),
        v44,
        0,
        0LL);
LABEL_4:
      v1 = v50;
      v0 = ++v52;
      if ( v52 >= PpmParkNumNodes )
        return 1;
    }
    v4 = *(unsigned __int8 *)(v2 + 11);
    v5 = 0;
    if ( !(_BYTE)v4 )
      goto LABEL_12;
    v6 = *(unsigned __int8 *)(v2 + 11);
    v7 = (_BYTE *)(*(_QWORD *)(v2 + 200) + 5LL);
    do
    {
      v8 = *v7 == 0;
      v9 = v5 + 1;
      v7 += 104;
      if ( v8 )
        v9 = v5;
      v5 = v9;
      --v6;
    }
    while ( v6 );
    if ( v9 <= 1 )
      goto LABEL_12;
    if ( PpmHeteroParkBias )
    {
      if ( PpmHeteroParkBias == 1 )
        goto LABEL_12;
      if ( PpmHeteroParkBias != 2 )
      {
        if ( PpmHeteroParkBias == 3 )
        {
          v17 = 0;
          v49 = 0;
          v18 = 0;
          while ( 1 )
          {
            v38 = *(_QWORD *)(v2 + 200) + 104LL * v18;
            LOBYTE(v44) = v1;
            PpmParkDistributeUtility(
              *(_QWORD *)(v38 + 16),
              *(_DWORD *)(v2 + 24) & *(_QWORD *)(v38 + 16),
              *(unsigned __int16 *)(v2 + 4),
              *(_BYTE *)(v38 + 96),
              v44,
              v17,
              (__int64)&v49);
            if ( ++v18 >= *(unsigned __int8 *)(v2 + 11) )
              break;
            v17 = v49;
            v1 = v50;
          }
          goto LABEL_13;
        }
LABEL_12:
        LOBYTE(v44) = v1;
        PpmParkDistributeUtility(
          *(_QWORD *)(v2 + 16),
          *(_QWORD *)(v2 + 24),
          *(unsigned __int16 *)(v2 + 4),
          *(_BYTE *)(v2 + 118),
          v44,
          0,
          0LL);
        goto LABEL_13;
      }
      v34 = 0;
      v49 = 0;
      while ( 1 )
      {
        v39 = *(_QWORD *)(v2 + 200) + 104LL * (unsigned int)--v4;
        LOBYTE(v44) = v1;
        PpmParkDistributeUtility(
          *(_QWORD *)(v39 + 16),
          *(_DWORD *)(v2 + 24) & *(_QWORD *)(v39 + 16),
          *(unsigned __int16 *)(v2 + 4),
          *(_BYTE *)(v39 + 96),
          v44,
          v34,
          (__int64)&v49);
        if ( !v4 )
          break;
        v34 = v49;
        v1 = v50;
      }
    }
    else
    {
      v35 = 0;
      do
      {
        v40 = *(_QWORD *)(v2 + 200) + 104LL * v35;
        LOBYTE(v44) = v1;
        PpmParkDistributeUtility(
          *(_QWORD *)(v40 + 16),
          *(_DWORD *)(v2 + 24) & *(_QWORD *)(v40 + 16),
          *(unsigned __int16 *)(v2 + 4),
          *(_BYTE *)(v40 + 96),
          v44,
          0,
          0LL);
        ++v35;
        v1 = v50;
      }
      while ( v35 < *(unsigned __int8 *)(v2 + 11) );
    }
LABEL_13:
    v11 = 0;
    v12 = ~*(_QWORD *)(v2 + 24);
    v13 = *(_WORD *)(v2 + 4);
    LOBYTE(v49) = 0;
    LOBYTE(v51) = 0;
    v14 = 1;
    if ( *(_BYTE *)(v2 + 11) > 1u )
    {
      do
      {
        v15 = *(_QWORD *)(104LL * v14 + *(_QWORD *)(v2 + 200) + 16);
        if ( (v15 & v12) != 0 )
        {
          v19 = v15 & *(_QWORD *)(v2 + 32);
          LOBYTE(v51) = 1;
          v20 = v12 & v19;
          LOBYTE(v49) = 0;
          *(_QWORD *)&v47 = 0LL;
          v21 = v20;
          v22 = v13;
LABEL_25:
          v15 = 1LL;
          v23 = v22 + 1;
          while ( 1 )
          {
            if ( v21 )
            {
              _BitScanForward64(&v24, v21);
              v21 &= ~(1LL << v24);
              v25 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * v22 + (unsigned __int8)v24)) + 35264);
              if ( v25 )
              {
                LOBYTE(v49) = BYTE4(v45[v46 + 59]);
                *(_BYTE *)(v25 + 239) = v49;
              }
              goto LABEL_25;
            }
            v26 = v22 + 1;
            LOWORD(v48) = v26;
            if ( v26 >= v23 )
              break;
            v21 = *(_QWORD *)(8LL * v26 + 8);
            v22 = v48;
          }
          v27 = v13;
          v28 = *(_QWORD *)(104LL * v14 + *(_QWORD *)(v2 + 200) + 16) ^ v20;
LABEL_32:
          v29 = v27 + 1;
          while ( 1 )
          {
            if ( v28 )
            {
              _BitScanForward64(&v30, v28);
              v28 &= ~(1LL << v30);
              Prcb = KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * v27 + (unsigned __int8)v30));
              v15 = 1LL;
              v32 = *(_QWORD *)(Prcb + 35264);
              if ( v32 )
                *(_BYTE *)(v32 + 239) = 0;
              goto LABEL_32;
            }
            v33 = v27 + 1;
            LOWORD(v48) = v33;
            if ( v33 >= v29 )
              break;
            v28 = *(_QWORD *)(8LL * v33 + 8);
            v27 = v48;
          }
          v11 = v49;
        }
        ++v14;
      }
      while ( v14 < *(unsigned __int8 *)(v2 + 11) );
      if ( (_BYTE)v51 )
      {
        v16 = 0;
        if ( !PpmPerfQosEnabled )
        {
          v36 = *(_QWORD *)(v2 + 200);
          v51 = 0;
          LOWORD(v48) = v13;
          *(_QWORD *)&v47 = 0LL;
          v37 = v12 & *(_QWORD *)(v36 + 16);
          *((_QWORD *)&v47 + 1) = v37;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v51, (unsigned __int16 **)&v47) )
          {
            do
            {
              v41 = *(_QWORD *)(KeGetPrcb(v51) + 35264);
              if ( v41 )
              {
                v16 = BYTE3(v45[v46 + 59]);
                *(_BYTE *)(v41 + 238) = v16;
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v51, (unsigned __int16 **)&v47) );
            v11 = v49;
          }
          v42 = *(_QWORD *)(v2 + 200);
          LOWORD(v48) = v13;
          *(_QWORD *)&v47 = 0LL;
          *((_QWORD *)&v47 + 1) = *(_QWORD *)(v42 + 16) ^ v37;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v51, (unsigned __int16 **)&v47) )
          {
            v43 = *(_QWORD *)(KeGetPrcb(v51) + 35264);
            if ( v43 )
              *(_BYTE *)(v43 + 238) = 0;
          }
        }
        LOBYTE(v10) = v11;
        LOBYTE(v15) = v16;
        PpmEventTraceHeteroDistributeUtility(v2, v15, v10);
      }
    }
    goto LABEL_4;
  }
  return 1;
}
