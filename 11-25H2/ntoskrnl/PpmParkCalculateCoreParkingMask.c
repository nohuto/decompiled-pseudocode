/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x1404EA450
 * Callers:
 *     <none>
 * Callees:
 *     RtlBeginReadTickLock @ 0x140274730 (RtlBeginReadTickLock.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x1403B0F00 (PpmParkFindOverUtilizedProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14047322C (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmParkComputeDiff @ 0x14047F584 (PpmParkComputeDiff.c)
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405CE05C (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventLPICoreParking @ 0x1405D4DC4 (PpmEventLPICoreParking.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned __int64 v0; // r13
  __int64 v1; // rax
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  unsigned int v9; // esi
  _WORD *v10; // r14
  unsigned __int8 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  bool v17; // cc
  unsigned int v18; // r12d
  __int64 Prcb; // rax
  __int16 v20; // dx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r13
  unsigned __int8 v27; // al
  int v28; // r14d
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ecx
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // esi
  unsigned __int8 v36; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v38; // r11d
  unsigned int v39; // r10d
  unsigned int v40; // r8d
  unsigned int v41; // r9d
  __int64 v42; // kr00_8
  int v43; // edx
  __int64 v44; // rax
  int v45; // r9d
  unsigned int v46; // eax
  unsigned int v47; // r14d
  bool v48; // zf
  unsigned int v49; // eax
  int v50; // r15d
  char v51; // al
  char v52; // cl
  __int64 v53; // rbx
  char v54; // r9
  unsigned int v55; // esi
  unsigned int v56; // edx
  __int64 v57; // rcx
  unsigned int v58; // eax
  int v59; // eax
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int128 v62; // [rsp+88h] [rbp-78h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h]
  unsigned int v64; // [rsp+A0h] [rbp-60h]
  unsigned int v65; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  _WORD *v68; // [rsp+B8h] [rbp-48h]
  __int64 *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  __int64 OverUtilizedProcessors; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v77; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v78; // [rsp+160h] [rbp+60h]
  unsigned int v79; // [rsp+168h] [rbp+68h]

  v0 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v77 = 0;
  v70 = 0LL;
  v76 = 0;
  v67 = 0LL;
  if ( PpmIsParkingEnabled )
  {
    v1 = 61LL * dword_140F0B70C;
    v73 = PpmCurrentProfile[0];
    v74 = v1 * 8;
    v69 = &PpmCurrentProfile[0][v1 + 5];
    PpmParkSoftParkCurrentRank = 0;
    v2 = 100 * BYTE4(PpmCurrentProfile[0][v1 + 22]);
    PpmParkSoftParkRankListChanged = 0;
    v65 = v2;
    if ( PpmParkNewSoftParkRankList )
    {
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
      v2 = v65;
    }
    v3 = 0;
    v64 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v4 = PpmParkNodes + 208LL * v3;
        v72 = v4;
        if ( (*(_BYTE *)(v4 + 120) & 1) == 0 )
        {
          v5 = *(_QWORD *)(v4 + 24);
          v6 = PpmParkNodes + 208LL * v3;
          v7 = *(unsigned __int8 *)(v4 + 113);
          *(_WORD *)(v4 + 172) = 0;
          *(_QWORD *)(v4 + 32) = v5;
          if ( (unsigned __int8)v7 >= *(_BYTE *)(v4 + 115) )
            v7 = *(unsigned __int8 *)(v4 + 115);
          v79 = v7;
          OverUtilizedProcessors = PpmParkFindOverUtilizedProcessors(v6, v2);
          *(_BYTE *)(v4 + 152) = 0;
          if ( PpmHeteroFavoredCoreRotationTimeoutMs )
          {
            v8 = MEMORY[0xFFFFF78000000008]
               / (10000
                * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
            *(_QWORD *)(v4 + 136) = v8;
            if ( v8 != *(_QWORD *)(v4 + 144) )
            {
              *(_BYTE *)(v4 + 152) = 1;
              *(_QWORD *)(v4 + 144) = v8;
            }
          }
          v9 = 0;
          v78 = 0;
          if ( *(_BYTE *)(v4 + 11) )
            break;
        }
LABEL_103:
        v2 = v65;
        v64 = ++v3;
        if ( v3 >= PpmParkNumNodes )
          goto LABEL_104;
      }
      v10 = (_WORD *)(v4 + 4);
      while ( 1 )
      {
        v68 = v10;
        v11 = (unsigned __int8 *)(*(_QWORD *)(v4 + 200) + 104LL * v9);
        v76 = 0;
        v12 = *((_QWORD *)v11 + 2);
        v61 = v12;
        if ( !v12 )
        {
LABEL_102:
          v3 = v64;
          goto LABEL_103;
        }
        v76 = 0x100000;
        if ( (unsigned __int8)PpmParkGranularity <= 1u )
        {
          v13 = *((_QWORD *)v11 + 3);
        }
        else
        {
          v13 = 0LL;
          LOWORD(v63) = *v10;
          *((_QWORD *)&v62 + 1) = *((_QWORD *)v11 + 3);
          *(_QWORD *)&v62 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) )
            v13 |= *(_QWORD *)(KeGetPrcb(v77) + 36448);
        }
        v14 = v12 & v13;
        v71 = v14;
        if ( v14 )
          v76 |= 0x10000u;
        v15 = v7;
        v16 = *v11 - (unsigned int)__popcnt(v14);
        v66 = 0LL;
        v17 = v16 <= v7;
        v18 = 0;
        if ( v17 )
          v15 = v16;
        if ( !KiClockTimerPerCpu )
        {
          v77 = KiClockTimerOwner;
          Prcb = KeGetPrcb(KiClockTimerOwner);
          v20 = *v10;
          if ( *(unsigned __int8 *)(Prcb + 208) == *v10 )
          {
            v21 = *(_QWORD *)(Prcb + 200);
            if ( (v61 & v21) != 0 )
            {
              *(_QWORD *)&v62 = 0LL;
              LOWORD(v63) = v20;
              *((_QWORD *)&v62 + 1) = v21;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) )
              {
                do
                {
                  if ( v18 >= v15 )
                    break;
                  v22 = KeGetPrcb(v77);
                  v23 = *(_QWORD *)(v22 + 200);
                  if ( (v23 & v14) == 0 )
                  {
                    if ( (unsigned __int8)PpmParkGranularity > 1u )
                      v23 = *(_QWORD *)(v22 + 36448);
                    v76 |= 0x100u;
                    v0 |= v23;
                    v18 = __popcnt(v0);
                  }
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) );
                v66 = v0;
              }
            }
          }
        }
        while ( KiCpuSetSequence != RtlBeginReadTickLock(&KiCpuSetSequence) )
          ;
        v26 = v25 & ~*v24;
        if ( v26 )
          v27 = __popcnt(v26);
        else
          v27 = 0;
        v28 = v27;
        if ( v27 )
        {
          if ( (unsigned __int8)PpmParkGranularity > 1u )
          {
            *(_QWORD *)&v62 = 0LL;
            *((_QWORD *)&v62 + 1) = v26;
            LOWORD(v63) = *v68;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) )
              v26 |= *(_QWORD *)(KeGetPrcb(v77) + 36448);
            v28 = __popcnt(v26);
          }
          *(_QWORD *)&v62 = 0LL;
          *((_QWORD *)&v62 + 1) = v26;
          LOWORD(v63) = *v68;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) )
          {
            v29 = v66;
            do
            {
              if ( v18 >= v15 )
                break;
              v30 = KeGetPrcb(v77);
              v31 = *(_QWORD *)(v30 + 200);
              if ( (v31 & v14) == 0 )
              {
                if ( (unsigned __int8)PpmParkGranularity > 1u )
                  v31 = *(_QWORD *)(v30 + 36448);
                v76 |= 0x10u;
                v29 |= v31;
                v18 = __popcnt(v29);
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v62) );
            v66 = v29;
            v4 = v72;
          }
        }
        v32 = v11[1];
        if ( v18 >= v32 || v18 >= v15 )
        {
          v33 = v76;
        }
        else
        {
          v18 = v15;
          if ( v32 < v15 )
            v18 = v11[1];
          v33 = v76 | 4;
          v76 |= 4u;
        }
        v34 = v11[2];
        v35 = v15;
        if ( v15 > (unsigned int)v34 && v18 < v15 )
        {
          v35 = v11[2];
          v76 = v33 | 8;
          if ( (unsigned int)v34 <= v18 )
            v35 = v18;
        }
        v36 = 0;
        if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          v34 = *(_QWORD *)(v4 + 192);
          v36 = *(_BYTE *)(*(int *)(v34 + 4) + v34 + 8);
        }
        IsEnabledDeviceUsageNoInline = Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline(
                                         v34,
                                         v24);
        v38 = v78;
        if ( IsEnabledDeviceUsageNoInline )
          break;
        v39 = *v11;
        if ( !PpmPerfMaxOverrideEnabled )
        {
          v41 = v11[3];
          if ( (unsigned __int8)v41 >= (unsigned __int8)v39 )
            v41 = *v11;
          v40 = v41;
          if ( PpmCheckLatencyBoostActive )
          {
            v42 = 1374389535LL * (v39 * *((unsigned __int8 *)v69 + (v78 != 0) + 97) + 50);
            goto LABEL_80;
          }
          goto LABEL_82;
        }
        v76 |= 0x40000u;
        v40 = v39;
