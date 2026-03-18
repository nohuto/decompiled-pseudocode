/*
 * XREFs of PpmParkApplyPolicy @ 0x1404ED2F4
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404CF9C8 (PpmParkSetLpiCap.c)
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074FBC8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074FCE0 (PpmPerfSetMaximumOverride.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140ACAF9C (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeUpdateSoftParkRankList @ 0x140354F60 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x140355138 (PpmEventSoftParkRankListChanged.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmConfigureRestrictionPolicy @ 0x1404963E8 (PpmConfigureRestrictionPolicy.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x1404B8EA0 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     PpmEventParkNodeParkHintChanged @ 0x1404D86C8 (PpmEventParkNodeParkHintChanged.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkNodeCapChange @ 0x1405D98F0 (PpmEventParkNodeCapChange.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1405D9C14 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PpmParkApplyPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 *v6; // rsi
  unsigned __int8 v7; // r12
  char v8; // cl
  __int64 v9; // r8
  int v10; // r14d
  int v11; // r15d
  unsigned int v12; // ett
  __int64 v13; // r9
  __int64 j; // rdx
  __int64 v15; // rcx
  int v16; // r10d
  unsigned __int8 v17; // dl
  __int64 v18; // rbx
  int v19; // r8d
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  char v22; // r13
  __int64 v23; // r8
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
  __int16 v34; // ax
  __int64 v35; // r13
  __int64 v36; // rcx
  __int64 Prcb; // rax
  __int16 v38; // ax
  __int16 v39; // cx
  __int64 v40; // rdx
  unsigned __int16 v41; // ax
  bool v42; // cc
  __int64 v43; // rax
  __int16 v44; // cx
  __int16 v45; // cx
  unsigned int i; // edx
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int16 v51; // ax
  __int16 v52; // ax
  unsigned __int16 v53; // si
  __int64 v54; // rbx
  _BYTE *v55; // rdi
  _WORD *v56; // r14
  __int16 v57; // ax
  __int64 v58; // rdx
  void *v59; // rdi
  unsigned __int64 v60; // r8
  unsigned int v61; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v63; // [rsp+20h] [rbp-98h]
  int v64; // [rsp+28h] [rbp-90h]
  char v65; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v66; // [rsp+30h] [rbp-88h]
  __int64 *v67; // [rsp+38h] [rbp-80h]
  __int64 v68; // [rsp+40h] [rbp-78h]
  __int64 v69; // [rsp+48h] [rbp-70h]
  __int128 v70; // [rsp+50h] [rbp-68h] BYREF
  __int64 v71; // [rsp+60h] [rbp-58h]
  char v72; // [rsp+C0h] [rbp+8h]
  char v73; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v74; // [rsp+D0h] [rbp+18h]
  unsigned int v75; // [rsp+D8h] [rbp+20h] BYREF

  v4 = 0;
  v70 = 0LL;
  v75 = 0;
  v71 = 0LL;
  result = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4);
  if ( !(_DWORD)result )
  {
    if ( !PpmParkNodes )
    {
      KeSoftParkedQueueThreshold = 0;
      return result;
    }
    v6 = &PpmCurrentProfile[0][61 * dword_140F0BA4C + 5];
    v67 = v6;
    PpmParkEvalualteSmtUnparkPolicy(*((_BYTE *)v6 + 458));
    v72 = 0;
    v7 = 64;
    if ( !*(_QWORD *)(KeGetPrcb(0) + 35248) )
    {
      v8 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v8 = 64;
      v72 = 1;
      v7 = v8;
    }
    v9 = (unsigned int)PpmParkNumNodes;
    v10 = PpmParkLpiCap;
    v11 = PpmParkThermalCap;
    v12 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes;
    v13 = v12 - v12 % (unsigned __int16)PpmParkGranularity;
    v66 = v12 - v12 % (unsigned __int16)PpmParkGranularity;
    j = PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    v15 = 0LL;
    v16 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes - j;
    v74 = 0;
    v65 = v16;
    while ( v74 < (unsigned int)PpmParkNumNodes )
    {
      v17 = v13;
      v18 = PpmParkNodes + 1288LL * (unsigned __int16)v15;
      v19 = *(unsigned __int16 *)(v18 + 10);
      if ( (unsigned __int8)v13 > v19 - (unsigned __int16)PpmParkGranularity )
        v17 = *(_BYTE *)(v18 + 10) - PpmParkGranularity;
      v10 -= v17;
      v20 = v16;
      *(_WORD *)(v18 + 1168) = v17;
      if ( (unsigned __int8)v16 > v19 - (unsigned __int16)PpmParkGranularity )
        v20 = *(_BYTE *)(v18 + 10) - PpmParkGranularity;
      v11 -= v20;
      v73 = 0;
      v21 = 0LL;
      v22 = 0;
      *(_WORD *)(v18 + 1172) = v20;
      v23 = 0LL;
      v64 = v11;
      v68 = 0LL;
      v69 = 0LL;
      if ( *(_BYTE *)(v18 + 12) )
      {
        v24 = v72;
        do
        {
          v25 = (unsigned __int8 *)(*(_QWORD *)(v18 + 1280) + 640LL * v4);
          v27 = *((_BYTE *)v6 + (v4 != 0) + 156);
          if ( v24 && v4 )
            v27 = 0;
          v28 = *v25;
          if ( (_BYTE)v28 )
          {
            v26 = *((unsigned __int8 *)v6 + (v4 != 0) + 158);
            v29 = (v28 - (unsigned __int8)((v28 * v26 + 50) / 0x64u)) % (unsigned __int16)PpmParkGranularity
                + (v28 * v26 + 50) / 0x64u;
            v30 = (v28 - (unsigned __int8)((v28 * (unsigned int)v27 + 50) / 0x64))
                % (unsigned __int16)PpmParkGranularity
                + (v28 * (unsigned int)v27 + 50) / 0x64;
            if ( v4 )
            {
              v31 = v29;
              if ( v29 >= v7 )
                v31 = v7;
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
            if ( v29 < v30 )
              v33 = v30;
            v34 = *(_WORD *)(v18 + 4);
            v63 = v33;
            v35 = 0LL;
            v36 = *((_QWORD *)v25 + 3);
            *(_QWORD *)&v70 = 0LL;
            *((_QWORD *)&v70 + 1) = v36;
            LOWORD(v71) = v34;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v70) )
            {
              do
              {
                Prcb = KeGetPrcb(v75);
                if ( *(_BYTE *)(Prcb + 35404) )
                  v35 |= *(_QWORD *)(Prcb + 200);
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v75, (unsigned __int16 **)&v70) );
              v24 = v72;
            }
            v23 = *((_QWORD *)v25 + 4) | v68;
            v21 = v35 | v69;
            *((_QWORD *)v25 + 4) = v35;
            v22 = v30 + v73;
            *((_WORD *)v25 + 2) = v63;
            v38 = v30;
            v6 = v67;
            v73 = v22;
            v68 = v23;
            v69 = v21;
            *((_WORD *)v25 + 1) = v38;
          }
          ++v4;
        }
        while ( v4 < *(unsigned __int8 *)(v18 + 12) );
        v11 = v64;
        if ( v23 != v21 )
          PpmEventParkNodeParkHintChanged(*(_WORD *)(v18 + 4), *(_QWORD *)(v18 + 16), v21);
        v4 = 0;
        if ( v22 )
          goto LABEL_44;
      }
      else
      {
        v4 = 0;
      }
      v39 = PpmParkGranularity;
      v40 = *(_QWORD *)(v18 + 1280);
      v41 = *(_WORD *)(v40 + 4);
      v42 = (unsigned __int16)PpmParkGranularity <= v41;
      *(_WORD *)(v40 + 2) = PpmParkGranularity;
      if ( v42 )
        v39 = v41;
      *(_WORD *)(v40 + 4) = v39;
LABEL_44:
      if ( PpmHeteroPolicy == 2 )
      {
        *(_BYTE *)(v18 + 1184) |= 4u;
        v43 = *(_QWORD *)(v18 + 1280);
        v44 = *(_WORD *)(v43 + 2);
        if ( (unsigned __int16)v44 <= 1u )
          v44 = 1;
        *(_WORD *)(v43 + 2) = v44;
        v45 = *(_WORD *)(v43 + 4);
        if ( (unsigned __int16)v45 <= 1u )
          v45 = 1;
        *(_WORD *)(v43 + 4) = v45;
        for ( i = 1; i < *(unsigned __int8 *)(v18 + 12); *(_QWORD *)(*(_QWORD *)(v18 + 1280) + 640 * v47 + 2) = 0LL )
          v47 = i++;
      }
      else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v18 + 1185) )
      {
        *(_BYTE *)(v18 + 1184) |= 2u;
        v48 = 0;
        if ( *(_BYTE *)(v18 + 12) > 1u )
        {
          do
          {
            v49 = v48++;
            *(_QWORD *)(*(_QWORD *)(v18 + 1280) + 640 * v49 + 2) = 0LL;
          }
          while ( v48 + 1 < *(unsigned __int8 *)(v18 + 12) );
        }
        v50 = *(_QWORD *)(v18 + 1280) + 640LL * v48;
        v51 = *(_WORD *)(v50 + 2);
        if ( (unsigned __int16)v51 <= 1u )
          v51 = 1;
        *(_WORD *)(v50 + 2) = v51;
        v52 = *(_WORD *)(v50 + 4);
        if ( (unsigned __int16)v52 <= 1u )
          v52 = 1;
        *(_WORD *)(v50 + 4) = v52;
      }
      PpmConfigureRestrictionPolicy(v18);
      v15 = v74;
      v9 = (unsigned int)PpmParkNumNodes;
      LOWORD(v15) = v74 + 1;
      LOBYTE(v16) = v65;
      v13 = v66;
      ++v74;
    }
    while ( v10 )
    {
      for ( j = 0LL; (unsigned __int16)j < (unsigned int)v9; LOWORD(j) = j + 1 )
      {
        if ( !v10 )
          goto LABEL_77;
        v15 = PpmParkNodes + 1288LL * (unsigned __int16)j;
        v13 = *(unsigned __int16 *)(v15 + 10);
        if ( (_WORD)v13 && (unsigned __int8)(PpmParkGranularity + *(_BYTE *)(v15 + 1168)) < (unsigned __int16)v13 )
        {
          *(_WORD *)(v15 + 1168) += PpmParkGranularity;
          v10 -= (unsigned __int16)PpmParkGranularity;
        }
      }
    }
LABEL_77:
    while ( v11 )
    {
      j = 0LL;
      if ( (_DWORD)v9 )
      {
        while ( v11 )
        {
          v15 = PpmParkNodes + 1288LL * (unsigned __int16)j;
          v13 = *(unsigned __int16 *)(v15 + 10);
          if ( (_WORD)v13 && (unsigned __int8)(PpmParkGranularity + *(_BYTE *)(v15 + 1172)) < (unsigned __int16)v13 )
          {
            *(_WORD *)(v15 + 1172) += PpmParkGranularity;
            v11 -= (unsigned __int16)PpmParkGranularity;
          }
          LOWORD(j) = j + 1;
          if ( (unsigned __int16)j >= (unsigned int)v9 )
            goto LABEL_77;
        }
        break;
      }
    }
    v53 = 0;
    if ( (_DWORD)v9 )
    {
      do
      {
        v54 = PpmParkNodes + 1288LL * v53;
        v55 = (_BYTE *)(v54 + 1172);
        v56 = (_WORD *)(v54 + 1174);
        v15 = *(unsigned __int16 *)(v54 + 10) - (unsigned int)*(unsigned __int16 *)(v54 + 1168);
        if ( *(unsigned __int16 *)(v54 + 1170) != (_DWORD)v15
          || (j = *(unsigned __int16 *)(v54 + 10) - (unsigned int)*(unsigned __int16 *)v55,
              (unsigned __int16)*v56 != (_DWORD)j) )
        {
          LOBYTE(v13) = *v55;
          LOBYTE(v9) = *(_BYTE *)(v54 + 1168);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v54 + 4), *(_QWORD *)(v54 + 16), v9, v13);
          v15 = *(unsigned __int16 *)(v54 + 10);
          v57 = v15 - *(_WORD *)(v54 + 1168);
          LOWORD(v15) = v15 - *(_WORD *)v55;
          *v56 = v15;
          *(_WORD *)(v54 + 1170) = v57;
        }
        ++v53;
      }
      while ( v53 < (unsigned int)PpmParkNumNodes );
    }
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline(v15, j) )
    {
      LOBYTE(v58) = 0;
      v61 = *((_DWORD *)v67 + 40);
      if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v61 || PpmHighPerfSoftParkLatencyUs < v61) )
      {
        LOBYTE(v58) = 1;
        v61 = PpmHighPerfSoftParkLatencyUs;
      }
      PpmEventSoftParkLatencyUpdate(0LL, v58, v61);
      if ( !v61 )
        goto LABEL_85;
      v60 = v61;
    }
    else
    {
      if ( !*((_DWORD *)v67 + 40) )
      {
LABEL_85:
        PpmParkSoftParkingEnabled = 0;
        KeSoftParkedQueueThreshold = 0;
        if ( PpmParkNewSoftParkRankList )
        {
          v59 = PpmParkOldSoftParkRankList;
          if ( PpmParkOldSoftParkRankList )
          {
            memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
            memset_0(v59, 255, 4LL * (unsigned int)KeMaximumProcessors);
            KeUpdateSoftParkRankList();
            PpmEventSoftParkRankListChanged();
          }
        }
        return PpmHeteroHgsCheckContainmentDecision();
      }
      v60 = *((unsigned int *)v67 + 40);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    PpmParkSoftParkingEnabled = 1;
    KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * CurrentPrcb->MHz, 0xF4240uLL, v60);
    return PpmHeteroHgsCheckContainmentDecision();
  }
  return PpmParkApplyPolicyEx();
}
