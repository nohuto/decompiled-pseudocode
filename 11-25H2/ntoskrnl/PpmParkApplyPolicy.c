/*
 * XREFs of PpmParkApplyPolicy @ 0x1404E9D84
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140AB1350 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AB5804 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KeUpdateSoftParkRankList @ 0x14047B798 (KeUpdateSoftParkRankList.c)
 *     PpmConfigureRestrictionPolicy @ 0x140496590 (PpmConfigureRestrictionPolicy.c)
 *     PpmEventSoftParkRankListChanged @ 0x140496D74 (PpmEventSoftParkRankListChanged.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404BB1C8 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D9648 (PpmEventParkNodeParkHintChanged.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405CE05C (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkNodeCapChange @ 0x1405D4E84 (PpmEventParkNodeCapChange.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D51A8 (PpmEventSoftParkLatencyUpdate.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 PpmParkApplyPolicy()
{
  __int64 result; // rax
  __int64 *v1; // rbp
  unsigned __int8 v2; // r12
  char v3; // cl
  unsigned int v4; // r8d
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ett
  __int64 v8; // r9
  __int64 k; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  unsigned __int8 v12; // dl
  __int64 v13; // rbx
  int v14; // r8d
  unsigned __int8 v15; // dl
  char v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r15d
  char v20; // si
  unsigned __int8 *v21; // r14
  int v22; // r11d
  unsigned __int8 v23; // r10
  int v24; // eax
  unsigned __int8 v25; // r11
  unsigned __int8 v26; // bp
  unsigned __int8 v27; // cl
  char v28; // cl
  unsigned __int8 v29; // cl
  __int64 v30; // r13
  __int16 v31; // ax
  __int64 Prcb; // rax
  __int64 v33; // rdx
  char v34; // cl
  char v35; // al
  __int64 v36; // rdx
  char v37; // cl
  char v38; // al
  unsigned int j; // edx
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // r8
  char v45; // dl
  char v46; // al
  unsigned __int8 v47; // r9
  unsigned __int8 v48; // al
  unsigned __int8 v49; // r9
  unsigned __int8 v50; // al
  unsigned __int16 v51; // si
  __int64 v52; // rbx
  _BYTE *v53; // rdi
  __int64 v54; // r8
  char v55; // al
  __int64 v56; // rdx
  void *v57; // rdi
  unsigned __int64 v58; // r8
  unsigned int v59; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v61; // [rsp+20h] [rbp-98h]
  int v62; // [rsp+28h] [rbp-90h]
  char i; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v64; // [rsp+30h] [rbp-88h]
  __int64 v65; // [rsp+38h] [rbp-80h]
  __int64 v66; // [rsp+40h] [rbp-78h]
  __int128 v67; // [rsp+48h] [rbp-70h] BYREF
  __int64 v68; // [rsp+58h] [rbp-60h]
  __int64 *v69; // [rsp+60h] [rbp-58h]
  char v70; // [rsp+C0h] [rbp+8h]
  char v71; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v72; // [rsp+D0h] [rbp+18h]
  unsigned int v73; // [rsp+D8h] [rbp+20h] BYREF

  result = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v73 = 0;
  if ( !PpmParkNodes )
  {
    KeSoftParkedQueueThreshold = 0;
    return result;
  }
  v1 = &PpmCurrentProfile[0][61 * dword_140F0B70C + 5];
  v69 = v1;
  PpmParkEvalualteSmtUnparkPolicy(*((_BYTE *)v1 + 458));
  v70 = 0;
  v2 = 64;
  if ( !*(_QWORD *)(KeGetPrcb(0) + 35248) )
  {
    v3 = PpmParkInitialClass1UnParkCount;
    if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
      v3 = 64;
    v70 = 1;
    v2 = v3;
  }
  v4 = PpmParkNumNodes;
  v5 = PpmParkLpiCap;
  v6 = PpmParkThermalCap;
  v7 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
  v8 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
  v64 = v7 - v7 % (unsigned __int8)PpmParkGranularity;
  k = PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
  v10 = 0LL;
  v11 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes - k;
  v72 = 0;
  for ( i = v11; v72 < (unsigned int)PpmParkNumNodes; ++v72 )
  {
    v12 = v8;
    v13 = PpmParkNodes + 208LL * (unsigned __int16)v10;
    v14 = *(unsigned __int8 *)(v13 + 10);
    if ( (unsigned __int8)v8 > v14 - (unsigned __int8)PpmParkGranularity )
      v12 = v14 - PpmParkGranularity;
    *(_BYTE *)(v13 + 112) = v12;
    v5 -= v12;
    v15 = v11;
    if ( (unsigned __int8)v11 > v14 - (unsigned __int8)PpmParkGranularity )
      v15 = v14 - PpmParkGranularity;
    v16 = 0;
    v6 -= v15;
    *(_BYTE *)(v13 + 114) = v15;
    v17 = 0LL;
    v62 = v6;
    v18 = 0LL;
    v71 = 0;
    v19 = 0;
    v65 = 0LL;
    v66 = 0LL;
    if ( !*(_BYTE *)(v13 + 11) )
      goto LABEL_38;
    v20 = v70;
    do
    {
      v21 = (unsigned __int8 *)(*(_QWORD *)(v13 + 200) + 104LL * v19);
      v23 = *((_BYTE *)v1 + (v19 != 0) + 156);
      if ( v20 && v19 )
        v23 = 0;
      v24 = *v21;
      if ( (_BYTE)v24 )
      {
        v22 = *((unsigned __int8 *)v1 + (v19 != 0) + 158);
        v25 = (v24 - (unsigned __int8)((v24 * v22 + 50) / 0x64u)) % (unsigned __int8)PpmParkGranularity
            + (v24 * v22 + 50) / 0x64u;
        v26 = (v24 - (unsigned __int8)((v24 * (unsigned int)v23 + 50) / 0x64)) % (unsigned __int8)PpmParkGranularity
            + (v24 * (unsigned int)v23 + 50) / 0x64;
        if ( v19 )
        {
          v27 = v25;
          if ( v25 >= v2 )
            v27 = v2;
          v25 = v27;
        }
        if ( v26 )
        {
          v28 = (v24 - (unsigned __int8)((v24 * (unsigned int)v23 + 50) / 0x64)) % (unsigned __int8)PpmParkGranularity
              + (v24 * (unsigned int)v23 + 50) / 0x64;
          if ( (unsigned __int8)PpmParkGranularity > v26 )
            v28 = PpmParkGranularity;
          v26 = v28;
        }
        v29 = v25;
        v30 = 0LL;
        *(_QWORD *)&v67 = 0LL;
        if ( v25 < v26 )
          v29 = v26;
        v31 = *(_WORD *)(v13 + 4);
        v61 = v29;
        *((_QWORD *)&v67 + 1) = *((_QWORD *)v21 + 2);
        LOWORD(v68) = v31;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v73, (unsigned __int16 **)&v67) )
        {
          do
          {
            Prcb = KeGetPrcb(v73);
            if ( *(_BYTE *)(Prcb + 35404) )
              v30 |= *(_QWORD *)(Prcb + 200);
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v73, (unsigned __int16 **)&v67) );
          v20 = v70;
        }
        v18 = *((_QWORD *)v21 + 3) | v65;
        v17 = v30 | v66;
        *((_QWORD *)v21 + 3) = v30;
        v16 = v26 + v71;
        v21[1] = v26;
        v1 = v69;
        v71 = v16;
        v65 = v18;
        v66 = v17;
        v21[2] = v61;
      }
      ++v19;
    }
    while ( v19 < *(unsigned __int8 *)(v13 + 11) );
    v6 = v62;
    if ( v18 != v17 )
      PpmEventParkNodeParkHintChanged(*(_WORD *)(v13 + 4), *(_QWORD *)(v13 + 16), v17);
    if ( !v16 )
    {
LABEL_38:
      v33 = *(_QWORD *)(v13 + 200);
      *(_BYTE *)(v33 + 1) = PpmParkGranularity;
      v34 = PpmParkGranularity;
      if ( (unsigned __int8)PpmParkGranularity <= *(_BYTE *)(v33 + 2) )
        v34 = *(_BYTE *)(v33 + 2);
      *(_BYTE *)(v33 + 2) = v34;
    }
    if ( PpmHeteroPolicy == 2 )
    {
      *(_BYTE *)(v13 + 120) |= 4u;
      v35 = 1;
      v36 = *(_QWORD *)(v13 + 200);
      if ( *(_BYTE *)(v36 + 1) > 1u )
        v35 = *(_BYTE *)(v36 + 1);
      v37 = *(_BYTE *)(v36 + 2);
      *(_BYTE *)(v36 + 1) = v35;
      v38 = 1;
      if ( (unsigned __int8)v37 > 1u )
        v38 = v37;
      *(_BYTE *)(v36 + 2) = v38;
      for ( j = 1; j < *(unsigned __int8 *)(v13 + 11); *(_DWORD *)(*(_QWORD *)(v13 + 200) + 104 * v40 + 1) = 0 )
        v40 = j++;
    }
    else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v13 + 121) )
    {
      *(_BYTE *)(v13 + 120) |= 2u;
      v41 = 0;
      if ( *(_BYTE *)(v13 + 11) > 1u )
      {
        do
        {
          v42 = v41++;
          *(_DWORD *)(*(_QWORD *)(v13 + 200) + 104 * v42 + 1) = 0;
        }
        while ( v41 + 1 < *(unsigned __int8 *)(v13 + 11) );
      }
      v43 = 1;
      v44 = *(_QWORD *)(v13 + 200) + 104LL * v41;
      v45 = *(_BYTE *)(v44 + 2);
      if ( *(_BYTE *)(v44 + 1) > 1u )
        v43 = *(_BYTE *)(v44 + 1);
      *(_BYTE *)(v44 + 1) = v43;
      v46 = 1;
      if ( (unsigned __int8)v45 > 1u )
        v46 = v45;
      *(_BYTE *)(v44 + 2) = v46;
    }
    PpmConfigureRestrictionPolicy(v13);
    v10 = v72;
    v4 = PpmParkNumNodes;
    LOWORD(v10) = v72 + 1;
    LOBYTE(v11) = i;
    v8 = v64;
  }
  while ( v5 )
  {
    for ( k = 0LL; (unsigned __int16)k < v4; LOWORD(k) = k + 1 )
    {
      if ( !v5 )
        goto LABEL_74;
      v10 = PpmParkNodes + 208LL * (unsigned __int16)k;
      v47 = *(_BYTE *)(v10 + 10);
      if ( v47 )
      {
        v48 = *(_BYTE *)(v10 + 112) + PpmParkGranularity;
        if ( v48 < v47 )
        {
          *(_BYTE *)(v10 + 112) = v48;
          v5 -= (unsigned __int8)PpmParkGranularity;
        }
      }
    }
  }
LABEL_74:
  while ( v6 )
  {
    k = 0LL;
    if ( v4 )
    {
      while ( v6 )
      {
        v10 = PpmParkNodes + 208LL * (unsigned __int16)k;
        v49 = *(_BYTE *)(v10 + 10);
        if ( v49 )
        {
          v50 = PpmParkGranularity + *(_BYTE *)(v10 + 114);
          if ( v50 < v49 )
          {
            *(_BYTE *)(v10 + 114) = v50;
            v6 -= (unsigned __int8)PpmParkGranularity;
          }
        }
        LOWORD(k) = k + 1;
        if ( (unsigned __int16)k >= v4 )
          goto LABEL_74;
      }
      break;
    }
  }
  v51 = 0;
  if ( v4 )
  {
    do
    {
      v52 = PpmParkNodes + 208LL * v51;
      v53 = (_BYTE *)(v52 + 114);
      v54 = *(unsigned __int8 *)(v52 + 112);
      v10 = *(unsigned __int8 *)(v52 + 10) - (unsigned int)v54;
      if ( *(unsigned __int8 *)(v52 + 113) != (_DWORD)v10
        || (k = *(unsigned __int8 *)(v52 + 10) - (unsigned int)(unsigned __int8)*v53,
            *(unsigned __int8 *)(v52 + 115) != (_DWORD)k) )
      {
        LOBYTE(v8) = *v53;
        PpmEventParkNodeCapChange(*(unsigned __int16 *)(v52 + 4), *(_QWORD *)(v52 + 16), v54, v8);
        v55 = *(_BYTE *)(v52 + 10) - *(_BYTE *)(v52 + 112);
        LOBYTE(v10) = *(_BYTE *)(v52 + 10) - *v53;
        *(_BYTE *)(v52 + 115) = v10;
        *(_BYTE *)(v52 + 113) = v55;
      }
      ++v51;
    }
    while ( v51 < (unsigned int)PpmParkNumNodes );
  }
  if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline(v10, k) )
  {
    LOBYTE(v56) = 0;
    v59 = *((_DWORD *)v1 + 40);
    if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v59 || PpmHighPerfSoftParkLatencyUs < v59) )
    {
      LOBYTE(v56) = 1;
      v59 = PpmHighPerfSoftParkLatencyUs;
    }
    PpmEventSoftParkLatencyUpdate(0LL, v56, v59);
    if ( !v59 )
      goto LABEL_82;
    v58 = v59;
  }
  else
  {
    if ( !*((_DWORD *)v1 + 40) )
    {
LABEL_82:
      PpmParkSoftParkingEnabled = 0;
      KeSoftParkedQueueThreshold = 0;
      if ( PpmParkNewSoftParkRankList )
      {
        v57 = PpmParkOldSoftParkRankList;
        if ( PpmParkOldSoftParkRankList )
        {
          memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
          memset_0(v57, 255, 4LL * (unsigned int)KeMaximumProcessors);
          KeUpdateSoftParkRankList();
          PpmEventSoftParkRankListChanged();
        }
      }
      return PpmHeteroHgsCheckContainmentDecision();
    }
    v58 = *((unsigned int *)v1 + 40);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  PpmParkSoftParkingEnabled = 1;
  KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v58);
  return PpmHeteroHgsCheckContainmentDecision();
}
