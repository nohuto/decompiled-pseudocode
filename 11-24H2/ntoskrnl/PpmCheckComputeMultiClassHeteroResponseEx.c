/*
 * XREFs of PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4
 * Callers:
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 * Callees:
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DBBC4 (PpmEventTraceHeteroResponseEx.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DC0EC (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850 (PpmHeteroComputeMultiClassUnparkCountEx.c)
 *     PpmHeteroComputeUnparkCountEx @ 0x1405DDBCC (PpmHeteroComputeUnparkCountEx.c)
 */

char PpmCheckComputeMultiClassHeteroResponseEx()
{
  unsigned int v0; // ebx
  void *v1; // r13
  unsigned int v2; // r15d
  __int64 *v3; // r14
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdi
  int v7; // edx
  int v8; // r12d
  unsigned __int16 v9; // bp
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // r11
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int8 v22; // al
  unsigned int v23; // ecx
  char v24; // r14
  int v25; // ebp
  bool v26; // zf
  int v27; // esi
  __int64 v28; // r12
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned __int16 *v34; // rcx
  int v35; // eax
  unsigned int v36; // edx
  unsigned __int16 *v37; // rcx
  __int16 v38; // ax
  unsigned __int16 v39; // dx
  unsigned int v40; // edx
  __int64 v41; // r11
  __int64 v42; // rcx
  unsigned __int16 v43; // ax
  __int64 v45; // [rsp+20h] [rbp-98h]
  char v46; // [rsp+28h] [rbp-90h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  char v48; // [rsp+28h] [rbp-90h]
  __int64 v49; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v50; // [rsp+58h] [rbp-60h]
  __int64 v51; // [rsp+60h] [rbp-58h] BYREF
  __int64 v52; // [rsp+68h] [rbp-50h]
  char v53; // [rsp+C0h] [rbp+8h]
  int v54; // [rsp+C8h] [rbp+10h] BYREF
  __int64 *v55; // [rsp+D0h] [rbp+18h]
  __int64 v56; // [rsp+D8h] [rbp+20h]

  v0 = 0;
  v1 = PpmHeteroPerfCheckUtilities;
  v2 = 0;
  v3 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
  v49 = 0LL;
  v4 = qword_140F06570;
  v56 = qword_140F06570;
  v51 = 0LL;
  v55 = v3;
  v50 = (_QWORD *)qword_140F06568;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v5 = 0;
      v6 = PpmParkNodes + 1296LL * v2;
      if ( PpmHeteroHgsParkingEnabled || *(_BYTE *)(v6 + 1185) )
        break;
LABEL_32:
      if ( ++v2 >= PpmParkNumNodes )
        goto LABEL_33;
    }
    v7 = *(unsigned __int8 *)(v6 + 12);
    v8 = 0;
    v9 = 0;
    if ( (unsigned __int8)v7 > 1u )
    {
      v10 = (_WORD *)(*(_QWORD *)(v6 + 1288) + 640LL);
      v11 = (unsigned int)(v7 - 1);
      do
      {
        v9 += *v10;
        v8 += (unsigned __int16)v10[4];
        v10 += 320;
        --v11;
      }
      while ( v11 );
      v4 = v56;
    }
    if ( PpmHeteroHgsParkingEnabled )
    {
      v9 = *(_WORD *)(v6 + 10);
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 1288) + 648LL);
    }
    PpmHeteroComputeCoreParkingUtilitiesEx(0LL, v6 + 48, v1, v4, &v51, &v49);
    v12 = *(unsigned __int16 *)(v6 + 10);
    v13 = 0LL;
    v14 = *(_QWORD *)(v6 + 1128);
    v15 = 0LL;
    v16 = v50;
    v52 = 0LL;
    v54 = v12;
    if ( (_DWORD)v12 )
    {
      v17 = (unsigned int)v12;
      v18 = (_QWORD *)(v14 + 8 * v12);
      do
      {
        v15 += *v18 * v51;
        v19 = v17;
        v12 = (unsigned int)(v12 - 1);
        --v17;
        v54 = v12;
        v16[v12] = v15;
        v20 = *v18-- * v19;
        v13 += v20;
      }
      while ( (_DWORD)v12 );
      v52 = v13;
    }
    v21 = PpmHeteroComputeUnparkCountEx(0, (_DWORD)v3, v13, (_DWORD)v1, (__int64)v16, v56, v49, v8, v9, (__int64)&v54);
    v53 = 0;
    if ( *(char *)(v6 + 1188) == v21 )
    {
      v22 = *(_BYTE *)(v6 + 1186) + 1;
      v23 = v22;
      *(_BYTE *)(v6 + 1186) = v22;
    }
    else
    {
      v23 = 1;
      *(_BYTE *)(v6 + 1188) = v21;
      *(_BYTE *)(v6 + 1186) = 1;
      v53 = 1;
      v5 = 4;
    }
    v24 = 0;
    v25 = v54;
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v5 |= 0x10u;
    }
    else if ( v21 == 2 )
    {
      if ( v23 < *((unsigned __int8 *)v55 + 178) )
      {
LABEL_26:
        v26 = PpmHeteroHgsParkingEnabled == 0;
        *(_BYTE *)(v6 + 1184) = *(_BYTE *)(v6 + 1184) & 0xF9 | 4;
        if ( !v26 )
        {
          v5 |= 0x80u;
          *(_WORD *)(*(_QWORD *)(v6 + 1288) + 648LL) = *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL);
          *(_WORD *)(v6 + 1264) = *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL);
        }
        v27 = v5 | 1;
        v46 = v8;
        v28 = v56;
        PpmEventTraceMultiClassHeteroResponseEx(
          0,
          (unsigned __int16 *)(v6 + 48),
          (ULONGLONG)v1,
          v56,
          v49,
          v46,
          v21,
          *(_BYTE *)(v6 + 1176) - v25,
          v25,
          *(_QWORD *)(v6 + 1152));
        if ( PpmHeteroHgsParkingEnabled )
        {
          v3 = v55;
        }
        else
        {
          v48 = v24;
          v3 = v55;
          PpmHeteroComputeMultiClassUnparkCountEx(v6, (_DWORD)v55, (_DWORD)v1, v28, v25, v48, v53);
          v27 |= 0x100u;
        }
        LODWORD(v47) = v27;
        LOWORD(v45) = v25;
        PpmEventTraceHeteroResponseEx(v6, (ULONGLONG)v1, v50, v52, v45, v47);
        v4 = v28;
        goto LABEL_32;
      }
      v5 |= 0x20u;
    }
    else
    {
      if ( v21 != 1 || v23 < *((unsigned __int8 *)v55 + 177) )
        goto LABEL_26;
      v5 |= 0x40u;
    }
    v24 = 1;
    *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL) = v54;
    goto LABEL_26;
  }
