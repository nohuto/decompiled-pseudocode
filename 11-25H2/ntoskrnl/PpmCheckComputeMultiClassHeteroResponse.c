/*
 * XREFs of PpmCheckComputeMultiClassHeteroResponse @ 0x140407D0C
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140408E70 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140407898 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140407B74 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140408264 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmEventTraceHeteroResponse @ 0x140409318 (PpmEventTraceHeteroResponse.c)
 *     PpmParkCalculateUnparkCount @ 0x140409510 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14040A458 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404CA4D0 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char PpmCheckComputeMultiClassHeteroResponse()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  __int64 v2; // rcx
  char v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned __int8 v6; // r13
  int v7; // edx
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r12d
  int *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rsi
  int v22; // r9d
  __int64 v23; // rax
  int v24; // edx
  int v25; // r13d
  int v26; // eax
  int v27; // r9d
  char v28; // r13
  unsigned __int8 v29; // al
  unsigned int v30; // ecx
  char v31; // r12
  bool v32; // zf
  char v33; // r14
  __int64 v34; // r10
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rdx
  unsigned __int8 *v39; // rcx
  int v40; // eax
  unsigned int v41; // edx
  char v42; // cl
  unsigned __int8 v43; // dl
  unsigned __int8 *v44; // rcx
  unsigned __int8 v45; // r8
  unsigned int i; // edx
  unsigned __int8 *v47; // rcx
  unsigned __int8 v48; // al
  int v50; // [rsp+58h] [rbp-B0h]
  unsigned int v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  int v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v58[64]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v59[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v60[64]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v0 = 0;
  v57 = 0LL;
  v54 = 0LL;
  v1 = &PpmCurrentProfile[0][61 * dword_140F0B70C + 5];
  v55 = 0LL;
  v2 = 0LL;
  v52 = (__int64)v1;
  v53 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = PpmParkNodes + 208LL * (unsigned int)v2;
      v56 = v4;
      if ( PpmHeteroHgsParkingEnabled || *(_BYTE *)(v4 + 121) )
        break;
LABEL_48:
      v2 = (unsigned int)(v2 + 1);
      v53 = v2;
      if ( (unsigned int)v2 >= PpmParkNumNodes )
      {
        v1 = (__int64 *)v52;
        goto LABEL_50;
      }
    }
    v51 = 0;
    v57 = 0LL;
    v5 = 0;
    WORD4(v57) = *(_WORD *)(v4 + 4);
    v6 = 0;
    *(_QWORD *)&v57 = *(_QWORD *)(v4 + 16);
    v7 = *(unsigned __int8 *)(v4 + 11);
    if ( (unsigned __int8)v7 > 1u )
    {
      v8 = (_BYTE *)(*(_QWORD *)(v4 + 200) + 104LL);
      v9 = (unsigned int)(v7 - 1);
      do
      {
        v6 += *v8;
        v5 += (unsigned __int8)v8[4];
        v8 += 104;
        --v9;
      }
      while ( v9 );
      v51 = v5;
    }
    if ( PpmHeteroHgsParkingEnabled )
    {
      v6 = *(_BYTE *)(v4 + 10);
      v5 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 200) + 108LL);
      v51 = v5;
    }
    PpmHeteroComputeCoreParkingUtilities(0LL, &v57, v59, v58, &v55, &v54);
    v10 = *(unsigned __int8 *)(v4 + 10);
    v11 = 0;
    v12 = 0LL;
    v50 = 0;
    if ( *(_BYTE *)(v4 + 10) )
    {
      v13 = *(unsigned __int8 *)(v4 + 10);
      v14 = (_QWORD *)(*(_QWORD *)(v4 + 72) + 8 * v10);
      do
      {
        v12 += *v14 * v55;
        v15 = v13;
        v10 = (unsigned int)(v10 - 1);
        --v13;
        v60[v10] = v12;
        v16 = *v14-- * v15;
        v11 += v16;
      }
      while ( (_DWORD)v10 );
      v50 = v11;
    }
    v17 = v54;
    if ( v5 )
    {
      v18 = v58;
      v19 = v5;
      do
      {
        v20 = *v18++;
        v17 -= v20;
        --v19;
      }
      while ( v19 );
    }
    LODWORD(v21) = v5;
    if ( v5 >= v6 )
    {
      do
      {
LABEL_26:
        v25 = v21;
        if ( !(_DWORD)v21 )
          goto LABEL_30;
        v21 = (unsigned int)(v21 - 1);
        v17 += v58[v21];
        v26 = PpmHeteroUtilityGreaterThanOrEqualThreshold(
                v11,
                v59[v21],
                v60[v21],
                *(unsigned __int8 *)(v21 + v52 + 179),
                0);
        v11 = v50;
      }
      while ( !v26 );
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v50, v17, 0, v27, 0) )
      {
LABEL_25:
        v11 = v50;
        goto LABEL_26;
      }
      LODWORD(v21) = v25;
LABEL_30:
      v24 = (unsigned int)v21 < v5;
    }
    else
    {
      while ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                              v11,
                              v59[(unsigned int)v21],
                              v60[(unsigned int)v21],
                              *(unsigned __int8 *)((unsigned int)v21 + v52 + 307),
                              0) )
      {
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v50, v17, 0, v22, 0) )
          break;
        v23 = (unsigned int)v21;
        LODWORD(v21) = v21 + 1;
        v17 -= v58[v23];
        if ( (unsigned int)v21 >= v6 )
          break;
        v11 = v50;
      }
      v5 = v51;
      v4 = v56;
      if ( (unsigned int)v21 <= v51 )
        goto LABEL_25;
      v24 = 2;
    }
    v28 = 0;
    if ( *(char *)(v4 + 124) == v24 )
    {
      v29 = *(_BYTE *)(v4 + 122) + 1;
      v30 = v29;
      *(_BYTE *)(v4 + 122) = v29;
    }
    else
    {
      *(_BYTE *)(v4 + 124) = v24;
      v30 = 1;
      *(_BYTE *)(v4 + 122) = 1;
      v28 = 1;
      v3 = 4;
    }
    v31 = 0;
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v24 == 2 )
    {
      if ( v30 < *(unsigned __int8 *)(v52 + 178) )
      {
LABEL_43:
        v32 = PpmHeteroHgsParkingEnabled == 0;
        *(_BYTE *)(v4 + 120) = *(_BYTE *)(v4 + 120) & 0xF9 | 4;
        if ( !v32 )
        {
          v3 |= 0x80u;
          *(_BYTE *)(*(_QWORD *)(v4 + 200) + 108LL) = *(_BYTE *)(*(_QWORD *)(v4 + 200) + 107LL);
          *(_BYTE *)(v4 + 184) = *(_BYTE *)(*(_QWORD *)(v4 + 200) + 107LL);
        }
        v33 = v3 | 1;
        PpmEventTraceMultiClassHeteroResponse(
          0,
          (unsigned __int64 *)&v57,
          (__int64)v59,
          (__int64)v58,
          v54,
          v5,
          v24,
          *(_BYTE *)(v4 + 116) - v21,
          v21,
          *(_QWORD *)(v4 + 96));
        if ( !PpmHeteroHgsParkingEnabled )
          PpmHeteroComputeMultiClassUnparkCount(v4, v52, (__int64)v59, (__int64)v58, v21, v31, v28);
        PpmEventTraceHeteroResponse(v4, (unsigned int)v59, (unsigned int)v60, v50, v21, v33);
        LODWORD(v2) = v53;
        goto LABEL_48;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v24 != 1 || v30 < *(unsigned __int8 *)(v52 + 177) )
        goto LABEL_43;
      v3 |= 0x40u;
    }
    v31 = 1;
    *(_BYTE *)(*(_QWORD *)(v4 + 200) + 107LL) = v21;
    goto LABEL_43;
  }
LABEL_50:
  PpmParkCalculateUnparkCount(v2);
  if ( PpmParkNumNodes )
  {
    v34 = (unsigned int)PpmParkNumNodes;
    v35 = PpmParkNodes + 117;
    do
    {
      if ( *(_BYTE *)(v35 + 4) )
      {
        v36 = *(unsigned __int8 *)(v35 - 106);
        v37 = 0;
        if ( v36 > 1 )
        {
          v38 = v36 - 1;
          v39 = (unsigned __int8 *)(*(_QWORD *)(v35 + 83) + 107LL);
          do
          {
            v40 = *v39;
            v39 += 104;
            v37 += v40;
            --v38;
          }
          while ( v38 );
        }
        v41 = *(unsigned __int8 *)(v35 - 1);
        v42 = *(_BYTE *)(v35 - 1);
        if ( v37 < v41 )
          v42 = v37;
        v43 = v41 - v42;
        v44 = *(unsigned __int8 **)(v35 + 83);
        v45 = v43;
        if ( v43 >= *v44 )
          v45 = *v44;
        v32 = PpmParkUnparkCores == 0;
        v44[3] = v45;
        if ( v32 || PpmParkGranularity == 1 && *(_BYTE *)v35 > *((_BYTE *)v1 + 142) )
        {
          for ( i = 0; i < *(unsigned __int8 *)(v35 - 106); ++i )
          {
            v47 = (unsigned __int8 *)(*(_QWORD *)(v35 + 83) + 104LL * i);
            v48 = v47[3];
            if ( v48 < *v47 )
            {
              v47[3] = v48 + 1;
              break;
            }
          }
        }
      }
      v35 += 208LL;
      --v34;
    }
    while ( v34 );
  }
  if ( PpmParkNumNodes )
  {
    do
    {
      PpmEventTraceMultiClassHeteroResponseUpdate(
        0LL,
        *(_QWORD *)(PpmParkNodes + 208LL * v0 + 200),
        *(_QWORD *)(PpmParkNodes + 208LL * v0 + 128));
      ++v0;
    }
    while ( v0 < PpmParkNumNodes );
  }
  return 1;
}
