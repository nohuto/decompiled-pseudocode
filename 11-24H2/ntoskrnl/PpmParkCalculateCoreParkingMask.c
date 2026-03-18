/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x1404EDA40
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     RtlBeginReadTickLock @ 0x14029D200 (RtlBeginReadTickLock.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x1403542F4 (PpmParkFindOverUtilizedProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140471C0C (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventLPICoreParking @ 0x1405D9830 (PpmEventLPICoreParking.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall PpmParkCalculateCoreParkingMask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v13; // esi
  _WORD *v14; // r12
  unsigned __int16 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  bool v21; // cc
  unsigned int v22; // r15d
  __int64 Prcb; // rax
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  unsigned __int8 v31; // al
  int v32; // r13d
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // esi
  unsigned __int8 v40; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  int v42; // r11d
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  unsigned int v45; // r9d
  __int64 v46; // kr00_8
  int v47; // edx
  __int64 v48; // rax
  int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // eax
  bool v52; // zf
  char v53; // r13
  unsigned int v54; // eax
  int v55; // r14d
  char v56; // al
  char v57; // dl
  __int64 v58; // rbx
  char v59; // r9
  unsigned int v60; // esi
  unsigned int v61; // edx
  unsigned int v62; // eax
  int v63; // eax
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int128 v66; // [rsp+88h] [rbp-78h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  unsigned int v68; // [rsp+A0h] [rbp-60h]
  unsigned int v69; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  _WORD *v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  __int64 *v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v76; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v77; // [rsp+E0h] [rbp-20h]
  __int64 *v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int64 OverUtilizedProcessors; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v82; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v83; // [rsp+160h] [rbp+60h]
  unsigned int v84; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  v67 = 0LL;
  v82 = 0;
  v75 = 0LL;
  v81 = 0;
  v71 = 0LL;
  v66 = 0LL;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
    return PpmParkCalculateCoreParkingMaskEx();
  if ( PpmIsParkingEnabled )
  {
    v5 = 61LL * dword_140F0BA4C;
    v78 = PpmCurrentProfile[0];
    v79 = v5 * 8;
    v74 = &PpmCurrentProfile[0][v5 + 5];
    PpmParkSoftParkCurrentRank = 0;
    v6 = 100 * BYTE4(PpmCurrentProfile[0][v5 + 22]);
    PpmParkSoftParkRankListChanged = 0;
    v69 = v6;
    if ( PpmParkNewSoftParkRankList )
    {
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
      v6 = v69;
    }
    v7 = 0;
    v68 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v8 = PpmParkNodes + 1288LL * v7;
        v73 = v8;
        if ( (*(_BYTE *)(v8 + 1184) & 1) == 0 )
        {
          v9 = PpmParkNodes + 1288LL * v7;
          v10 = *(unsigned __int16 *)(v8 + 1170);
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v8 + 24);
          v11 = *(unsigned __int16 *)(v8 + 1174);
          *(_WORD *)(v8 + 1244) = 0;
          *(_BYTE *)(v8 + 1246) = 0;
          if ( (unsigned __int16)v10 >= (unsigned __int16)v11 )
            v10 = v11;
          v84 = v10;
          OverUtilizedProcessors = PpmParkFindOverUtilizedProcessors(v9, v6);
          *(_BYTE *)(v8 + 1216) = 0;
          if ( PpmHeteroFavoredCoreRotationTimeoutMs )
          {
            v12 = MEMORY[0xFFFFF78000000008]
                / (10000
                 * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
            *(_QWORD *)(v8 + 1200) = v12;
            if ( v12 != *(_QWORD *)(v8 + 1208) )
            {
              *(_BYTE *)(v8 + 1216) = 1;
              *(_QWORD *)(v8 + 1208) = v12;
            }
          }
          v13 = 0;
          v83 = 0;
          if ( *(_BYTE *)(v8 + 12) )
            break;
        }
LABEL_104:
        v6 = v69;
        v68 = ++v7;
        if ( v7 >= PpmParkNumNodes )
          goto LABEL_105;
      }
      v14 = (_WORD *)(v8 + 4);
      while ( 1 )
      {
        v72 = v14;
        v15 = (unsigned __int16 *)(*(_QWORD *)(v8 + 1280) + 640LL * v13);
        v81 = 0;
        v77 = v15;
        v16 = *((_QWORD *)v15 + 3);
        v65 = v16;
        if ( !v16 )
        {
LABEL_103:
          v7 = v68;
          goto LABEL_104;
        }
        v81 = 0x100000;
        if ( (unsigned __int16)PpmParkGranularity <= 1u )
        {
          v17 = *((_QWORD *)v15 + 4);
        }
        else
        {
          v17 = 0LL;
          LOWORD(v67) = *v14;
          *((_QWORD *)&v66 + 1) = *((_QWORD *)v15 + 4);
          *(_QWORD *)&v66 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) )
            v17 |= *(_QWORD *)(KeGetPrcb(v82) + 36448);
        }
        v18 = v16 & v17;
        v76 = v18;
        if ( v18 )
          v81 |= 0x10000u;
        v19 = v10;
        v20 = *v15 - (unsigned int)__popcnt(v18);
        v70 = 0LL;
        v21 = v20 <= v10;
        v22 = 0;
        if ( v21 )
          v19 = v20;
        if ( !KiClockTimerPerCpu )
        {
          v82 = KiClockTimerOwner;
          Prcb = KeGetPrcb(KiClockTimerOwner);
          v24 = *v14;
          if ( *(unsigned __int8 *)(Prcb + 208) == *v14 )
          {
            v25 = *(_QWORD *)(Prcb + 200);
            if ( (v25 & v65) != 0 )
            {
              *(_QWORD *)&v66 = 0LL;
              LOWORD(v67) = v24;
              *((_QWORD *)&v66 + 1) = v25;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) )
              {
                do
                {
                  if ( v22 >= v19 )
                    break;
                  v26 = KeGetPrcb(v82);
                  v27 = *(_QWORD *)(v26 + 200);
                  if ( (v27 & v18) == 0 )
                  {
                    if ( (unsigned __int16)PpmParkGranularity > 1u )
                      v27 = *(_QWORD *)(v26 + 36448);
                    v81 |= 0x100u;
                    v4 |= v27;
                    v22 = __popcnt(v4);
                  }
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) );
                v8 = v73;
                v70 = v4;
              }
            }
          }
        }
        while ( KiCpuSetSequence != RtlBeginReadTickLock(&KiCpuSetSequence) )
          ;
        v30 = v29 & ~*v28;
        if ( v30 )
          v31 = __popcnt(v30);
        else
          v31 = 0;
        v32 = v31;
        if ( v31 )
        {
          if ( (unsigned __int16)PpmParkGranularity > 1u )
          {
            *(_QWORD *)&v66 = 0LL;
            *((_QWORD *)&v66 + 1) = v30;
            LOWORD(v67) = *v72;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) )
              v30 |= *(_QWORD *)(KeGetPrcb(v82) + 36448);
            v32 = __popcnt(v30);
          }
          *(_QWORD *)&v66 = 0LL;
          *((_QWORD *)&v66 + 1) = v30;
          LOWORD(v67) = *v72;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) )
          {
            v33 = v70;
            do
            {
              if ( v22 >= v19 )
                break;
              v34 = KeGetPrcb(v82);
              v35 = *(_QWORD *)(v34 + 200);
              if ( (v35 & v18) == 0 )
              {
                if ( (unsigned __int16)PpmParkGranularity > 1u )
                  v35 = *(_QWORD *)(v34 + 36448);
                v81 |= 0x10u;
                v33 |= v35;
                v22 = __popcnt(v33);
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v82, (unsigned __int16 **)&v66) );
            v15 = v77;
            v70 = v33;
            v8 = v73;
          }
        }
        v36 = v15[1];
        if ( v22 >= v36 || v22 >= v19 )
        {
          v37 = v81;
        }
        else
        {
          v22 = v19;
          if ( v36 < v19 )
            v22 = v15[1];
          v37 = v81 | 4;
          v81 |= 4u;
        }
        v38 = v15[2];
        v39 = v19;
        if ( v19 > (unsigned int)v38 && v22 < v19 )
        {
          v39 = v15[2];
          v81 = v37 | 8;
          if ( (unsigned int)v38 <= v22 )
            v39 = v22;
        }
        v40 = 0;
        if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          v38 = *(_QWORD *)(v8 + 1272);
          v40 = *(_BYTE *)(v38 + 2LL * *(int *)(v38 + 4) + 8);
        }
        IsEnabledDeviceUsageNoInline = Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline(
                                         v38,
                                         v28);
        v42 = v83;
        if ( IsEnabledDeviceUsageNoInline )
          break;
        v43 = *v15;
        if ( !PpmPerfMaxOverrideEnabled )
        {
          v45 = v15[3];
          if ( (unsigned __int16)v45 >= (unsigned __int16)v43 )
            v45 = *v15;
          v44 = v45;
          if ( PpmCheckLatencyBoostActive )
          {
            v46 = 1374389535LL * (v43 * *((unsigned __int8 *)v74 + (v83 != 0) + 97) + 50);
            goto LABEL_81;
          }
          goto LABEL_83;
        }
        v81 |= 0x40000u;
        v44 = v43;
