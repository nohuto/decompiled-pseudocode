/*
 * XREFs of PpmHeteroDistributeUtility @ 0x1404E3F40
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmParkDistributeUtility @ 0x140417110 (PpmParkDistributeUtility.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D7014 (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 */

char __fastcall PpmHeteroDistributeUtility(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // r9
  _WORD *v10; // rdx
  bool v11; // zf
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // r8d
  unsigned int v18; // edi
  __int64 v19; // r9
  unsigned int v20; // esi
  char v21; // r12
  __int16 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // si
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v38; // [rsp+40h] [rbp-29h]
  __int64 *v39; // [rsp+48h] [rbp-21h]
  unsigned __int64 v40; // [rsp+50h] [rbp-19h]
  __int64 v41; // [rsp+58h] [rbp-11h]
  __int128 v42; // [rsp+60h] [rbp-9h] BYREF
  __int64 v43; // [rsp+70h] [rbp+7h]
  char v44; // [rsp+D0h] [rbp+67h]
  unsigned int v45; // [rsp+D8h] [rbp+6Fh] BYREF
  __int16 v46; // [rsp+E0h] [rbp+77h]
  unsigned int v47; // [rsp+E8h] [rbp+7Fh] BYREF

  v42 = 0LL;
  v43 = 0LL;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
    return PpmHeteroDistributeUtilityEx();
  v39 = PpmCurrentProfile[0];
  v40 = 61LL * dword_140F0B38C;
  v4 = 0LL;
  v5 = BYTE3(PpmCurrentProfile[0][v40 + 22]) != 0;
  v38 = 0;
  v44 = v5;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v6 = PpmParkNodes + 1296 * v4;
      v41 = v6;
      if ( PpmHeteroPolicy == 4 )
        break;
      PpmParkDistributeUtility(
        *(_QWORD *)(v6 + 16),
        *(_QWORD *)(v6 + 24),
        *(_WORD *)(v6 + 4),
        *(_BYTE *)(v6 + 1180),
        v5,
        0,
        0LL);
LABEL_49:
      v5 = v44;
      v4 = ++v38;
      if ( v38 >= PpmParkNumNodes )
        return 1;
    }
    LODWORD(v7) = *(unsigned __int8 *)(v6 + 12);
    v8 = 0;
    if ( !(_BYTE)v7 )
      goto LABEL_24;
    v9 = *(unsigned __int8 *)(v6 + 12);
    v10 = (_WORD *)(*(_QWORD *)(v6 + 1288) + 10LL);
    do
    {
      v11 = *v10 == 0;
      v12 = v8 + 1;
      v10 += 320;
      if ( v11 )
        v12 = v8;
      v8 = v12;
      --v9;
    }
    while ( v9 );
    if ( v12 <= 1 )
      goto LABEL_24;
    if ( PpmHeteroParkBias )
    {
      if ( PpmHeteroParkBias == 1 )
        goto LABEL_24;
      if ( PpmHeteroParkBias != 2 )
      {
        if ( PpmHeteroParkBias == 3 )
        {
          v13 = 0;
          v45 = 0;
          v14 = 0;
          while ( 1 )
          {
            v15 = *(_QWORD *)(v6 + 1288) + 640LL * v14;
            PpmParkDistributeUtility(
              *(_QWORD *)(v15 + 24),
              *(_QWORD *)(v15 + 24) & *(_QWORD *)(v6 + 24),
              *(_WORD *)(v6 + 4),
              *(_BYTE *)(v15 + 632),
              v5,
              v13,
              &v45);
            if ( ++v14 >= *(unsigned __int8 *)(v6 + 12) )
              break;
            v13 = v45;
            v5 = v44;
          }
          goto LABEL_25;
        }
LABEL_24:
        PpmParkDistributeUtility(
          *(_QWORD *)(v6 + 16),
          *(_QWORD *)(v6 + 24),
          *(_WORD *)(v6 + 4),
          *(_BYTE *)(v6 + 1180),
          v5,
          0,
          0LL);
        goto LABEL_25;
      }
      v17 = 0;
      v45 = 0;
      while ( 1 )
      {
        v7 = (unsigned int)(v7 - 1);
        PpmParkDistributeUtility(
          *(_QWORD *)(*(_QWORD *)(v6 + 1288) + 640 * v7 + 24),
          *(_QWORD *)(*(_QWORD *)(v6 + 1288) + 640 * v7 + 24) & *(_QWORD *)(v6 + 24),
          *(_WORD *)(v6 + 4),
          *(_BYTE *)(*(_QWORD *)(v6 + 1288) + 640 * v7 + 632),
          v5,
          v17,
          &v45);
        if ( !(_DWORD)v7 )
          break;
        v17 = v45;
        v5 = v44;
      }
    }
    else
    {
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(v6 + 1288) + 640LL * v18;
        PpmParkDistributeUtility(
          *(_QWORD *)(v19 + 24),
          *(_QWORD *)(v19 + 24) & *(_QWORD *)(v6 + 24),
          *(_WORD *)(v6 + 4),
          *(_BYTE *)(v19 + 632),
          v5,
          0,
          0LL);
        ++v18;
        v5 = v44;
      }
      while ( v18 < *(unsigned __int8 *)(v6 + 12) );
    }
