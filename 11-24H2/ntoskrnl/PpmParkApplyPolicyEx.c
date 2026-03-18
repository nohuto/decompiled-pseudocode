/*
 * XREFs of PpmParkApplyPolicyEx @ 0x1405E1344
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeUpdateSoftParkRankList @ 0x140354F60 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x140355138 (PpmEventSoftParkRankListChanged.c)
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmConfigureRestrictionPolicy @ 0x1404963E8 (PpmConfigureRestrictionPolicy.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B8EA0 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D9C14 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventParkNodeCapChangeEx @ 0x1405DDC00 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeParkHintChangedEx @ 0x1405DDF58 (PpmEventParkNodeParkHintChangedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *PpmParkApplyPolicyEx()
{
  void *result; // rax
  __int64 *v1; // r14
  unsigned __int16 v2; // r12
  unsigned int v3; // ebx
  int v4; // r13d
  int v5; // edi
  unsigned int v6; // r15d
  unsigned int v7; // esi
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  __int64 v10; // rbx
  int v11; // r8d
  unsigned __int16 v12; // dx
  __int16 v13; // si
  unsigned int v14; // r15d
  __int16 v15; // r13
  unsigned __int16 *v16; // rsi
  int v17; // edx
  unsigned __int8 v18; // r10
  int v19; // eax
  unsigned __int16 v20; // r14
  unsigned __int16 v21; // di
  __int64 v22; // rax
  __int64 v23; // rdx
  __int16 v24; // cx
  __int64 v25; // rax
  __int16 v26; // cx
  __int16 v27; // cx
  unsigned int i; // edx
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int16 v33; // ax
  __int16 v34; // ax
  unsigned __int16 j; // dx
  __int64 v36; // rcx
  unsigned __int16 v37; // r8
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // dx
  __int64 v40; // rcx
  unsigned __int16 v41; // r8
  unsigned __int16 v42; // ax
  unsigned __int16 v43; // di
  _WORD *v44; // rbx
  __int16 *v45; // rsi
  int v46; // r8d
  _WORD *v47; // r14
  __int16 v48; // cx
  __int16 v49; // ax
  void *v50; // rdi
  unsigned __int64 v51; // r8
  char v52; // dl
  unsigned int v53; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  char v55; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v56; // [rsp+2Ch] [rbp-DCh]
  unsigned int v57; // [rsp+30h] [rbp-D8h] BYREF
  int v58; // [rsp+34h] [rbp-D4h]
  int v59; // [rsp+38h] [rbp-D0h]
  unsigned int v60; // [rsp+3Ch] [rbp-CCh]
  __int64 v61; // [rsp+40h] [rbp-C8h]
  __int64 *v62; // [rsp+48h] [rbp-C0h]
  __int128 v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  struct _KAFFINITY_EX v66; // [rsp+78h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v67; // [rsp+188h] [rbp+80h] BYREF

  v64 = 0LL;
  v57 = 0;
  v63 = 0LL;
  memset_0(&v66.8, 0, sizeof(v66.8));
  result = memset_0(&v67.8, 0, sizeof(v67.8));
  if ( !PpmParkNodes )
  {
    KeSoftParkedQueueThreshold = 0;
    return result;
  }
  v1 = &PpmCurrentProfile[0][61 * dword_140F0BA4C + 5];
  v62 = v1;
  PpmParkEvalualteSmtUnparkPolicy(*((_BYTE *)v1 + 458));
  v55 = 0;
  v2 = 64;
  if ( !*(_QWORD *)(KeGetPrcb(0) + 35248) )
  {
    if ( (unsigned int)PpmParkInitialClass1UnParkCount <= 0x40 )
      v2 = PpmParkInitialClass1UnParkCount;
    v55 = 1;
  }
  v3 = PpmParkNumNodes;
  v4 = PpmParkLpiCap;
  v5 = PpmParkThermalCap;
  *(_QWORD *)&v66.Count = 2097153LL;
  v6 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
     - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
  LODWORD(v61) = v6;
  v7 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
     - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
  v60 = v7;
  memset_0(&v66.8, 0, sizeof(v66.8));
  *(_QWORD *)&v67.Count = 2097153LL;
  memset_0(&v67.8, 0, sizeof(v67.8));
  v8 = 0;
  v56 = 0;
  if ( v3 )
  {
    do
    {
      v9 = v6;
      v10 = PpmParkNodes + 1288LL * v8;
      v65 = v10;
      v11 = *(unsigned __int16 *)(v10 + 10);
      if ( (unsigned __int16)v6 > v11 - (unsigned __int16)PpmParkGranularity )
        v9 = v11 - PpmParkGranularity;
      *(_WORD *)(v10 + 1168) = v9;
      v4 -= v9;
      v12 = v7;
      v58 = v4;
      if ( (unsigned __int16)v7 > v11 - (unsigned __int16)PpmParkGranularity )
        v12 = v11 - PpmParkGranularity;
      *(_WORD *)(v10 + 1172) = v12;
      v5 -= v12;
      v13 = 0;
      v59 = v5;
      memset_0(&v66.8, 0, 8LL * v66.Count);
      v66.Count = 1;
      memset_0(&v67.8, 0, 8LL * v67.Count);
      v67.Count = 1;
      v14 = 0;
      if ( *(_BYTE *)(v10 + 12) )
      {
        v15 = 0;
        do
        {
          v16 = (unsigned __int16 *)(*(_QWORD *)(v10 + 1280) + 640LL * v14);
          v18 = *((_BYTE *)v1 + (v14 != 0) + 156);
          if ( v55 && v14 )
            v18 = 0;
          v19 = *v16;
          if ( (_WORD)v19 )
          {
            v17 = *((unsigned __int8 *)v1 + (v14 != 0) + 158);
            v20 = (v19 - (unsigned __int16)((v19 * v17 + 50) / 0x64u)) % (unsigned __int16)PpmParkGranularity
                + (v19 * v17 + 50) / 0x64u;
            v21 = (v19 - (unsigned __int16)((v19 * (unsigned int)v18 + 50) / 0x64))
                % (unsigned __int16)PpmParkGranularity
                + (v19 * (unsigned int)v18 + 50) / 0x64;
            if ( v14 && v20 >= v2 )
              v20 = v2;
            if ( v21 && (unsigned __int16)PpmParkGranularity > v21 )
              v21 = PpmParkGranularity;
            if ( v20 < v21 )
              v20 = v21;
            KiOrAffinityEx(&v67, (struct _KAFFINITY_EX *)(v16 + 152), &v67, v67.Size);
            memset_0(v16 + 156, 0, 8LL * v16[152]);
            v16[152] = 1;
            LOWORD(v64) = 0;
            v22 = *((_QWORD *)v16 + 6);
            *(_QWORD *)&v63 = v16 + 20;
            *((_QWORD *)&v63 + 1) = v22;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v57, (unsigned __int16 **)&v63) )
            {
              do
              {
                if ( *(_BYTE *)(KeGetPrcb(v57) + 35404) )
                  KeAddProcessorAffinityEx(v16 + 152, v57);
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v57, (unsigned __int16 **)&v63) );
              v10 = v65;
            }
            KiOrAffinityEx(&v66, (struct _KAFFINITY_EX *)(v16 + 152), &v66, v66.Size);
            v15 += v21;
            v16[2] = v20;
            v1 = v62;
            v16[1] = v21;
          }
          ++v14;
        }
        while ( v14 < *(unsigned __int8 *)(v10 + 12) );
        v5 = v59;
        v13 = v15;
        v4 = v58;
      }
      if ( !(unsigned int)KeIsEqualAffinityEx(&v67.Count, &v66.Count) )
        PpmEventParkNodeParkHintChangedEx((_WORD *)(v10 + 48), &v66);
      if ( !v13 )
      {
        v23 = *(_QWORD *)(v10 + 1280);
        *(_WORD *)(v23 + 2) = PpmParkGranularity;
        v24 = PpmParkGranularity;
        if ( (unsigned __int16)PpmParkGranularity <= *(_WORD *)(v23 + 4) )
          v24 = *(_WORD *)(v23 + 4);
        *(_WORD *)(v23 + 4) = v24;
      }
      if ( PpmHeteroPolicy == 2 )
      {
        *(_BYTE *)(v10 + 1184) |= 4u;
        v25 = *(_QWORD *)(v10 + 1280);
        v26 = *(_WORD *)(v25 + 2);
        if ( (unsigned __int16)v26 <= 1u )
          v26 = 1;
        *(_WORD *)(v25 + 2) = v26;
        v27 = *(_WORD *)(v25 + 4);
        if ( (unsigned __int16)v27 <= 1u )
          v27 = 1;
        *(_WORD *)(v25 + 4) = v27;
        for ( i = 1; i < *(unsigned __int8 *)(v10 + 12); *(_QWORD *)(*(_QWORD *)(v10 + 1280) + 640 * v29 + 2) = 0LL )
          v29 = i++;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v10 + 1185) )
      {
        *(_BYTE *)(v10 + 1184) |= 2u;
        v30 = 0;
        if ( *(_BYTE *)(v10 + 12) > 1u )
        {
          do
          {
            v31 = v30++;
            *(_QWORD *)(*(_QWORD *)(v10 + 1280) + 640 * v31 + 2) = 0LL;
          }
          while ( v30 + 1 < *(unsigned __int8 *)(v10 + 12) );
        }
        v32 = *(_QWORD *)(v10 + 1280) + 640LL * v30;
        v33 = *(_WORD *)(v32 + 2);
        if ( (unsigned __int16)v33 <= 1u )
          v33 = 1;
        *(_WORD *)(v32 + 2) = v33;
        v34 = *(_WORD *)(v32 + 4);
        if ( (unsigned __int16)v34 <= 1u )
          v34 = 1;
        *(_WORD *)(v32 + 4) = v34;
      }
      PpmConfigureRestrictionPolicy(v10);
      v3 = PpmParkNumNodes;
      v8 = v56 + 1;
      LOWORD(v7) = v60;
      LOWORD(v6) = v61;
      v56 = v8;
    }
    while ( v8 < (unsigned int)PpmParkNumNodes );
  }
  while ( v4 )
  {
    for ( j = 0; j < v3; ++j )
    {
      if ( !v4 )
        goto LABEL_73;
      v36 = PpmParkNodes + 1288LL * j;
      v37 = *(_WORD *)(v36 + 10);
      if ( v37 )
      {
        v38 = *(_WORD *)(v36 + 1168) + PpmParkGranularity;
        if ( v38 < v37 )
        {
          *(_WORD *)(v36 + 1168) = v38;
          v4 -= (unsigned __int16)PpmParkGranularity;
        }
      }
    }
  }
LABEL_73:
  while ( v5 )
  {
    v39 = 0;
    if ( v3 )
    {
      while ( v5 )
      {
        v40 = PpmParkNodes + 1288LL * v39;
        v41 = *(_WORD *)(v40 + 10);
        if ( v41 )
        {
          v42 = PpmParkGranularity + *(_WORD *)(v40 + 1172);
          if ( v42 < v41 )
          {
            *(_WORD *)(v40 + 1172) = v42;
            v5 -= (unsigned __int16)PpmParkGranularity;
          }
        }
        if ( ++v39 >= v3 )
          goto LABEL_73;
      }
      break;
    }
  }
  v43 = 0;
  if ( v3 )
  {
    do
    {
      v44 = (_WORD *)(PpmParkNodes + 1288LL * v43);
      v45 = v44 + 586;
      v46 = (unsigned __int16)v44[584];
      v47 = v44 + 587;
      if ( (unsigned __int16)v44[585] != (unsigned __int16)v44[5] - v46
        || (unsigned __int16)*v47 != (unsigned __int16)v44[5] - (unsigned __int16)*v45 )
      {
        PpmEventParkNodeCapChangeEx(v43, v44 + 24, v46, *v45);
        v48 = v44[5];
        v49 = v48 - v44[584];
        *v47 = v48 - *v45;
        v44[585] = v49;
      }
      ++v43;
    }
    while ( v43 < (unsigned int)PpmParkNumNodes );
  }
  if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
  {
    v52 = 0;
    v53 = *((_DWORD *)v62 + 40);
    if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v53 || PpmHighPerfSoftParkLatencyUs < v53) )
    {
      v52 = 1;
      v53 = PpmHighPerfSoftParkLatencyUs;
    }
    PpmEventSoftParkLatencyUpdate(0, v52, v53);
    if ( !v53 )
      goto LABEL_81;
    v51 = v53;
  }
  else
  {
    if ( !*((_DWORD *)v62 + 40) )
    {
LABEL_81:
      PpmParkSoftParkingEnabled = 0;
      KeSoftParkedQueueThreshold = 0;
      if ( PpmParkNewSoftParkRankList )
      {
        v50 = PpmParkOldSoftParkRankList;
        if ( PpmParkOldSoftParkRankList )
        {
          memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
          memset_0(v50, 255, 4LL * (unsigned int)KeMaximumProcessors);
          KeUpdateSoftParkRankList();
          PpmEventSoftParkRankListChanged();
        }
      }
      return (void *)PpmHeteroHgsCheckContainmentDecision();
    }
    v51 = *((unsigned int *)v62 + 40);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  PpmParkSoftParkingEnabled = 1;
  KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v51);
  return (void *)PpmHeteroHgsCheckContainmentDecision();
}
