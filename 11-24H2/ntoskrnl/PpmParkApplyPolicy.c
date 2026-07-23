/*
 * XREFs of PpmParkApplyPolicy @ 0x1404E4B18
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404C8A78 (PpmParkSetLpiCap.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074DEF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074E004 (PpmPerfSetMaximumOverride.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeUpdateSoftParkRankList @ 0x1402B2C90 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x1402B2E68 (PpmEventSoftParkRankListChanged.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmConfigureRestrictionPolicy @ 0x140490D78 (PpmConfigureRestrictionPolicy.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B3B5C (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D1B18 (PpmEventParkNodeParkHintChanged.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkNodeCapChange @ 0x1405D6C0C (PpmEventParkNodeCapChange.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D6F30 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmParkApplyPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 *v5; // rsi
  unsigned __int8 v6; // r12
  char v7; // cl
  __int64 v8; // r8
  int v9; // r14d
  int v10; // r15d
  unsigned int v11; // ett
  __int64 v12; // r9
  __int64 k; // rdx
  unsigned __int16 v14; // cx
  int v15; // r10d
  unsigned __int8 v16; // dl
  __int64 v17; // rbx
  int v18; // r8d
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  char v21; // r13
  __int64 v22; // r8
  unsigned int v23; // ebp
  char v24; // r15
  unsigned __int8 *v25; // rdi
  int v26; // r11d
  unsigned __int8 v27; // r10
  int v28; // eax
  unsigned __int8 v29; // r11
  unsigned __int8 v30; // si
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  unsigned __int8 v33; // cl
  __int64 v34; // r13
  __int16 v35; // ax
  __int64 Prcb; // rax
  __int16 v37; // ax
  __int16 v38; // cx
  __int64 v39; // rdx
  unsigned __int16 v40; // ax
  bool v41; // cc
  __int64 v42; // rax
  __int16 v43; // cx
  __int16 v44; // cx
  unsigned int j; // edx
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int16 v50; // ax
  __int16 v51; // ax
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int16 v54; // si
  __int64 v55; // rbx
  _BYTE *v56; // rdi
  _WORD *v57; // r14
  __int16 v58; // cx
  __int16 v59; // ax
  unsigned int v60; // ebx
  void *v61; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v63; // [rsp+20h] [rbp-98h]
  int v64; // [rsp+28h] [rbp-90h]
  char i; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v66; // [rsp+30h] [rbp-88h]
  __int64 v67; // [rsp+38h] [rbp-80h]
  __int64 v68; // [rsp+40h] [rbp-78h]
  __int64 *v69; // [rsp+48h] [rbp-70h]
  __int128 v70; // [rsp+50h] [rbp-68h] BYREF
  __int64 v71; // [rsp+60h] [rbp-58h]
  char v72; // [rsp+C0h] [rbp+8h]
  char v73; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v74; // [rsp+D0h] [rbp+18h]
  unsigned int v75; // [rsp+D8h] [rbp+20h] BYREF

  v70 = 0LL;
  v75 = 0;
  v71 = 0LL;
  result = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4);
  if ( (_DWORD)result )
    return PpmParkApplyPolicyEx();
  if ( PpmParkNodes )
  {
    v5 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
    v69 = v5;
    PpmParkEvalualteSmtUnparkPolicy(*((_BYTE *)v5 + 458));
    v72 = 0;
    v6 = 64;
    if ( !*(_QWORD *)(KeGetPrcb(0) + 35248) )
    {
      v7 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v7 = 64;
      v72 = 1;
      v6 = v7;
    }
    v8 = (unsigned int)PpmParkNumNodes;
    v9 = PpmParkLpiCap;
    v10 = PpmParkThermalCap;
    v11 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
    v12 = v11 - v11 % (unsigned __int16)PpmParkGranularity;
    v66 = v11 - v11 % (unsigned __int16)PpmParkGranularity;
    k = PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    v14 = 0;
    v15 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes - k;
    v74 = 0;
    for ( i = v15; v74 < (unsigned int)PpmParkNumNodes; ++v74 )
    {
      v16 = v12;
      v17 = PpmParkNodes + 1296LL * v14;
      v18 = *(unsigned __int16 *)(v17 + 10);
      if ( (unsigned __int8)v12 > v18 - (unsigned __int16)PpmParkGranularity )
        v16 = *(_BYTE *)(v17 + 10) - PpmParkGranularity;
      v9 -= v16;
      v19 = v15;
      *(_WORD *)(v17 + 1168) = v16;
      if ( (unsigned __int8)v15 > v18 - (unsigned __int16)PpmParkGranularity )
        v19 = *(_BYTE *)(v17 + 10) - PpmParkGranularity;
      v20 = 0LL;
      v10 -= v19;
      v73 = 0;
      v21 = 0;
      v22 = 0LL;
      *(_WORD *)(v17 + 1172) = v19;
      v23 = 0;
      v64 = v10;
      v67 = 0LL;
      v68 = 0LL;
      if ( !*(_BYTE *)(v17 + 12) )
        goto LABEL_39;
      v24 = v72;
      do
      {
        v25 = (unsigned __int8 *)(*(_QWORD *)(v17 + 1288) + 640LL * v23);
        v27 = *((_BYTE *)v5 + (v23 != 0) + 156);
        if ( v24 && v23 )
          v27 = 0;
        v28 = *v25;
        if ( (_BYTE)v28 )
        {
          v26 = *((unsigned __int8 *)v5 + (v23 != 0) + 158);
          v29 = (v28 - (unsigned __int8)((v28 * v26 + 50) / 0x64u)) % (unsigned __int16)PpmParkGranularity
              + (v28 * v26 + 50) / 0x64u;
          v30 = (v28 - (unsigned __int8)((v28 * (unsigned int)v27 + 50) / 0x64)) % (unsigned __int16)PpmParkGranularity
              + (v28 * (unsigned int)v27 + 50) / 0x64;
          if ( v23 )
          {
            v31 = v29;
            if ( v29 >= v6 )
              v31 = v6;
            v29 = v31;
          }
          if ( v30 )
          {
            v32 = (v28 - (unsigned __int8)((v28 * (unsigned int)v27 + 50) / 0x64))
                % (unsigned __int16)PpmParkGranularity
                + (v28 * (unsigned int)v27 + 50) / 0x64;
            if ( (unsigned __int8)PpmParkGranularity > v30 )
              v32 = PpmParkGranularity;
            v30 = v32;
          }
          v33 = v29;
          v34 = 0LL;
          *(_QWORD *)&v70 = 0LL;
          if ( v29 < v30 )
            v33 = v30;
          v35 = *(_WORD *)(v17 + 4);
          v63 = v33;
          *((_QWORD *)&v70 + 1) = *((_QWORD *)v25 + 3);
          LOWORD(v71) = v35;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v70) )
          {
            do
            {
              Prcb = KeGetPrcb(v75);
              if ( *(_BYTE *)(Prcb + 35404) )
                v34 |= *(_QWORD *)(Prcb + 200);
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v70) );
            v24 = v72;
          }
          v22 = *((_QWORD *)v25 + 4) | v67;
          v20 = v34 | v68;
          *((_QWORD *)v25 + 4) = v34;
          v21 = v30 + v73;
          *((_WORD *)v25 + 2) = v63;
          v37 = v30;
          v5 = v69;
          v73 = v21;
          v67 = v22;
          v68 = v20;
          *((_WORD *)v25 + 1) = v37;
        }
        ++v23;
      }
      while ( v23 < *(unsigned __int8 *)(v17 + 12) );
      v10 = v64;
      if ( v22 != v20 )
        PpmEventParkNodeParkHintChanged(*(_WORD *)(v17 + 4), *(_QWORD *)(v17 + 16), v20);
      if ( !v21 )
      {
LABEL_39:
        v38 = PpmParkGranularity;
        v39 = *(_QWORD *)(v17 + 1288);
        v40 = *(_WORD *)(v39 + 4);
        v41 = (unsigned __int16)PpmParkGranularity <= v40;
        *(_WORD *)(v39 + 2) = PpmParkGranularity;
        if ( v41 )
          v38 = v40;
        *(_WORD *)(v39 + 4) = v38;
      }
      if ( PpmHeteroPolicy == 2 )
      {
        *(_BYTE *)(v17 + 1184) |= 4u;
        v42 = *(_QWORD *)(v17 + 1288);
        v43 = *(_WORD *)(v42 + 2);
        if ( (unsigned __int16)v43 <= 1u )
          v43 = 1;
        *(_WORD *)(v42 + 2) = v43;
        v44 = *(_WORD *)(v42 + 4);
        if ( (unsigned __int16)v44 <= 1u )
          v44 = 1;
        *(_WORD *)(v42 + 4) = v44;
        for ( j = 1; j < *(unsigned __int8 *)(v17 + 12); *(_QWORD *)(*(_QWORD *)(v17 + 1288) + 640 * v46 + 2) = 0LL )
          v46 = j++;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v17 + 1185) )
      {
        *(_BYTE *)(v17 + 1184) |= 2u;
        v47 = 0;
        if ( *(_BYTE *)(v17 + 12) > 1u )
        {
          do
          {
            v48 = v47++;
            *(_QWORD *)(*(_QWORD *)(v17 + 1288) + 640 * v48 + 2) = 0LL;
          }
          while ( v47 + 1 < *(unsigned __int8 *)(v17 + 12) );
        }
        v49 = *(_QWORD *)(v17 + 1288) + 640LL * v47;
        v50 = *(_WORD *)(v49 + 2);
        if ( (unsigned __int16)v50 <= 1u )
          v50 = 1;
        *(_WORD *)(v49 + 2) = v50;
        v51 = *(_WORD *)(v49 + 4);
        if ( (unsigned __int16)v51 <= 1u )
          v51 = 1;
        *(_WORD *)(v49 + 4) = v51;
      }
      PpmConfigureRestrictionPolicy(v17);
      v8 = (unsigned int)PpmParkNumNodes;
      v14 = v74 + 1;
      LOBYTE(v15) = i;
      v12 = v66;
    }
    while ( v9 )
    {
      for ( k = 0LL; (unsigned __int16)k < (unsigned int)v8; LOWORD(k) = k + 1 )
      {
        if ( !v9 )
          goto LABEL_75;
        v52 = PpmParkNodes + 1296LL * (unsigned __int16)k;
        v12 = *(unsigned __int16 *)(v52 + 10);
        if ( (_WORD)v12 && (unsigned __int8)(PpmParkGranularity + *(_BYTE *)(v52 + 1168)) < (unsigned __int16)v12 )
        {
          *(_WORD *)(v52 + 1168) += PpmParkGranularity;
          v9 -= (unsigned __int16)PpmParkGranularity;
        }
      }
    }
LABEL_75:
    while ( v10 )
    {
      k = 0LL;
      if ( (_DWORD)v8 )
      {
        while ( v10 )
        {
          v53 = PpmParkNodes + 1296LL * (unsigned __int16)k;
          v12 = *(unsigned __int16 *)(v53 + 10);
          if ( (_WORD)v12 && (unsigned __int8)(PpmParkGranularity + *(_BYTE *)(v53 + 1172)) < (unsigned __int16)v12 )
          {
            *(_WORD *)(v53 + 1172) += PpmParkGranularity;
            v10 -= (unsigned __int16)PpmParkGranularity;
          }
          LOWORD(k) = k + 1;
          if ( (unsigned __int16)k >= (unsigned int)v8 )
            goto LABEL_75;
        }
        break;
      }
    }
    v54 = 0;
    if ( (_DWORD)v8 )
    {
      do
      {
        v55 = PpmParkNodes + 1296LL * v54;
        v56 = (_BYTE *)(v55 + 1172);
        v57 = (_WORD *)(v55 + 1174);
        if ( *(unsigned __int16 *)(v55 + 1170) != *(unsigned __int16 *)(v55 + 10) - *(unsigned __int16 *)(v55 + 1168)
          || (k = *(unsigned __int16 *)(v55 + 10) - (unsigned int)*(unsigned __int16 *)v56,
              (unsigned __int16)*v57 != (_DWORD)k) )
        {
          LOBYTE(v12) = *v56;
          LOBYTE(v8) = *(_BYTE *)(v55 + 1168);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v55 + 4), *(_QWORD *)(v55 + 16), v8, v12);
          v58 = *(_WORD *)(v55 + 10);
          v59 = v58 - *(_WORD *)(v55 + 1168);
          *v57 = v58 - *(_WORD *)v56;
          *(_WORD *)(v55 + 1170) = v59;
        }
        ++v54;
      }
      while ( v54 < (unsigned int)PpmParkNumNodes );
    }
    LOBYTE(k) = 0;
    v60 = *((_DWORD *)v69 + 40);
    if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v60 || PpmHighPerfSoftParkLatencyUs < v60) )
    {
      LOBYTE(k) = 1;
      v60 = PpmHighPerfSoftParkLatencyUs;
    }
    PpmEventSoftParkLatencyUpdate(0LL, k, v60);
    if ( v60 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      PpmParkSoftParkingEnabled = 1;
      KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v60);
    }
    else
    {
      PpmParkSoftParkingEnabled = 0;
      KeSoftParkedQueueThreshold = 0;
      if ( PpmParkNewSoftParkRankList )
      {
        v61 = PpmParkOldSoftParkRankList;
        if ( PpmParkOldSoftParkRankList )
        {
          memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
          memset_0(v61, 255, 4LL * (unsigned int)KeMaximumProcessors);
          KeUpdateSoftParkRankList();
          PpmEventSoftParkRankListChanged();
        }
      }
    }
    return PpmHeteroHgsCheckContainmentDecision();
  }
  else
  {
    KeSoftParkedQueueThreshold = 0;
  }
  return result;
}
