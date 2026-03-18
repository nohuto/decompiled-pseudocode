/*
 * XREFs of PpmCheckComputeHeteroResponseEx @ 0x1405DF774
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x1404EC390 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417BE0 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x140423814 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140423BD0 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140423FEC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DED44 (PpmEventTraceHeteroResponseEx.c)
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DFBD4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 */

char PpmCheckComputeHeteroResponseEx()
{
  _DWORD *v0; // r13
  _DWORD *v1; // r12
  __int64 v2; // rcx
  unsigned int v3; // ecx
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r15
  size_t v9; // rbx
  __int64 v10; // r14
  __int64 Prcb; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r13
  _QWORD *v18; // r10
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  unsigned int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  int v32; // ecx
  int v33; // r15d
  __int64 v34; // rax
  unsigned int v35; // r9d
  unsigned __int8 v36; // al
  unsigned int v37; // edx
  bool v38; // zf
  __int64 v39; // r9
  __int64 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+28h] [rbp-90h]
  _QWORD *v43; // [rsp+30h] [rbp-88h]
  __int64 *v44; // [rsp+38h] [rbp-80h]
  unsigned int *v45; // [rsp+40h] [rbp-78h]
  unsigned int *v46; // [rsp+48h] [rbp-70h]
  __int128 v47; // [rsp+58h] [rbp-60h] BYREF
  __int64 v48; // [rsp+68h] [rbp-50h]
  unsigned int v49; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+10h]
  unsigned int v51; // [rsp+D0h] [rbp+18h]
  int v52; // [rsp+D8h] [rbp+20h]

  v0 = PpmHeteroPerfCheckUtilities;
  v1 = Base;
  v48 = 0LL;
  v47 = 0LL;
  v45 = (unsigned int *)PpmHeteroPerfCheckUtilities;
  v46 = (unsigned int *)Base;
  v44 = &PpmCurrentProfile[0][61 * dword_140F0BA4C + 5];
  v43 = (_QWORD *)qword_140F06268;
  if ( PpmHeteroPolicy != 4 )
    goto LABEL_54;
  if ( !PpmHeteroIsMultiClassParkingEnabled() )
  {
    v3 = 0;
    v50 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v4 = 0;
        v52 = 0;
        v5 = PpmParkNodes + 1288LL * v3;
        if ( !PpmHeteroHgsParkingEnabled || *(_WORD *)(*(_QWORD *)(v5 + 1280) + 640LL) || PpmHeteroPolicy )
          break;
LABEL_53:
        v50 = ++v3;
        if ( v3 >= PpmParkNumNodes )
          goto LABEL_54;
      }
      v6 = *(_QWORD *)(v5 + 1280);
      v7 = 0LL;
      v49 = 0;
      v8 = 0LL;
      v9 = 0LL;
      LOWORD(v48) = 0;
      v10 = *(unsigned __int16 *)(v6 + 648);
      *((_QWORD *)&v47 + 1) = *(_QWORD *)(v5 + 56);
      v51 = v10;
      *(_QWORD *)&v47 = v5 + 48;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v49, (unsigned __int16 **)&v47) )
      {
        Prcb = KeGetPrcb(v49);
        v12 = *(_DWORD *)(Prcb + 35288);
        if ( PpmCheckCurrentPipelineId != 5 )
          v12 -= *(_DWORD *)(Prcb + 35296);
        v0[v9] = PpmHeteroUtilityToNormalizedUtility(Prcb + 35248, v12);
        v14 = PpmHeteroUtilityToNormalizedUtility(v13, *(_DWORD *)(v13 + 52));
        v1[v9] = v14;
        v7 += v14;
        v8 += (unsigned int)v0[v9];
        v9 = (unsigned int)(v9 + 1);
      }
      qsort(v0, v9, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      qsort(v1, v9, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      v15 = *(unsigned __int16 *)(v5 + 10);
      v16 = 0LL;
      v17 = 0LL;
      v18 = v43;
      if ( *(_WORD *)(v5 + 10) )
      {
        v19 = *(unsigned __int16 *)(v5 + 10);
        v20 = (_QWORD *)(*(_QWORD *)(v5 + 1128) + 8 * v15);
        do
        {
          v16 += *v20 * v8;
          v21 = v19;
          v15 = (unsigned int)(v15 - 1);
          --v19;
          v43[v15] = v16;
          v22 = *v20-- * v21;
          v17 += v22;
        }
        while ( (_DWORD)v15 );
      }
      if ( (_DWORD)v10 )
      {
        v23 = v1;
        v24 = v10;
        do
        {
          v25 = *v23++;
          v7 -= v25;
          --v24;
        }
        while ( v24 );
      }
      v26 = *(_WORD *)(*(_QWORD *)(v5 + 1280) + 640LL);
      if ( PpmHeteroHgsParkingEnabled )
        v26 = *(_WORD *)(v5 + 10);
      v27 = v26;
      LODWORD(v28) = v10;
      if ( (unsigned int)v10 >= v26 )
      {
LABEL_34:
        while ( (_DWORD)v28 )
        {
          v33 = v28;
          v28 = (unsigned int)(v28 - 1);
          v7 += (unsigned int)v1[v28];
          v34 = 63LL;
          if ( (unsigned int)v28 < 0x3F )
            v34 = (unsigned int)v28;
          if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v17,
                               v45[v28],
                               v43[v28],
                               *((unsigned __int8 *)v44 + v34 + 179),
                               0)
            && (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v17, v7, 0LL, v35, 0) )
          {
            LODWORD(v28) = v33;
            break;
          }
        }
        v32 = (unsigned int)v28 < (unsigned int)v10;
      }
      else
      {
        do
        {
          v29 = 63LL;
          if ( (unsigned int)v28 < 0x3F )
            v29 = (unsigned int)v28;
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                                v17,
                                v45[(unsigned int)v28],
                                v18[(unsigned int)v28],
                                *((unsigned __int8 *)v44 + v29 + 307),
                                0) )
            break;
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v17, v7, 0LL, v30, 0) )
            break;
          v31 = v46[(unsigned int)v28];
          LODWORD(v28) = v28 + 1;
          v18 = v43;
          v7 -= v31;
        }
        while ( (unsigned int)v28 < v27 );
        LODWORD(v10) = v51;
        v4 = v52;
        if ( (unsigned int)v28 <= v51 )
        {
          v1 = v46;
          goto LABEL_34;
        }
        v32 = 2;
      }
      if ( *(char *)(v5 + 1188) == v32 )
      {
        v36 = *(_BYTE *)(v5 + 1186) + 1;
        v37 = v36;
        *(_BYTE *)(v5 + 1186) = v36;
      }
      else
      {
        v37 = 1;
        *(_BYTE *)(v5 + 1188) = v32;
        *(_BYTE *)(v5 + 1186) = 1;
        v4 = 4;
      }
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v4 |= 0x10u;
      }
      else if ( v32 == 2 )
      {
        if ( v37 < *((unsigned __int8 *)v44 + 178) )
        {
LABEL_50:
          v38 = PpmHeteroHgsParkingEnabled == 0;
          *(_BYTE *)(v5 + 1184) = *(_BYTE *)(v5 + 1184) & 0xF9 | 4;
          if ( !v38 )
          {
            v4 |= 0x80u;
            *(_WORD *)(*(_QWORD *)(v5 + 1280) + 648LL) = *(_WORD *)(*(_QWORD *)(v5 + 1280) + 646LL);
            *(_WORD *)(v5 + 1256) = *(_WORD *)(*(_QWORD *)(v5 + 1280) + 646LL);
          }
          v39 = v17;
          v0 = v45;
          LODWORD(v42) = v4 | 1;
          LOWORD(v41) = v28;
          PpmEventTraceHeteroResponseEx(v5, (ULONGLONG)v45, v43, v39, v41, v42);
          v3 = v50;
          v1 = v46;
          goto LABEL_53;
        }
        v4 |= 0x20u;
      }
      else
      {
        if ( v32 != 1 || v37 < *((unsigned __int8 *)v44 + 177) )
          goto LABEL_50;
        v4 |= 0x40u;
      }
      *(_WORD *)(*(_QWORD *)(v5 + 1280) + 646LL) = v28;
      goto LABEL_50;
    }
LABEL_54:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  PpmCheckComputeMultiClassHeteroResponseEx(v2, 0LL);
  return 1;
}