LABEL_33:
  PpmParkCalculateUnparkCount();
  if ( PpmParkNumNodes )
  {
    v30 = (unsigned int)PpmParkNumNodes;
    v31 = PpmParkNodes + 1178;
    do
    {
      if ( *(_BYTE *)(v31 + 7) )
      {
        v32 = *(unsigned __int8 *)(v31 - 1166);
        v29 = 0LL;
        if ( v32 > 1 )
        {
          v33 = v32 - 1;
          v34 = (unsigned __int16 *)(*(_QWORD *)(v31 + 110) + 646LL);
          do
          {
            v35 = *v34;
            v34 += 320;
            v29 = (unsigned int)(v35 + v29);
            --v33;
          }
          while ( v33 );
        }
        v36 = *(unsigned __int16 *)(v31 - 2);
        v37 = *(unsigned __int16 **)(v31 + 110);
        v38 = *(_WORD *)(v31 - 2);
        if ( (unsigned int)v29 < v36 )
          v38 = v29;
        v39 = v36 - v38;
        if ( v39 >= *v37 )
          v39 = *v37;
        v26 = PpmParkUnparkCores == 0;
        v37[3] = v39;
        if ( v26 || PpmParkGranularity == 1 && *(_BYTE *)v31 > *((_BYTE *)v3 + 142) )
        {
          v29 = *(unsigned __int8 *)(v31 - 1166);
          v40 = 0;
          if ( *(_BYTE *)(v31 - 1166) )
          {
            v41 = *(_QWORD *)(v31 + 110);
            while ( 1 )
            {
              v42 = 640LL * v40;
              v43 = *(_WORD *)(v42 + v41 + 6);
              if ( v43 < *(_WORD *)(v42 + v41) )
                break;
              if ( ++v40 >= (unsigned int)v29 )
                goto LABEL_52;
            }
            *(_WORD *)(v42 + v41 + 6) = v43 + 1;
          }
        }
      }
LABEL_52:
      v31 += 1296LL;
      --v30;
    }
    while ( v30 );
  }
  if ( PpmParkNumNodes )
  {
    do
    {
      PpmEventTraceMultiClassHeteroResponseUpdate(
        0LL,
        *(char **)(PpmParkNodes + 1296LL * v0 + 1288),
        *(_QWORD *)(PpmParkNodes + 1296LL * v0 + 1192),
        v29);
      ++v0;
    }
    while ( v0 < PpmParkNumNodes );
  }
  return 1;
}