LABEL_90:
        v50 = v22;
        v15[4] = (unsigned __int8)v44;
        v51 = v44 + v32;
        if ( v44 + v32 >= v39 )
          v51 = v39;
        if ( v51 > v22 )
          v50 = v51;
        v84 -= v39;
        v52 = PpmParkSoftParkingEnabled == 0;
        v53 = v50;
        v15[5] = (unsigned __int8)v50;
        if ( v52 )
        {
          v81 |= 0x200000u;
          v39 = v50;
        }
        else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          v81 |= 0x800000u;
          v54 = v40;
          if ( v39 < v40 )
            v54 = v39;
          v39 = v54;
        }
        v55 = 0;
        v56 = 0;
        v57 = 0;
        if ( PpmHeteroHgsParkingEnabled )
        {
          v55 = *(unsigned __int16 *)(v8 + 1256);
          v56 = *(_BYTE *)(v8 + 1263);
          v57 = *(_BYTE *)(v8 + 1262);
        }
        v58 = OverUtilizedProcessors & v65;
        PpmParkComputeUnparkMask(
          v8,
          v65,
          *(_QWORD *)(v8 + 32) & v65,
          OverUtilizedProcessors & v65,
          v50,
          v39,
          v76,
          v70,
          &v75,
          &v71,
          &v81,
          v8 + 1200,
          v55,
          v57,
          v56,
          v42);
        v59 = v39;
        v60 = v83;
        v61 = v83;
        *(_QWORD *)(v8 + 24) = v75 | v71 | *(_QWORD *)(v8 + 24) & ~v65;
        *(_QWORD *)(v8 + 40) = v71 | ~v65 & *(_QWORD *)(v8 + 40);
        PpmEventTraceSoftCoreParkingSelection((_QWORD *)v8, v61, v53, v59, v22, v76, v70, v58, v30, v81, v55);
        v62 = *(unsigned __int8 *)(v8 + 12);
        v14 = v72;
        v13 = v60 + 1;
        v10 = v84;
        v83 = v13;
        v4 = 0LL;
        if ( v13 >= v62 )
          goto LABEL_103;
      }
      v47 = *v15;
      v45 = v15[3];
      if ( (unsigned __int16)v45 >= (unsigned __int16)v47 )
        v45 = *v15;
      v44 = v45;
      if ( !PpmCheckLatencyBoostActive )
        goto LABEL_83;
      v48 = v83 ? (__int64)v78 + v79 + 41 : (__int64)v74;
      v46 = 1374389535LL * (v47 * (unsigned int)*(unsigned __int8 *)(v48 + 97) + 50);
LABEL_81:
      if ( HIDWORD(v46) >> 5 > v45 )
      {
        v44 = HIDWORD(v46) >> 5;
        v49 = v81 | 0x40;
        v81 |= 0x40u;
      }
      else
      {
LABEL_83:
        v49 = v81;
      }
      if ( (unsigned __int16)PpmParkGranularity > 1u )
        v44 = (unsigned __int16)PpmParkGranularity
            - 1
            + v44
            - ((unsigned __int16)PpmParkGranularity - 1 + v44) % (unsigned __int16)PpmParkGranularity;
      if ( (PpmHeteroHgsContainmentState & 8) != 0 && v40 && v40 < (unsigned __int8)v44 )
      {
        v44 = v40;
        v81 = v49 | 0x400000;
      }
      goto LABEL_90;
    }
LABEL_105:
    PpmParkComputeDiff();
    if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v63 = 0, PpmParkLpiCapChanged) )
      v63 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v63 )
      PpmEventLPICoreParking();
  }
  return 1;
}
