/*
 * XREFs of PpmCheckComputeMultiClassHeteroResponse @ 0x140416940
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140416434 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140416EEC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmEventTraceHeteroResponse @ 0x1404176DC (PpmEventTraceHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x1404178DC (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140417E9C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v8; // rcx
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
  unsigned __int16 *v35; // r8
  unsigned int v36; // eax
  unsigned int v37; // r9d
  __int64 v38; // rdx
  unsigned __int16 *v39; // rcx
  int v40; // eax
  char v41; // dl
  unsigned __int16 *v42; // rcx
  unsigned __int16 v43; // dx
  unsigned int i; // edx
  unsigned __int16 *v45; // rcx
  unsigned __int16 v46; // ax
  int v48; // [rsp+58h] [rbp-B0h]
  unsigned int v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  int v51; // [rsp+70h] [rbp-98h]
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v56[64]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v57[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v58[64]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v0 = 0;
  v55 = 0LL;
  v52 = 0LL;
  v1 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
  v53 = 0LL;
  v2 = 0LL;
  v50 = (__int64)v1;
  v51 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = PpmParkNodes + 1296LL * (unsigned int)v2;
      v54 = v4;
      if ( PpmHeteroHgsParkingEnabled || *(_BYTE *)(v4 + 1185) )
        break;
LABEL_48:
      v2 = (unsigned int)(v2 + 1);
      v51 = v2;
      if ( (unsigned int)v2 >= PpmParkNumNodes )
      {
        v1 = (__int64 *)v50;
        goto LABEL_50;
      }
    }
    v49 = 0;
    v55 = 0LL;
    v5 = 0;
    WORD4(v55) = *(_WORD *)(v4 + 4);
    v6 = 0;
    *(_QWORD *)&v55 = *(_QWORD *)(v4 + 16);
    v7 = *(unsigned __int8 *)(v4 + 12);
    if ( (unsigned __int8)v7 > 1u )
    {
      v8 = *(_QWORD *)(v4 + 1288) + 640LL;
      v9 = (unsigned int)(v7 - 1);
      do
      {
        v6 += *(_BYTE *)v8;
        v5 += *(unsigned __int16 *)(v8 + 8);
        v8 += 640LL;
        --v9;
      }
      while ( v9 );
      v49 = v5;
    }
    if ( PpmHeteroHgsParkingEnabled )
    {
      v6 = *(_BYTE *)(v4 + 10);
      v5 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 1288) + 648LL);
      v49 = v5;
    }
    PpmHeteroComputeCoreParkingUtilities(0LL, &v55, v57, v56, &v53, &v52);
    v10 = *(unsigned __int16 *)(v4 + 10);
    v11 = 0;
    v12 = 0LL;
    v48 = 0;
    if ( *(_WORD *)(v4 + 10) )
    {
      v13 = *(unsigned __int16 *)(v4 + 10);
      v14 = (_QWORD *)(*(_QWORD *)(v4 + 1128) + 8 * v10);
      do
      {
        v12 += *v14 * v53;
        v15 = v13;
        v10 = (unsigned int)(v10 - 1);
        --v13;
        v58[v10] = v12;
        v16 = *v14-- * v15;
        v11 += v16;
      }
      while ( (_DWORD)v10 );
      v48 = v11;
    }
    v17 = v52;
    if ( v5 )
    {
      v18 = v56;
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
        v17 += v56[v21];
        v26 = PpmHeteroUtilityGreaterThanOrEqualThreshold(
                v11,
                v57[v21],
                v58[v21],
                *(unsigned __int8 *)(v21 + v50 + 179),
                0);
        v11 = v48;
      }
      while ( !v26 );
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v48, v17, 0, v27, 0) )
      {
LABEL_25:
        v11 = v48;
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
                              v57[(unsigned int)v21],
                              v58[(unsigned int)v21],
                              *(unsigned __int8 *)((unsigned int)v21 + v50 + 307),
                              0) )
      {
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v48, v17, 0, v22, 0) )
          break;
        v23 = (unsigned int)v21;
        LODWORD(v21) = v21 + 1;
        v17 -= v56[v23];
        if ( (unsigned int)v21 >= v6 )
          break;
        v11 = v48;
      }
      v5 = v49;
      v4 = v54;
      if ( (unsigned int)v21 <= v49 )
        goto LABEL_25;
      v24 = 2;
    }
    v28 = 0;
    if ( *(char *)(v4 + 1188) == v24 )
    {
      v29 = *(_BYTE *)(v4 + 1186) + 1;
      v30 = v29;
      *(_BYTE *)(v4 + 1186) = v29;
    }
    else
    {
      *(_BYTE *)(v4 + 1188) = v24;
      v30 = 1;
      *(_BYTE *)(v4 + 1186) = 1;
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
      if ( v30 < *(unsigned __int8 *)(v50 + 178) )
      {
LABEL_43:
        v32 = PpmHeteroHgsParkingEnabled == 0;
        *(_BYTE *)(v4 + 1184) = *(_BYTE *)(v4 + 1184) & 0xF9 | 4;
        if ( !v32 )
        {
          v3 |= 0x80u;
          *(_WORD *)(*(_QWORD *)(v4 + 1288) + 648LL) = *(_WORD *)(*(_QWORD *)(v4 + 1288) + 646LL);
          *(_WORD *)(v4 + 1264) = *(_WORD *)(*(_QWORD *)(v4 + 1288) + 646LL);
        }
        v33 = v3 | 1;
        PpmEventTraceMultiClassHeteroResponse(
          0,
          (unsigned int)&v55,
          (unsigned int)v57,
          (unsigned int)v56,
          v52,
          v5,
          v24,
          *(_BYTE *)(v4 + 1176) - v21,
          v21,
          *(_QWORD *)(v4 + 1152));
        if ( !PpmHeteroHgsParkingEnabled )
          PpmHeteroComputeMultiClassUnparkCount(v4, v50, (__int64)v57, (__int64)v56, v21, v31, v28);
        PpmEventTraceHeteroResponse(v4, (unsigned int)v57, (unsigned int)v58, v48, v21, v33);
        LODWORD(v2) = v51;
        goto LABEL_48;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v24 != 1 || v30 < *(unsigned __int8 *)(v50 + 177) )
        goto LABEL_43;
      v3 |= 0x40u;
    }
    v31 = 1;
    *(_WORD *)(*(_QWORD *)(v4 + 1288) + 646LL) = (unsigned __int8)v21;
    goto LABEL_43;
  }
LABEL_50:
  PpmParkCalculateUnparkCount(v2);
  if ( PpmParkNumNodes )
  {
    v34 = (unsigned int)PpmParkNumNodes;
    v35 = (unsigned __int16 *)(PpmParkNodes + 1176);
    do
    {
      if ( *((_BYTE *)v35 + 9) )
      {
        v36 = *((unsigned __int8 *)v35 - 1164);
        v37 = 0;
        if ( v36 > 1 )
        {
          v38 = v36 - 1;
          v39 = (unsigned __int16 *)(*((_QWORD *)v35 + 14) + 646LL);
          do
          {
            v40 = *v39;
            v39 += 320;
            v37 += v40;
            --v38;
          }
          while ( v38 );
        }
        v41 = *v35;
        v42 = (unsigned __int16 *)*((_QWORD *)v35 + 14);
        if ( v37 < *v35 )
          v41 = v37;
        v43 = (unsigned __int8)(*(_BYTE *)v35 - v41);
        if ( v43 >= *v42 )
          v43 = *v42;
        v32 = PpmParkUnparkCores == 0;
        v42[3] = v43;
        if ( v32 || PpmParkGranularity == 1 && *((_BYTE *)v35 + 2) > *((_BYTE *)v1 + 142) )
        {
          for ( i = 0; i < *((unsigned __int8 *)v35 - 1164); ++i )
          {
            v45 = (unsigned __int16 *)(*((_QWORD *)v35 + 14) + 640LL * i);
            v46 = v45[3];
            if ( v46 < *v45 )
            {
              v45[3] = v46 + 1;
              break;
            }
          }
        }
      }
      v35 += 648;
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
        *(_QWORD *)(PpmParkNodes + 1296LL * v0 + 1288),
        *(_QWORD *)(PpmParkNodes + 1296LL * v0 + 1192));
      ++v0;
    }
    while ( v0 < PpmParkNumNodes );
  }
  return 1;
}
