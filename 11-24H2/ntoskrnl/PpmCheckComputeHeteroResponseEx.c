/*
 * XREFs of PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140417E9C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline @ 0x1405D5174 (Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventTraceHeteroResponseEx @ 0x1405DBBC4 (PpmEventTraceHeteroResponseEx.c)
 *     PpmEventTraceHeteroResponseExV1 @ 0x1405DBE40 (PpmEventTraceHeteroResponseExV1.c)
 *     Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant @ 0x1405DC8A0 (Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant.c)
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 */

char __fastcall PpmCheckComputeHeteroResponseEx()
{
  unsigned int v0; // r13d
  _DWORD *v1; // r14
  unsigned __int64 v2; // r12
  unsigned int v3; // edi
  int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rsi
  size_t v8; // rbx
  bool v9; // al
  bool v10; // zf
  __int64 v11; // rax
  __int64 Prcb; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // rbx
  signed __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int16 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  int v34; // ebx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  int v39; // ebx
  __int64 v40; // rbx
  int v41; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v43; // r12
  unsigned int v44; // ebx
  int v45; // r14d
  int v46; // eax
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // r9d
  unsigned int v50; // r9d
  unsigned __int8 v51; // al
  unsigned int v52; // r14d
  __int16 v53; // bx
  int v54; // ebp
  __int64 v56; // [rsp+20h] [rbp-D8h]
  __int64 v57; // [rsp+28h] [rbp-D0h]
  __int64 v58; // [rsp+30h] [rbp-C8h]
  __int64 v59; // [rsp+38h] [rbp-C0h]
  __int64 v60; // [rsp+40h] [rbp-B8h]
  __int64 v61; // [rsp+48h] [rbp-B0h]
  _QWORD *v62; // [rsp+50h] [rbp-A8h]
  __int64 *v63; // [rsp+58h] [rbp-A0h]
  unsigned int *v64; // [rsp+60h] [rbp-98h]
  unsigned int v65; // [rsp+68h] [rbp-90h]
  _DWORD *Base; // [rsp+70h] [rbp-88h]
  unsigned __int64 v67; // [rsp+80h] [rbp-78h]
  unsigned int v68; // [rsp+88h] [rbp-70h]
  __int128 v69; // [rsp+90h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-58h]
  __int64 v71; // [rsp+A8h] [rbp-50h]
  unsigned int v72; // [rsp+100h] [rbp+8h] BYREF
  int v73; // [rsp+108h] [rbp+10h]
  unsigned int v74; // [rsp+110h] [rbp+18h]
  unsigned int v75; // [rsp+118h] [rbp+20h]

  v1 = PpmHeteroPerfCheckUtilities;
  v70 = 0LL;
  v69 = 0LL;
  v64 = (unsigned int *)PpmHeteroPerfCheckUtilities;
  v63 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
  v62 = (_QWORD *)qword_140F06568;
  Base = (_DWORD *)qword_140F06570;
  if ( PpmHeteroPolicy != 4 )
    goto LABEL_125;
  v2 = 0LL;
  if ( !PpmHeteroIsMultiClassParkingEnabled() )
  {
    v3 = 0;
    v65 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v4 = 0;
        v5 = PpmParkNodes + 1296LL * v3;
        v71 = v5;
        if ( !PpmHeteroHgsParkingEnabled || *(_WORD *)(*(_QWORD *)(v5 + 1288) + 640LL) || PpmHeteroPolicy )
          break;
LABEL_124:
        v3 = ++v65;
        if ( v65 >= PpmParkNumNodes )
          goto LABEL_125;
      }
      LOBYTE(v0) = 0;
      v60 = 0LL;
      v6 = 0LL;
      v68 = 0;
      v67 = 0LL;
      LODWORD(v7) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 1288) + 648LL);
      v74 = v7;
      v72 = 0;
      v8 = 0LL;
      v75 = v0;
      v73 = 0;
      if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline()
        && PpmIsUnparkOnUnimportantUtilitySupported )
      {
        v9 = (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant() == 2
          || (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant() == 4
          || (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant() == 6;
        v0 = 0;
        v10 = *(_BYTE *)(v5 + 1200) == 0;
        v73 = *(unsigned __int8 *)(v5 + 1200);
        LODWORD(v7) = v74;
        if ( !v10 )
          v0 = v9;
        v75 = v0;
      }
      LOWORD(v70) = 0;
      v11 = *(_QWORD *)(v5 + 56);
      *(_QWORD *)&v69 = v5 + 48;
      *((_QWORD *)&v69 + 1) = v11;
      if ( !(unsigned int)KeEnumerateNextProcessor(&v72, (unsigned __int16 **)&v69) )
      {
        do
        {
          Prcb = KeGetPrcb(v72);
          v13 = *(_DWORD *)(Prcb + 35288);
          if ( PpmCheckCurrentPipelineId != 5 )
            v13 -= *(_DWORD *)(Prcb + 35296);
          v1[v8] = PpmHeteroUtilityToNormalizedUtility(Prcb + 35248, v13);
          v15 = PpmHeteroUtilityToNormalizedUtility(v14, *(_DWORD *)(v14 + 52));
          Base[v8] = v15;
          v6 += v15;
          v2 += (unsigned int)v1[v8];
          v8 = (unsigned int)(v8 + 1);
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v72, (unsigned __int16 **)&v69) );
        LOBYTE(v0) = v75;
        v60 = v6;
        v67 = v2;
      }
      qsort(v1, v8, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      qsort(Base, v8, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
      v16 = *(unsigned __int16 *)(v5 + 10);
      v17 = 0LL;
      v61 = 0LL;
      v18 = 0LL;
      if ( *(_WORD *)(v5 + 10) )
      {
        v19 = (_QWORD *)(*(_QWORD *)(v5 + 1128) + 8 * v16);
        v20 = *(unsigned __int16 *)(v5 + 10);
        do
        {
          v18 += *v19 * v2;
          v21 = v20;
          v16 = (unsigned int)(v16 - 1);
          --v20;
          v62[v16] = v18;
          v22 = *v19-- * v21;
          v17 += v22;
        }
        while ( (_DWORD)v16 );
        v61 = v17;
      }
      if ( (_DWORD)v7 )
      {
        v23 = v1;
        v24 = (char *)Base - (char *)v1;
        v25 = v74;
        do
        {
          v6 -= *(unsigned int *)((char *)v23 + v24);
          if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
            v2 -= *v23;
          ++v23;
          --v25;
        }
        while ( v25 );
        LODWORD(v7) = v74;
        v60 = v6;
        v67 = v2;
      }
      v26 = *(_WORD *)(*(_QWORD *)(v5 + 1288) + 640LL);
      LOWORD(v72) = v26;
      if ( PpmHeteroHgsParkingEnabled )
      {
        v26 = *(_WORD *)(v5 + 10);
        LOWORD(v72) = v26;
      }
      if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
      {
        v27 = v2;
        if ( !v2 )
          v27 = 1LL;
        v28 = 100 * v6 / v27;
        if ( (unsigned int)v28 > 0x64 )
          LODWORD(v28) = 100;
        v68 = v28;
      }
      if ( v74 < v26 )
      {
        while ( 1 )
        {
          v29 = 63LL;
          if ( (unsigned int)v7 < 0x3F )
            v29 = (unsigned int)v7;
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                                v61,
                                v64[(unsigned int)v7],
                                v62[(unsigned int)v7],
                                *((unsigned __int8 *)v63 + v29 + 307),
                                0)
            || !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v60, 0LL, v30, 0) )
          {
            break;
          }
          v31 = (unsigned int)Base[(unsigned int)v7];
          LODWORD(v7) = v7 + 1;
          v6 = v60 - v31;
          v60 -= v31;
          if ( (unsigned int)v7 >= v26 )
            goto LABEL_49;
        }
        v6 = v60;
LABEL_49:
        v5 = v71;
        v4 = 0;
        v26 = v72;
        v2 = v67;
        LOBYTE(v0) = v75;
      }
      if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline()
        && PpmIsUnparkOnUnimportantUtilitySupported )
      {
        v10 = (_BYTE)v0 == 0;
        v0 = v74;
        if ( v10 && (_DWORD)v7 == v74 )
        {
          if ( (unsigned int)v7 >= v26 || v68 > PpmHeteroImportantUtilityLowDominanceCutoff || v2 < 0x3E8 )
          {
            v2 = 0LL;
            goto LABEL_92;
          }
          v32 = 63LL;
          if ( (unsigned int)v7 < 0x3F )
            v32 = (unsigned int)v7;
          v33 = (unsigned int)v32;
          v34 = *((unsigned __int8 *)v63 + v32 + 307);
          v35 = Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant() - 1;
          if ( v35 && (v36 = v35 - 1) != 0 )
          {
            if ( (unsigned int)(v36 - 3) < 2 )
              v37 = 30 * v34;
            else
              v37 = 50 * v34;
          }
          else
          {
            v37 = 70 * v34;
          }
          v2 = 0LL;
          v38 = v37 / 0x64;
          if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                                v61,
                                v64[(unsigned int)v7],
                                v62[(unsigned int)v7],
                                *((unsigned __int8 *)v63 + v33 + 307),
                                0)
            || !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v6, 0LL, v38, 0) )
          {
LABEL_92:
            while ( (_DWORD)v7 )
            {
              v40 = 63LL;
              v0 = v7;
              v41 = v7;
              v7 = (unsigned int)(v7 - 1);
              v60 += (unsigned int)Base[v7];
              if ( (unsigned int)v7 < 0x3F )
                v40 = (unsigned int)v7;
              IsEnabledDeviceUsageNoInline = Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline();
              v43 = (unsigned int)v40;
              v44 = *((unsigned __int8 *)v63 + v40 + 179);
              if ( IsEnabledDeviceUsageNoInline )
              {
                v45 = v73;
                if ( v73 && PpmIsUnparkOnUnimportantUtilitySupported )
                {
                  v46 = Feature_UnparkPCoresOnUnimportantUtility__private_GetVariant() - 1;
                  if ( v46 && (v47 = v46 - 1) != 0 )
                  {
                    if ( (unsigned int)(v47 - 3) < 2 )
                      v48 = 30 * v44;
                    else
                      v48 = 50 * v44;
                  }
                  else
                  {
                    v48 = 70 * v44;
                  }
                  v44 = v48 / 0x64;
                }
                v49 = *((unsigned __int8 *)v63 + v43 + 179);
                v2 = 0LL;
                if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v64[v7], v62[v7], v49, 0)
                  && (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v60, 0LL, v44, 0) )
                {
                  LODWORD(v7) = v0;
                  break;
                }
                if ( v45 && PpmIsUnparkOnUnimportantUtilitySupported )
                  v73 = v45 - 1;
              }
              else
              {
                v2 = 0LL;
                if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v64[v7], v62[v7], v44, 0)
                  && (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v61, v60, 0LL, v50, 0) )
                {
                  LODWORD(v7) = v41;
                  break;
                }
              }
            }
            v39 = (unsigned int)v7 < v74;