LABEL_89:
        v46 = v28 + v40;
        v11[4] = v40;
        v47 = v18;
        if ( v46 >= v35 )
          v46 = v35;
        if ( v46 > v18 )
          v47 = v46;
        v79 -= v35;
        v48 = PpmParkSoftParkingEnabled == 0;
        v11[5] = v47;
        if ( v48 )
        {
          v76 |= 0x200000u;
          v35 = v47;
        }
        else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          v76 |= 0x800000u;
          v49 = v36;
          if ( v35 < v36 )
            v49 = v35;
          v35 = v49;
        }
        v50 = 0;
        v51 = 0;
        v52 = 0;
        if ( PpmHeteroHgsParkingEnabled )
        {
          v50 = *(unsigned __int8 *)(v4 + 184);
          v51 = *(_BYTE *)(v4 + 188);
          v52 = *(_BYTE *)(v4 + 187);
        }
        v53 = OverUtilizedProcessors & v61;
        PpmParkComputeUnparkMask(
          v4,
          v61,
          *(_DWORD *)(v4 + 32) & v61,
          OverUtilizedProcessors & v61,
          v47,
          v35,
          v71,
          v66,
          (__int64)&v70,
          (__int64)&v67,
          (__int64)&v76,
          v4 + 136,
          v50,
          v52,
          v51,
          v38);
        v54 = v35;
        v55 = v78;
        v56 = v78;
        v57 = *(_QWORD *)(v4 + 40) & ~v61;
        *(_QWORD *)(v4 + 24) = v70 | v67 | ~v61 & *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v4 + 40) = v67 | v57;
        PpmEventTraceSoftCoreParkingSelection((_QWORD *)v4, v56, v47, v54, v18, v71, v66, v53, v26, v76, v50);
        v58 = *(unsigned __int8 *)(v4 + 11);
        v9 = v55 + 1;
        v10 = v68;
        v0 = 0LL;
        v7 = v79;
        v78 = v9;
        if ( v9 >= v58 )
          goto LABEL_102;
      }
      v43 = *v11;
      v41 = v11[3];
      if ( (unsigned __int8)v41 >= (unsigned __int8)v43 )
        v41 = *v11;
      v40 = v41;
      if ( !PpmCheckLatencyBoostActive )
        goto LABEL_82;
      v44 = v78 ? (__int64)v73 + v74 + 41 : (__int64)v69;
      v42 = 1374389535LL * (v43 * (unsigned int)*(unsigned __int8 *)(v44 + 97) + 50);
LABEL_80:
      if ( HIDWORD(v42) >> 5 > v41 )
      {
        v40 = HIDWORD(v42) >> 5;
        v45 = v76 | 0x40;
        v76 |= 0x40u;
      }
      else
      {
LABEL_82:
        v45 = v76;
      }
      if ( (unsigned __int8)PpmParkGranularity > 1u )
        v40 = (unsigned __int8)PpmParkGranularity
            - 1
            + v40
            - ((unsigned __int8)PpmParkGranularity - 1 + v40) % (unsigned __int8)PpmParkGranularity;
      if ( (PpmHeteroHgsContainmentState & 8) != 0 && v36 && v36 < (unsigned __int8)v40 )
      {
        v40 = v36;
        v76 = v45 | 0x400000;
      }
      goto LABEL_89;
    }
LABEL_104:
    PpmParkComputeDiff();
    if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v59 = 0, PpmParkLpiCapChanged) )
      v59 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v59 )
      PpmEventLPICoreParking();
  }
  return 1;
}
