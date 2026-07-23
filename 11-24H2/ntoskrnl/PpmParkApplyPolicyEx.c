/*
 * XREFs of PpmParkApplyPolicyEx @ 0x1405DE964
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeUpdateSoftParkRankList @ 0x1402B2C90 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x1402B2E68 (PpmEventSoftParkRankListChanged.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmConfigureRestrictionPolicy @ 0x140490D78 (PpmConfigureRestrictionPolicy.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B3B5C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D6F30 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventParkNodeCapChangeEx @ 0x1405DAA80 (PpmEventParkNodeCapChangeEx.c)
 *     PpmEventParkNodeParkHintChangedEx @ 0x1405DADD8 (PpmEventParkNodeParkHintChangedEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *PpmParkApplyPolicyEx()
{
  void *result; // rax
  __int64 *v1; // r15
  unsigned __int16 v2; // r12
  unsigned int v3; // ebx
  int v4; // r13d
  int v5; // edi
  unsigned int v6; // esi
  unsigned __int16 v7; // r14
  unsigned int v8; // r15d
  unsigned __int16 v9; // dx
  __int64 v10; // rbx
  int v11; // r8d
  unsigned __int16 v12; // dx
  __int16 v13; // si
  __int64 *v14; // r8
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
  char v50; // dl
  unsigned int v51; // ebx
  void *v52; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  char v54; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v55; // [rsp+2Ch] [rbp-DCh]
  __int64 v56; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v57; // [rsp+38h] [rbp-D0h]
  unsigned int v58; // [rsp+40h] [rbp-C8h]
  int v59; // [rsp+44h] [rbp-C4h]
  int v60; // [rsp+48h] [rbp-C0h]
  unsigned int v61; // [rsp+4Ch] [rbp-BCh]
  __int128 v62; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h]
  __int64 v64; // [rsp+68h] [rbp-A0h]
  struct _KAFFINITY_EX v65; // [rsp+78h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v66; // [rsp+188h] [rbp+80h] BYREF

  v63 = 0LL;
  LODWORD(v56) = 0;
  v62 = 0LL;
  memset_0(&v65.8, 0, sizeof(v65.8));
  result = memset_0(&v66.8, 0, sizeof(v66.8));
  if ( PpmParkNodes )
  {
    v1 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
    v57 = v1;
    PpmParkEvalualteSmtUnparkPolicy(*((_BYTE *)v1 + 458));
    v54 = 0;
    v2 = 64;
    if ( !*(_QWORD *)(KeGetPrcb(0) + 35248) )
    {
      if ( (unsigned int)PpmParkInitialClass1UnParkCount <= 0x40 )
        v2 = PpmParkInitialClass1UnParkCount;
      v54 = 1;
    }
    v3 = PpmParkNumNodes;
    v4 = PpmParkLpiCap;
    v5 = PpmParkThermalCap;
    *(_QWORD *)&v65.Count = 2097153LL;
    v58 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
        - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    v6 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
       - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    v61 = v6;
    memset_0(&v65.8, 0, sizeof(v65.8));
    *(_QWORD *)&v66.Count = 2097153LL;
    memset_0(&v66.8, 0, sizeof(v66.8));
    v55 = 0;
    v7 = 0;
    if ( v3 )
    {
      v8 = 0;
      do
      {
        v9 = v58;
        v10 = PpmParkNodes + 1296LL * v7;
        v64 = v10;
        v11 = *(unsigned __int16 *)(v10 + 10);
        if ( (unsigned __int16)v58 > v11 - (unsigned __int16)PpmParkGranularity )
          v9 = v11 - PpmParkGranularity;
        *(_WORD *)(v10 + 1168) = v9;
        v4 -= v9;
        v12 = v6;
        v59 = v4;
        if ( (unsigned __int16)v6 > v11 - (unsigned __int16)PpmParkGranularity )
          v12 = v11 - PpmParkGranularity;
        *(_WORD *)(v10 + 1172) = v12;
        v5 -= v12;
        v13 = 0;
        v60 = v5;
        memset_0(&v65.8, 0, 8LL * v65.Count);
        v65.Count = 1;
        memset_0(&v66.8, 0, 8LL * v66.Count);
        v66.Count = 1;
        if ( *(_BYTE *)(v10 + 12) )
        {
          v14 = v57;
          v15 = 0;
          do
          {
            v16 = (unsigned __int16 *)(*(_QWORD *)(v10 + 1288) + 640LL * v8);
            v18 = *((_BYTE *)v14 + (v8 != 0) + 156);
            if ( v54 && v8 )
              v18 = 0;
            v19 = *v16;
            if ( (_WORD)v19 )
            {
              v17 = *((unsigned __int8 *)v14 + (v8 != 0) + 158);
              v20 = (v19 - (unsigned __int16)((v19 * v17 + 50) / 0x64u)) % (unsigned __int16)PpmParkGranularity
                  + (v19 * v17 + 50) / 0x64u;
              v21 = (v19 - (unsigned __int16)((v19 * (unsigned int)v18 + 50) / 0x64))
                  % (unsigned __int16)PpmParkGranularity
                  + (v19 * (unsigned int)v18 + 50) / 0x64;
              if ( v8 && v20 >= v2 )
                v20 = v2;
              if ( v21 && (unsigned __int16)PpmParkGranularity > v21 )
                v21 = PpmParkGranularity;
              if ( v20 < v21 )
                v20 = v21;
              KiOrAffinityEx(&v66, (struct _KAFFINITY_EX *)(v16 + 152), &v66, v66.Size);
              memset_0(v16 + 156, 0, 8LL * v16[152]);
              v16[152] = 1;
              LOWORD(v63) = 0;
              v22 = *((_QWORD *)v16 + 6);
              *(_QWORD *)&v62 = v16 + 20;
              *((_QWORD *)&v62 + 1) = v22;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v56, (unsigned __int16 **)&v62) )
              {
                do
                {
                  if ( *(_BYTE *)(KeGetPrcb(v56) + 35404) )
                    KeAddProcessorAffinityEx(v16 + 152, v56);
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v56, (unsigned __int16 **)&v62) );
                v10 = v64;
              }
              KiOrAffinityEx(&v65, (struct _KAFFINITY_EX *)(v16 + 152), &v65, v65.Size);
              v14 = v57;
              v15 += v21;
              v16[2] = v20;
              v16[1] = v21;
            }
            ++v8;
          }
          while ( v8 < *(unsigned __int8 *)(v10 + 12) );
          v5 = v60;
          v7 = v55;
          v13 = v15;
          v4 = v59;
        }
        v8 = 0;
        if ( !(unsigned int)KeIsEqualAffinityEx(&v66.Count, &v65.Count) )
          PpmEventParkNodeParkHintChangedEx((_WORD *)(v10 + 48), &v65);
        if ( !v13 )
        {
          v23 = *(_QWORD *)(v10 + 1288);
          *(_WORD *)(v23 + 2) = PpmParkGranularity;
          v24 = PpmParkGranularity;
          if ( (unsigned __int16)PpmParkGranularity <= *(_WORD *)(v23 + 4) )
            v24 = *(_WORD *)(v23 + 4);
          *(_WORD *)(v23 + 4) = v24;
        }
        if ( PpmHeteroPolicy == 2 )
        {
          *(_BYTE *)(v10 + 1184) |= 4u;
          v25 = *(_QWORD *)(v10 + 1288);
          v26 = *(_WORD *)(v25 + 2);
          if ( (unsigned __int16)v26 <= 1u )
            v26 = 1;
          *(_WORD *)(v25 + 2) = v26;
          v27 = *(_WORD *)(v25 + 4);
          if ( (unsigned __int16)v27 <= 1u )
            v27 = 1;
          *(_WORD *)(v25 + 4) = v27;
          for ( i = 1; i < *(unsigned __int8 *)(v10 + 12); *(_QWORD *)(*(_QWORD *)(v10 + 1288) + 640 * v29 + 2) = 0LL )
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
              *(_QWORD *)(*(_QWORD *)(v10 + 1288) + 640 * v31 + 2) = 0LL;
            }
            while ( v30 + 1 < *(unsigned __int8 *)(v10 + 12) );
          }
          v32 = *(_QWORD *)(v10 + 1288) + 640LL * v30;
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
        ++v7;
        LOWORD(v6) = v61;
        v55 = v7;
      }
      while ( v7 < (unsigned int)PpmParkNumNodes );
      v1 = v57;
    }
    while ( v4 )
    {
      for ( j = 0; j < v3; ++j )
      {
        if ( !v4 )
          goto LABEL_75;
        v36 = PpmParkNodes + 1296LL * j;
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
LABEL_75:
    while ( v5 )
    {
      v39 = 0;
      if ( v3 )
      {
        while ( v5 )
        {
          v40 = PpmParkNodes + 1296LL * v39;
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
            goto LABEL_75;
        }
        break;
      }
    }
    v43 = 0;
    if ( v3 )
    {
      do
      {
        v44 = (_WORD *)(PpmParkNodes + 1296LL * v43);
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
      v1 = v57;
    }
    v50 = 0;
    v51 = *((_DWORD *)v1 + 40);
    if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v51 || PpmHighPerfSoftParkLatencyUs < v51) )
    {
      v51 = PpmHighPerfSoftParkLatencyUs;
      v50 = 1;
    }
    PpmEventSoftParkLatencyUpdate(0, v50, v51);
    if ( v51 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      PpmParkSoftParkingEnabled = 1;
      KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v51);
    }
    else
    {
      PpmParkSoftParkingEnabled = 0;
      KeSoftParkedQueueThreshold = 0;
      if ( PpmParkNewSoftParkRankList )
      {
        v52 = PpmParkOldSoftParkRankList;
        if ( PpmParkOldSoftParkRankList )
        {
          memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
          memset_0(v52, 255, 4LL * (unsigned int)KeMaximumProcessors);
          KeUpdateSoftParkRankList();
          PpmEventSoftParkRankListChanged();
        }
      }
    }
    return (void *)PpmHeteroHgsCheckContainmentDecision();
  }
  else
  {
    KeSoftParkedQueueThreshold = 0;
  }
  return result;
}