LABEL_97:
            if ( *(char *)(v5 + 1188) == v39 )
            {
              v51 = *(_BYTE *)(v5 + 1186) + 1;
              v52 = v51;
              *(_BYTE *)(v5 + 1186) = v51;
            }
            else
            {
              *(_BYTE *)(v5 + 1188) = v39;
              v52 = 1;
              *(_BYTE *)(v5 + 1186) = 1;
              v4 = 4;
              if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline()
                && v39 != 2
                && *(_BYTE *)(v5 + 1201)
                && PpmIsUnparkOnUnimportantUtilitySupported )
              {
                *(_BYTE *)(v5 + 1201) = 0;
                v4 = 2052;
              }
            }
            if ( PpmCheckCurrentPipelineId == 5 )
            {
              v4 |= 0x10u;
              *(_WORD *)(*(_QWORD *)(v5 + 1288) + 646LL) = v7;
            }
            else if ( v39 == 2 )
            {
              if ( v52 >= *((unsigned __int8 *)v63 + 178) )
              {
                v4 |= 0x20u;
                *(_WORD *)(*(_QWORD *)(v5 + 1288) + 646LL) = v7;
                if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
                {
                  if ( *(_BYTE *)(v5 + 1201) )
                  {
                    v53 = v73;
                    if ( PpmIsUnparkOnUnimportantUtilitySupported )
                    {
                      ++*(_BYTE *)(v5 + 1200);
                      v4 |= 0x200u;
                      *(_BYTE *)(v5 + 1201) = 0;
                    }
                    goto LABEL_107;
                  }
                }
              }
            }
            else if ( v39 == 1 && v52 >= *((unsigned __int8 *)v63 + 177) )
            {
              v4 |= 0x40u;
              *(_WORD *)(*(_QWORD *)(v5 + 1288) + 646LL) = v7;
              if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( *(_BYTE *)(v5 + 1200) )
                {
                  v53 = v73;
                  if ( PpmIsUnparkOnUnimportantUtilitySupported )
                  {
                    *(_BYTE *)(v5 + 1200) = v73;
                    v4 |= 0x400u;
                  }
                  goto LABEL_107;
                }
              }
            }
            v53 = v73;
