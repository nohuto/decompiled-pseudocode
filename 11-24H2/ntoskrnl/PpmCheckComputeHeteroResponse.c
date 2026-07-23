/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x1404E3AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1404176DC (PpmEventTraceHeteroResponse.c)
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140417E9C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmCheckComputeHeteroResponse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ecx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int16 v9; // cx
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  size_t v13; // rbx
  __int64 Prcb; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 v30; // cl
  unsigned int v31; // r13d
  __int64 v32; // rbx
  __int64 *v33; // rdi
  unsigned int v34; // r9d
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r12d
  unsigned int v38; // r9d
  unsigned __int8 v39; // al
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v43; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h]
  __int64 *v47; // [rsp+48h] [rbp-C0h]
  __int128 v48; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  _DWORD v51[64]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD Base[64]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v53[64]; // [rsp+278h] [rbp+170h] BYREF

  v48 = 0LL;
  v49 = 0LL;
  if ( !(unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
  {
    v47 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
    if ( PpmHeteroPolicy != 4 )
      goto LABEL_55;
    if ( PpmHeteroIsMultiClassParkingEnabled() )
    {
      PpmCheckComputeMultiClassHeteroResponse();
      return 1;
    }
    v4 = 0;
    LODWORD(v46) = 0;
    if ( !PpmParkNumNodes )
    {
LABEL_55:
      PpmParkCalculateUnparkCount();
      return 1;
    }
    while ( 1 )
    {
      v5 = 0;
      v6 = PpmParkNodes + 1296LL * v4;
      v50 = v6;
      if ( !PpmHeteroHgsParkingEnabled || *(_WORD *)(*(_QWORD *)(v6 + 1288) + 640LL) || PpmHeteroPolicy )
        break;
LABEL_54:
      LODWORD(v46) = ++v4;
      if ( v4 >= PpmParkNumNodes )
        goto LABEL_55;
    }
    v7 = *(_QWORD *)(v6 + 1288);
    v8 = 0LL;
    v9 = *(_WORD *)(v6 + 4);
    v10 = 0LL;
    v11 = *(_QWORD *)(v6 + 16);
    LODWORD(v45) = 0;
    v12 = *(unsigned __int16 *)(v7 + 648);
    v13 = 0LL;
    LOWORD(v49) = v9;
    *((_QWORD *)&v48 + 1) = v11;
    *(_QWORD *)&v48 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v45, (unsigned __int16 **)&v48) )
    {
      Prcb = KeGetPrcb(v45);
      v15 = *(_DWORD *)(Prcb + 35288);
      if ( PpmCheckCurrentPipelineId != 5 )
        v15 -= *(_DWORD *)(Prcb + 35296);
      Base[v13] = PpmHeteroUtilityToNormalizedUtility(Prcb + 35248, v15);
      v17 = PpmHeteroUtilityToNormalizedUtility(v16, *(_DWORD *)(v16 + 52));
      v10 += v18;
      v8 += v17;
      v51[v13] = v17;
      v13 = (unsigned int)(v13 + 1);
    }
    qsort(Base, v13, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
    qsort(v51, v13, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
    v19 = *(unsigned __int16 *)(v6 + 10);
    v20 = 0LL;
    v21 = *(_QWORD *)(v6 + 1128);
    v22 = 0LL;
    v45 = 0LL;
    if ( (_DWORD)v19 )
    {
      v23 = (unsigned int)v19;
      v24 = (_QWORD *)(v21 + 8 * v19);
      do
      {
        v22 += *v24 * v10;
        v25 = v23;
        v19 = (unsigned int)(v19 - 1);
        --v23;
        v53[v19] = v22;
        v26 = *v24-- * v25;
        v20 += v26;
      }
      while ( (_DWORD)v19 );
      v45 = v20;
    }
    if ( (_DWORD)v12 )
    {
      v27 = v51;
      v28 = v12;
      do
      {
        v29 = *v27++;
        v8 -= v29;
        --v28;
      }
      while ( v28 );
    }
    v30 = *(_BYTE *)(*(_QWORD *)(v6 + 1288) + 640LL);
    if ( PpmHeteroHgsParkingEnabled )
      v30 = *(_BYTE *)(v6 + 10);
    v31 = v30;
    LODWORD(v32) = v12;
    if ( (unsigned int)v12 < v30 )
    {
      v33 = v47;
      while ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                              v20,
                              (unsigned int)Base[(unsigned int)v32],
                              v53[(unsigned int)v32],
                              *((unsigned __int8 *)v33 + (unsigned int)v32 + 307),
                              0) )
      {
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v45, v8, 0LL, v34, 0) )
          break;
        v35 = (unsigned int)v51[(unsigned int)v32];
        LODWORD(v32) = v32 + 1;
        v8 -= v35;
        if ( (unsigned int)v32 >= v31 )
          break;
        v20 = v45;
      }
      v6 = v50;
      if ( (unsigned int)v32 > (unsigned int)v12 )
      {
        v36 = 2;
        goto LABEL_39;
      }
      v20 = v45;
    }
    if ( (_DWORD)v32 )
    {
      while ( 1 )
      {
        v37 = v32;
        v32 = (unsigned int)(v32 - 1);
        v8 += (unsigned int)v51[v32];
        if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                             v20,
                             (unsigned int)Base[v32],
                             v53[v32],
                             *((unsigned __int8 *)v47 + v32 + 179),
                             0) )
        {
          if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v45, v8, 0LL, v38, 0) )
            break;
        }
        if ( !(_DWORD)v32 )
          goto LABEL_38;
        v20 = v45;
      }
      LODWORD(v32) = v37;
    }
LABEL_38:
    v36 = (unsigned int)v32 < (unsigned int)v12;
LABEL_39:
    if ( *(char *)(v6 + 1188) == v36 )
    {
      v39 = *(_BYTE *)(v6 + 1186) + 1;
      v40 = v39;
      *(_BYTE *)(v6 + 1186) = v39;
    }
    else
    {
      v40 = 1;
      *(_BYTE *)(v6 + 1188) = v36;
      *(_BYTE *)(v6 + 1186) = 1;
      v5 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v5 |= 0x10u;
LABEL_50:
      *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL) = (unsigned __int8)v32;
      goto LABEL_51;
    }
    if ( v36 == 2 )
    {
      if ( v40 >= *((unsigned __int8 *)v47 + 178) )
      {
        v5 |= 0x20u;
        goto LABEL_50;
      }
    }
    else if ( v36 == 1 && v40 >= *((unsigned __int8 *)v47 + 177) )
    {
      v5 |= 0x40u;
      goto LABEL_50;
    }
LABEL_51:
    v41 = PpmHeteroHgsParkingEnabled == 0;
    *(_BYTE *)(v6 + 1184) = *(_BYTE *)(v6 + 1184) & 0xF9 | 4;
    if ( !v41 )
    {
      v5 |= 0x80u;
      *(_WORD *)(*(_QWORD *)(v6 + 1288) + 648LL) = *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL);
      *(_WORD *)(v6 + 1264) = *(_WORD *)(*(_QWORD *)(v6 + 1288) + 646LL);
    }
    LODWORD(v44) = v5 | 1;
    LOBYTE(v43) = v32;
    PpmEventTraceHeteroResponse(v6, (__int64)Base, v53, v45, v43, v44);
    v4 = v46;
    goto LABEL_54;
  }
  return PpmCheckComputeHeteroResponseEx();
}