LABEL_25:
    v20 = 1;
    v21 = 0;
    v22 = *(_WORD *)(v6 + 4);
    v23 = ~*(_QWORD *)(v6 + 24);
    v46 = v22;
    LOBYTE(v45) = 0;
    if ( *(_BYTE *)(v6 + 12) > 1u )
    {
      do
      {
        v24 = v20;
        v25 = *(_QWORD *)(640LL * v20 + *(_QWORD *)(v6 + 1288) + 24);
        if ( (v25 & v23) != 0 )
        {
          v26 = *(_QWORD *)(v6 + 32);
          v47 = 0;
          *(_QWORD *)&v42 = 0LL;
          v27 = v23 & v25 & v26;
          LOBYTE(v45) = 1;
          *((_QWORD *)&v42 + 1) = v27;
          v21 = 0;
          LOWORD(v43) = v22;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) )
          {
            do
            {
              v28 = *(_QWORD *)(KeGetPrcb(v47) + 35264);
              if ( v28 )
              {
                v21 = BYTE4(v39[v40 + 59]);
                *(_BYTE *)(v28 + 239) = v21;
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) );
            v6 = v41;
            v24 = v20;
          }
          v29 = *(_QWORD *)(v6 + 1288);
          LOWORD(v43) = v22;
          *((_QWORD *)&v42 + 1) = *(_QWORD *)(640 * v24 + v29 + 24) ^ v27;
          *(_QWORD *)&v42 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) )
          {
            v30 = *(_QWORD *)(KeGetPrcb(v47) + 35264);
            if ( v30 )
              *(_BYTE *)(v30 + 239) = 0;
          }
        }
        ++v20;
      }
      while ( v20 < *(unsigned __int8 *)(v6 + 12) );
      if ( (_BYTE)v45 )
      {
        v31 = 0;
        if ( !PpmPerfQosEnabled )
        {
          v32 = *(_QWORD *)(v6 + 1288);
          v47 = 0;
          LOWORD(v43) = v22;
          *(_QWORD *)&v42 = 0LL;
          v33 = v23 & *(_QWORD *)(v32 + 24);
          *((_QWORD *)&v42 + 1) = v33;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) )
          {
            do
            {
              v34 = *(_QWORD *)(KeGetPrcb(v47) + 35264);
              if ( v34 )
              {
                v31 = BYTE3(v39[v40 + 59]);
                *(_BYTE *)(v34 + 238) = v31;
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) );
            v6 = v41;
            v22 = v46;
          }
          v35 = *(_QWORD *)(v6 + 1288);
          LOWORD(v43) = v22;
          *(_QWORD *)&v42 = 0LL;
          *((_QWORD *)&v42 + 1) = *(_QWORD *)(v35 + 24) ^ v33;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v47, (unsigned __int16 **)&v42) )
          {
            v36 = *(_QWORD *)(KeGetPrcb(v47) + 35264);
            if ( v36 )
              *(_BYTE *)(v36 + 238) = 0;
          }
        }
        LOBYTE(v16) = v21;
        LOBYTE(v25) = v31;
        PpmEventTraceHeteroDistributeUtility(v6, v25, v16);
      }
    }
    goto LABEL_49;
  }
  return 1;
}