LABEL_107:
            v10 = PpmHeteroHgsParkingEnabled == 0;
            *(_BYTE *)(v5 + 1184) = *(_BYTE *)(v5 + 1184) & 0xF9 | 4;
            if ( !v10 )
            {
              v4 |= 0x80u;
              *(_WORD *)(*(_QWORD *)(v5 + 1288) + 648LL) = *(_WORD *)(*(_QWORD *)(v5 + 1288) + 646LL);
              *(_WORD *)(v5 + 1264) = *(_WORD *)(*(_QWORD *)(v5 + 1288) + 646LL);
            }
            v54 = v4 | 1;
            v1 = v64;
            if ( (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline() )
            {
              LOWORD(v59) = v53;
              LODWORD(v58) = v68;
              LODWORD(v57) = v54;
              LOWORD(v56) = v7;
              PpmEventTraceHeteroResponseExV1(v5, (ULONGLONG)v64, v62, v61, v56, v57, v58, v59);
            }
            else
            {
              LODWORD(v57) = v54;
              LOWORD(v56) = v7;
              PpmEventTraceHeteroResponseEx(v5, (ULONGLONG)v64, v62, v61, v56, v57);
            }
            goto LABEL_124;
          }
          ++v73;
          LODWORD(v7) = v7 + 1;
          ++*(_BYTE *)(v5 + 1201);
LABEL_70:
          if ( (unsigned int)v7 <= v0 )
            goto LABEL_92;
          v39 = 2;
          goto LABEL_97;
        }
      }
      else
      {
        v0 = v74;
      }
      v2 = 0LL;
      goto LABEL_70;
    }
LABEL_125:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  PpmCheckComputeMultiClassHeteroResponseEx();
  return 1;
}
