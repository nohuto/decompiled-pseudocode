/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x1404E5250
 * Callers:
 *     <none>
 * Callees:
 *     RtlBeginReadTickLock @ 0x1402ABCF0 (RtlBeginReadTickLock.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x1402AF768 (PpmParkFindOverUtilizedProcessors.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x14046C3EC (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventLPICoreParking @ 0x1405D6B4C (PpmEventLPICoreParking.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmParkCalculateCoreParkingMask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edx
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // ebx
  _WORD *v13; // r13
  unsigned __int16 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned int v18; // r14d
  unsigned int v19; // ecx
  bool v20; // cc
  unsigned int v21; // r15d
  __int64 Prcb; // rax
  __int16 v23; // dx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // r12
  unsigned __int8 v30; // al
  __int16 v31; // ax
  __int16 v32; // ax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ecx
  int v37; // r8d
  unsigned int v38; // eax
  unsigned int v39; // esi
  unsigned __int8 v40; // r10
  int v41; // r14d
  unsigned int v42; // r11d
  int v43; // r13d
  unsigned int v44; // r9d
  unsigned int v45; // ecx
  unsigned int v46; // eax
  bool v47; // zf
  unsigned int v48; // eax
  unsigned int v49; // r13d
  unsigned __int8 v50; // al
  unsigned __int8 v51; // dl
  char v52; // r14
  __int64 v53; // rbx
  __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // eax
  __int64 v58; // [rsp+38h] [rbp-C8h]
  unsigned int v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int128 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  unsigned int i; // [rsp+A8h] [rbp-58h]
  unsigned int v64; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v69; // [rsp+D0h] [rbp-30h]
  __int64 *v70; // [rsp+D8h] [rbp-28h]
  __int64 OverUtilizedProcessors; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v72; // [rsp+E8h] [rbp-18h]
  _WORD *v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+150h] [rbp+50h]
  char v75; // [rsp+150h] [rbp+50h]
  int v76; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v77; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v78; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  v62 = 0LL;
  v77 = 0;
  v68 = 0LL;
  v76 = 0;
  v66 = 0LL;
  v61 = 0LL;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
    return PpmParkCalculateCoreParkingMaskEx();
  if ( PpmIsParkingEnabled )
  {
    PpmParkSoftParkCurrentRank = 0;
    PpmParkSoftParkRankListChanged = 0;
    v70 = &PpmCurrentProfile[0][61 * dword_140F0B38C];
    v5 = 100 * *((unsigned __int8 *)v70 + 180);
    v64 = v5;
    if ( PpmParkNewSoftParkRankList )
    {
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
      v5 = v64;
    }
    v6 = 0;
    for ( i = 0; v6 < PpmParkNumNodes; i = v6 )
    {
      v7 = PpmParkNodes + 1296LL * v6;
      v67 = v7;
      if ( (*(_BYTE *)(v7 + 1184) & 1) == 0 )
      {
        v8 = PpmParkNodes + 1296LL * v6;
        v9 = *(unsigned __int16 *)(v7 + 1170);
        *(_QWORD *)(v7 + 32) = *(_QWORD *)(v7 + 24);
        v10 = *(unsigned __int16 *)(v7 + 1174);
        *(_WORD *)(v7 + 1252) = 0;
        *(_BYTE *)(v7 + 1254) = 0;
        if ( (unsigned __int16)v9 >= (unsigned __int16)v10 )
          v9 = v10;
        v59 = v9;
        OverUtilizedProcessors = PpmParkFindOverUtilizedProcessors(v8, v5);
        *(_BYTE *)(v7 + 1224) = 0;
        if ( PpmHeteroFavoredCoreRotationTimeoutMs )
        {
          v11 = MEMORY[0xFFFFF78000000008]
              / (10000
               * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
          *(_QWORD *)(v7 + 1208) = v11;
          if ( v11 != *(_QWORD *)(v7 + 1216) )
          {
            *(_BYTE *)(v7 + 1224) = 1;
            *(_QWORD *)(v7 + 1216) = v11;
          }
        }
        v12 = 0;
        v78 = 0;
        if ( *(_BYTE *)(v7 + 12) )
        {
          v13 = (_WORD *)(v7 + 4);
          do
          {
            v73 = v13;
            v14 = (unsigned __int16 *)(*(_QWORD *)(v7 + 1288) + 640LL * v12);
            v76 = 0;
            v69 = v14;
            v15 = *((_QWORD *)v14 + 3);
            v60 = v15;
            if ( !v15 )
              break;
            v76 = 0x100000;
            if ( (unsigned __int16)PpmParkGranularity <= 1u )
            {
              v16 = *((_QWORD *)v14 + 4);
            }
            else
            {
              v16 = 0LL;
              LOWORD(v62) = *v13;
              *((_QWORD *)&v61 + 1) = *((_QWORD *)v14 + 4);
              *(_QWORD *)&v61 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) )
                v16 |= *(_QWORD *)(KeGetPrcb(v77) + 36448);
            }
            v17 = v15 & v16;
            v72 = v17;
            if ( v17 )
              v76 |= 0x10000u;
            v18 = v9;
            v19 = *v14 - (unsigned int)__popcnt(v17);
            v65 = 0LL;
            v20 = v19 <= v9;
            v21 = 0;
            if ( v20 )
              v18 = v19;
            if ( !KiClockTimerPerCpu )
            {
              v77 = KiClockTimerOwner;
              Prcb = KeGetPrcb(KiClockTimerOwner);
              v23 = *v13;
              if ( *(unsigned __int8 *)(Prcb + 208) == *v13 )
              {
                v24 = *(_QWORD *)(Prcb + 200);
                if ( (v24 & v60) != 0 )
                {
                  *(_QWORD *)&v61 = 0LL;
                  LOWORD(v62) = v23;
                  *((_QWORD *)&v61 + 1) = v24;
                  if ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) )
                  {
                    do
                    {
                      if ( v21 >= v18 )
                        break;
                      v25 = KeGetPrcb(v77);
                      v26 = *(_QWORD *)(v25 + 200);
                      if ( (v26 & v17) == 0 )
                      {
                        if ( (unsigned __int16)PpmParkGranularity > 1u )
                          v26 = *(_QWORD *)(v25 + 36448);
                        v76 |= 0x100u;
                        v4 |= v26;
                        v21 = __popcnt(v4);
                      }
                    }
                    while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) );
                    v7 = v67;
                    v65 = v4;
                  }
                }
              }
            }
            while ( KiCpuSetSequence != RtlBeginReadTickLock(&KiCpuSetSequence) )
              ;
            v29 = v28 & ~*v27;
            if ( v29 )
              v30 = __popcnt(v29);
            else
              v30 = 0;
            v74 = v30;
            if ( v30 )
            {
              if ( (unsigned __int16)PpmParkGranularity > 1u )
              {
                v31 = *v13;
                *(_QWORD *)&v61 = 0LL;
                LOWORD(v62) = v31;
                *((_QWORD *)&v61 + 1) = v29;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) )
                  v29 |= *(_QWORD *)(KeGetPrcb(v77) + 36448);
                v74 = __popcnt(v29);
              }
              v32 = *v13;
              *(_QWORD *)&v61 = 0LL;
              LOWORD(v62) = v32;
              *((_QWORD *)&v61 + 1) = v29;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) )
              {
                v33 = v65;
                do
                {
                  if ( v21 >= v18 )
                    break;
                  v34 = KeGetPrcb(v77);
                  v35 = *(_QWORD *)(v34 + 200);
                  if ( (v35 & v17) == 0 )
                  {
                    if ( (unsigned __int16)PpmParkGranularity > 1u )
                      v35 = *(_QWORD *)(v34 + 36448);
                    v76 |= 0x10u;
                    v33 |= v35;
                    v21 = __popcnt(v33);
                  }
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v77, (unsigned __int16 **)&v61) );
                v14 = v69;
                v65 = v33;
                v7 = v67;
              }
            }
            v36 = v14[1];
            if ( v21 >= v36 || v21 >= v18 )
            {
              v37 = v76;
            }
            else
            {
              v21 = v18;
              if ( v36 < v18 )
                v21 = v14[1];
              v37 = v76 | 4;
              v76 |= 4u;
            }
            v38 = v14[2];
            v39 = v18;
            if ( v18 > v38 && v21 < v18 )
            {
              v37 |= 8u;
              v39 = v14[2];
              v76 = v37;
              if ( v38 <= v21 )
                v39 = v21;
            }
            v40 = 0;
            v41 = PpmHeteroHgsContainmentState & 8;
            if ( (PpmHeteroHgsContainmentState & 8) != 0 )
              v40 = *(_BYTE *)(*(_QWORD *)(v7 + 1280) + 2LL * *(int *)(*(_QWORD *)(v7 + 1280) + 4LL) + 8);
            v42 = v14[3];
            v43 = *v14;
            if ( (unsigned __int16)v42 >= (unsigned __int16)v43 )
              v42 = *v14;
            v44 = v42;
            if ( PpmCheckLatencyBoostActive
              && (v43 * (unsigned int)*((unsigned __int8 *)v70 + (v78 != 0) + 137) + 50) / 0x64 > v42 )
            {
              v37 |= 0x40u;
              v44 = (v43 * (unsigned int)*((unsigned __int8 *)v70 + (v78 != 0) + 137) + 50) / 0x64;
              v76 = v37;
            }
            if ( (unsigned __int16)PpmParkGranularity > 1u )
              v44 = (unsigned __int16)PpmParkGranularity
                  - 1
                  + v44
                  - ((unsigned __int16)PpmParkGranularity - 1 + v44) % (unsigned __int16)PpmParkGranularity;
            if ( (PpmHeteroHgsContainmentState & 8) != 0 && v40 && v40 < (unsigned __int8)v44 )
            {
              v44 = v40;
              v76 = v37 | 0x400000;
            }
            v45 = v21;
            v14[4] = (unsigned __int8)v44;
            v46 = v44 + v74;
            if ( v44 + v74 >= v39 )
              v46 = v39;
            if ( v46 > v21 )
              v45 = v46;
            v59 -= v39;
            v47 = PpmParkSoftParkingEnabled == 0;
            v75 = v45;
            v14[5] = (unsigned __int8)v45;
            if ( v47 )
            {
              v76 |= 0x200000u;
              v39 = v45;
            }
            else if ( v41 )
            {
              v76 |= 0x800000u;
              v48 = v40;
              if ( v39 < v40 )
                v48 = v39;
              v39 = v48;
            }
            v49 = 0;
            v50 = 0;
            v51 = 0;
            if ( PpmHeteroHgsParkingEnabled )
            {
              v49 = *(unsigned __int16 *)(v7 + 1264);
              v50 = *(_BYTE *)(v7 + 1271);
              v51 = *(_BYTE *)(v7 + 1270);
            }
            v52 = v72;
            v53 = OverUtilizedProcessors & v60;
            PpmParkComputeUnparkMask(
              v7,
              v60,
              v60 & *(_QWORD *)(v7 + 32),
              OverUtilizedProcessors & v60,
              v45,
              v39,
              v72,
              v65,
              &v68,
              &v66,
              &v76,
              v7 + 1208,
              v49,
              v51,
              v50,
              v78);
            v54 = *(_QWORD *)(v7 + 40) & ~v60;
            *(_QWORD *)(v7 + 24) = v68 | v66 | ~v60 & *(_QWORD *)(v7 + 24);
            *(_QWORD *)(v7 + 40) = v66 | v54;
            v58 = v53;
            LODWORD(v53) = v78;
            PpmEventTraceSoftCoreParkingSelection((_QWORD *)v7, v78, v75, v39, v21, v52, v65, v58, v29, v76, v49);
            v55 = *(unsigned __int8 *)(v7 + 12);
            v13 = v73;
            v12 = v53 + 1;
            v9 = v59;
            v78 = v12;
            v4 = 0LL;
          }
          while ( v12 < v55 );
          v6 = i;
        }
      }
      v5 = v64;
      ++v6;
    }
    PpmParkComputeDiff();
    if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v56 = 0, PpmParkLpiCapChanged) )
      v56 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v56 )
      PpmEventLPICoreParking();
  }
  return 1;
}
