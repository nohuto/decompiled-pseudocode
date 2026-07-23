/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x140AC7690
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     KeQueryTimelineBitmapTime @ 0x14044B2E4 (KeQueryTimelineBitmapTime.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14099BD34 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtDataSectionCopyData @ 0x140A0A7B0 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x140A53180 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x140A672E0 (PopEtDataSectionStart.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  char v6; // r15
  int v7; // esi
  unsigned int v9; // r13d
  unsigned int v10; // esi
  unsigned int v11; // r15d
  _QWORD *v12; // r10
  _DWORD *v13; // r11
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD **v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __int64 v26; // r14
  int v27; // ebx
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int8 *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r13d
  int v36; // r12d
  int v37; // r15d
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r9
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 *v47; // rdx
  unsigned __int64 v48; // r8
  int v49; // edx
  __int64 v50; // r11
  __int64 v51; // r8
  int TimelineBitmapTime; // eax
  __int64 v53; // r11
  _DWORD *v54; // r8
  int v55; // ecx
  int v56; // rcx^4
  __int64 i; // r10
  __int64 v58; // rdx
  __int64 *j; // rdx
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // eax
  unsigned __int16 *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // [rsp+40h] [rbp-148h]
  int v66; // [rsp+40h] [rbp-148h]
  __int64 v67; // [rsp+40h] [rbp-148h]
  size_t Size; // [rsp+48h] [rbp-140h] BYREF
  __int64 v69; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int8 *v70; // [rsp+58h] [rbp-130h]
  int v71; // [rsp+60h] [rbp-128h]
  int v72; // [rsp+64h] [rbp-124h]
  __m128i v73; // [rsp+68h] [rbp-120h] BYREF
  __int128 v74; // [rsp+78h] [rbp-110h] BYREF
  __int128 v75; // [rsp+88h] [rbp-100h]
  __int64 v76; // [rsp+98h] [rbp-F0h]
  __int64 v77; // [rsp+A0h] [rbp-E8h]
  __int64 v78; // [rsp+A8h] [rbp-E0h]
  _QWORD *v79; // [rsp+B0h] [rbp-D8h]
  __int128 v80; // [rsp+B8h] [rbp-D0h] BYREF
  __int128 v81; // [rsp+C8h] [rbp-C0h]
  __int128 v82; // [rsp+D8h] [rbp-B0h] BYREF
  __int128 v83; // [rsp+E8h] [rbp-A0h]
  __int128 v84; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v85; // [rsp+108h] [rbp-80h]
  __int64 v86; // [rsp+118h] [rbp-70h]
  __int64 *v87; // [rsp+120h] [rbp-68h]
  __int64 v88; // [rsp+128h] [rbp-60h] BYREF
  __int64 v89; // [rsp+130h] [rbp-58h]
  __int128 v90; // [rsp+138h] [rbp-50h] BYREF
  __int128 v91; // [rsp+148h] [rbp-40h]

  v5 = 0LL;
  v69 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v6 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_3;
  }
  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &v69,
         0LL,
         0LL);
  v5 = v69;
  if ( v7 >= 0 )
  {
    v90 = 2uLL;
    v91 = (unsigned __int64)v69;
    v7 = PsEnumProcesses((__int64 (__fastcall *)(_QWORD, _QWORD))PopEtProcessEnumSnapshotCallback, (__int64)&v90);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(v5 + 16));
      v9 = *(_DWORD *)(v5 + 48);
      v10 = 0;
      v11 = 44;
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (_DWORD *)(v5 + 52);
        if ( v12 )
        {
          v65 = v12[1] & (-1LL << (*v13 & 0x1F));
          v14 = (_QWORD *)(v5 + 56);
          v15 = *(_QWORD *)(v5 + 56)
              + 8LL
              * ((37
                * (BYTE6(v65)
                 + 37
                 * (BYTE5(v65)
                  + 37
                  * (BYTE4(v65)
                   + 37 * (BYTE3(v65) + 37 * (BYTE2(v65) + 37 * (BYTE1(v65) + 37 * ((unsigned __int8)v65 + 11623883)))))))
                + HIBYTE(v65)) & (unsigned int)((*v13 >> 5) - 1));
        }
        else
        {
          v14 = (_QWORD *)(v5 + 56);
          v12 = *(_QWORD **)(v5 + 56);
          v15 = (__int64)v12;
        }
        if ( !v12 )
          goto LABEL_18;
        if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = v69;
        v12 = (_QWORD *)*v12;
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
LABEL_18:
          v16 = (_QWORD **)(v15 + 8);
          v17 = *v14 + 8 * ((unsigned __int64)(unsigned int)*v13 >> 5);
          while ( (unsigned __int64)v16 < v17 )
          {
            v12 = *v16;
            if ( ((unsigned __int8)*v16 & 1) == 0 )
              goto LABEL_23;
            ++v16;
          }
          v12 = 0LL;
        }
LABEL_23:
        if ( !v12 )
          break;
        v63 = (unsigned __int16 *)v12[2];
        if ( v10 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_93;
        }
        v11 += v63[43];
        v10 += v63[41] + v63[42] + v63[40];
        v64 = v12[3];
        if ( v64 )
          v10 += ((unsigned int)(*(_QWORD *)(v64 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      v82 = 0LL;
      v83 = 0LL;
      HIDWORD(v82) = 104;
      LODWORD(v83) = 8;
      PopEtDataSectionReserve((int *)&v82, v9, (int *)&Size);
      v18 = *(_DWORD *)(v5 + 40) >> 28;
      if ( v18 )
      {
        if ( v18 != 1 )
          goto LABEL_29;
        v84 = 0LL;
        HIDWORD(v84) = 440;
      }
      else
      {
        v84 = 0LL;
        HIDWORD(v84) = 432;
      }
      v85 = 0LL;
      LODWORD(v85) = 8;
LABEL_29:
      PopEtDataSectionReserve((int *)&v84, v9, (int *)&Size);
      v80 = 0LL;
      v81 = 0LL;
      HIDWORD(v80) = 1;
      LODWORD(v81) = 4;
      PopEtDataSectionReserve((int *)&v80, v11, (int *)&Size);
      v74 = 0LL;
      v75 = 0LL;
      HIDWORD(v74) = 2;
      LODWORD(v75) = 2;
      PopEtDataSectionReserve((int *)&v74, v10, (int *)&Size);
      v19 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097171;
          *(_DWORD *)(a2 + 8) = v19;
        }
        v7 = -1073741789;
        goto LABEL_93;
      }
      memset_0((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart((unsigned int *)&v82, a2);
      PopEtDataSectionStart((unsigned int *)&v84, v20);
      PopEtDataSectionStart((unsigned int *)&v80, v21);
      PopEtDataSectionStart((unsigned int *)&v74, v22);
      v89 = a2;
      *(_DWORD *)a2 = 2097171;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v19;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v5 + 608);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v82;
      *(_DWORD *)(a2 + 40) = v9;
      *(_DWORD *)(a2 + 56) = 1048680;
      *(_DWORD *)(a2 + 52) = DWORD1(v81);
      *(_WORD *)(a2 + 60) = 12;
      v23 = v69;
      PopEtDataSectionCopyData((__int64)&v80, (const void *)(v69 + 32), 0xCu);
      *(_DWORD *)(a2 + 44) = DWORD1(v81);
      PopEtDataSectionCopyData((__int64)&v80, (const void *)(v23 + 612), 0x10u);
      v24 = *(__m128i *)(v23 + 628);
      v73 = v24;
      v73.m128i_i32[0] = *(_DWORD *)(v23 + 612) + _mm_cvtsi128_si32(v24);
      v73.m128i_i32[1] = *(_DWORD *)(v23 + 616) + v24.m128i_i32[1];
      v73.m128i_i32[2] = *(_DWORD *)(v23 + 620) + v24.m128i_i32[2];
      v73.m128i_i32[3] = *(_DWORD *)(v23 + 624) + v24.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = DWORD1(v81);
      PopEtDataSectionCopyData((__int64)&v80, &v73, 0x10u);
      v25 = 0LL;
      v26 = *((_QWORD *)&v83 + 1);
      while ( 1 )
      {
        v27 = 314159;
        v28 = v23 + 48;
        v29 = v23 + 48;
        v77 = v23 + 48;
        if ( !v25 )
        {
          v46 = *(_QWORD *)(v23 + 56);
          v79 = (_QWORD *)v46;
          v25 = v46;
          v78 = v46;
          goto LABEL_53;
        }
        v78 = v25;
        v30 = *(_QWORD *)(v25 + 8) & (-1LL << (*(_DWORD *)(v23 + 52) & 0x1F));
        LODWORD(Size) = *(_DWORD *)(v23 + 52) >> 5;
        v88 = v30;
        v31 = (unsigned __int8 *)&v88;
        v70 = (unsigned __int8 *)&v88;
        v32 = 8LL;
        v86 = 8LL;
        LODWORD(v33) = 314159;
        v34 = 314159LL;
        v66 = 314159;
        v76 = 314159LL;
        v35 = 314159;
        v36 = 314159;
        v37 = 314159;
        v38 = 314159;
        while ( v32 >= 8 )
        {
          v33 = v31[7]
              + 37
              * (v31[6]
               + 37 * (v31[5] + 37 * (v31[4] + 37 * (v31[3] + 37 * (v31[2] + 37 * (v31[1] + 37 * (*v31 + 37 * v34)))))));
          v34 = v33;
          v31 += 8;
          v70 = v31;
          v32 -= 8LL;
          v86 = v32;
          v66 = v33;
          v76 = v33;
          v35 = v33;
          v36 = v33;
          v37 = v33;
          v27 = v33;
          v38 = v33;
        }
        v39 = v32 - 1;
        if ( !v39 )
          goto LABEL_50;
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_49;
        v41 = v40 - 1;
        if ( !v41 )
          goto LABEL_48;
        v42 = v41 - 1;
        if ( !v42 )
          goto LABEL_47;
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_46;
        v44 = v43 - 1;
        if ( !v44 )
          break;
        if ( v44 == 1 )
        {
          v45 = 37 * v66 + *v31++;
          v70 = v31;
          goto LABEL_45;
        }
LABEL_51:
        v46 = *(_QWORD *)(v28 + 8) + 8LL * ((unsigned int)v33 & ((_DWORD)Size - 1));
        v79 = (_QWORD *)v46;
LABEL_53:
        v87 = 0LL;
        if ( !v25 )
          goto LABEL_59;
        if ( (*(_QWORD *)v25 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v26 = *((_QWORD *)&v83 + 1);
          v46 = (__int64)v79;
          v25 = v78;
          v29 = v77;
        }
        if ( v25 && (v25 = *(_QWORD *)v25, (v25 & 1) == 0) )
        {
LABEL_58:
          v78 = v25;
        }
        else
        {
LABEL_59:
          v47 = (__int64 *)(v46 + 8);
          v48 = *(_QWORD *)(v29 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v29 + 4) >> 5);
          while ( 1 )
          {
            v87 = v47;
            if ( (unsigned __int64)v47 >= v48 )
              break;
            v25 = *v47;
            if ( (*v47 & 1) == 0 )
            {
              v79 = v47;
              goto LABEL_58;
            }
            ++v47;
          }
          v25 = 0LL;
        }
        if ( !v25 )
        {
          v71 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v72 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v76 = MEMORY[0xFFFFF78000000014];
          v49 = v71;
          v50 = v69;
          v51 = v89;
          *(_DWORD *)(v89 + 16) = v71 - *(_DWORD *)(v69 + 600);
          *(_DWORD *)(v51 + 20) = v72 - *(_DWORD *)(v50 + 604);
          *(_DWORD *)(v51 + 28) = v49;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v54[8] = TimelineBitmapTime;
          v54[16] = v55;
          v54[17] = v56;
          for ( i = 0LL; ; *(_DWORD *)(i + 492) &= ~0x80000000 )
          {
            if ( i )
            {
              v67 = *(_QWORD *)(i + 8) & (-1LL << (*(_DWORD *)(v53 + 68) & 0x1F));
              v58 = *(_QWORD *)(v53 + 72)
                  + 8LL
                  * ((37
                    * (BYTE6(v67)
                     + 37
                     * (BYTE5(v67)
                      + 37
                      * (BYTE4(v67)
                       + 37
                       * (BYTE3(v67) + 37 * (BYTE2(v67) + 37 * (BYTE1(v67) + 37 * ((unsigned __int8)v67 + 11623883)))))))
                    + HIBYTE(v67)) & (unsigned int)((*(_DWORD *)(v53 + 68) >> 5) - 1));
            }
            else
            {
              i = *(_QWORD *)(v53 + 72);
              v58 = i;
            }
            if ( !i || (i = *(_QWORD *)i, (i & 1) != 0) )
            {
              for ( j = (__int64 *)(v58 + 8);
                    (unsigned __int64)j < *(_QWORD *)(v53 + 72)
                                        + 8 * ((unsigned __int64)*(unsigned int *)(v53 + 68) >> 5);
                    ++j )
              {
                i = *j;
                if ( (*j & 1) == 0 )
                  goto LABEL_77;
              }
              i = 0LL;
            }
LABEL_77:
            if ( !i )
              break;
          }
          v5 = v69;
          PopEtEnergyTrackerCleanupAggregates(v69);
          ++*(_DWORD *)(v5 + 608);
          *(_DWORD *)(v5 + 600) = v71;
          *(_DWORD *)(v5 + 604) = v72;
          *(_OWORD *)(v5 + 612) = 0LL;
          *(__m128i *)(v5 + 628) = v73;
          v7 = 0;
LABEL_93:
          v6 = 1;
          goto LABEL_3;
        }
        v60 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)v26 = *(_QWORD *)(v25 + 32);
        *(_DWORD *)(v26 + 8) = *(_DWORD *)(v25 + 40);
        *(_DWORD *)(v26 + 12) = (unsigned __int16)*(_DWORD *)(v25 + 44);
        *(_DWORD *)(v26 + 72) = *(_DWORD *)(v25 + 512);
        *(_DWORD *)(v26 + 76) = *(_DWORD *)(v25 + 516);
        *(_OWORD *)(v26 + 80) = *(_OWORD *)(v25 + 488);
        *(_QWORD *)(v26 + 96) = *(_QWORD *)(v25 + 504);
        *(_DWORD *)(v26 + 20) = **(_DWORD **)(v60 + 32);
        *(_DWORD *)(v26 + 24) = *(_DWORD *)(*(_QWORD *)(v60 + 32) + 4LL);
        *(_DWORD *)(v26 + 44) = **(_DWORD **)(v60 + 40);
        *(_DWORD *)(v26 + 48) = *(_DWORD *)(*(_QWORD *)(v60 + 40) + 4LL);
        *(_DWORD *)(v26 + 40) = DWORD1(v81);
        *(_WORD *)(v26 + 60) = *(_WORD *)(v60 + 86);
        PopEtDataSectionCopyData((__int64)&v80, *(const void **)(v60 + 72), *(unsigned __int16 *)(v60 + 86));
        *(_WORD *)(v26 + 52) = *(_WORD *)(v60 + 80);
        *(_DWORD *)(v26 + 16) = DWORD1(v75);
        PopEtDataSectionCopyData((__int64)&v74, *(const void **)(v60 + 48), 2 * *(unsigned __int16 *)(v60 + 80));
        *(_WORD *)(v26 + 54) = *(_WORD *)(v60 + 82);
        *(_DWORD *)(v26 + 28) = DWORD1(v75);
        PopEtDataSectionCopyData((__int64)&v74, *(const void **)(v60 + 56), 2 * *(unsigned __int16 *)(v60 + 82));
        *(_WORD *)(v26 + 56) = *(_WORD *)(v60 + 84);
        *(_DWORD *)(v26 + 32) = DWORD1(v75);
        PopEtDataSectionCopyData((__int64)&v74, *(const void **)(v60 + 64), 2 * *(unsigned __int16 *)(v60 + 84));
        v61 = *(_QWORD *)(v25 + 24);
        if ( v61 )
        {
          *(_WORD *)(v26 + 58) = (unsigned __int16)WORD1(*(_QWORD *)(v61 + 24)) >> 1;
          *(_DWORD *)(v26 + 36) = DWORD1(v75);
          PopEtDataSectionCopyData(
            (__int64)&v74,
            (const void *)(*(_QWORD *)(v25 + 24) + 32LL),
            2 * *(unsigned __int16 *)(v26 + 58));
        }
        else
        {
          *(_WORD *)(v26 + 58) = 0;
          *(_DWORD *)(v26 + 36) = DWORD1(v75);
        }
        *(_DWORD *)(v26 + 64) = DWORD1(v85);
        v23 = v69;
        v62 = *(_DWORD *)(v69 + 40) >> 28;
        if ( v62 )
        {
          if ( v62 == 1 )
            *(_DWORD *)(v26 + 68) = 440;
        }
        else
        {
          *(_DWORD *)(v26 + 68) = 432;
        }
        PopEtDataSectionCopyData((__int64)&v84, (const void *)(v25 + 48), HIDWORD(v84));
        if ( (unsigned int)(HIDWORD(v82) + DWORD1(v83)) <= DWORD2(v82) )
        {
          DWORD1(v83) += HIDWORD(v82);
          v26 += HIDWORD(v82);
          *((_QWORD *)&v83 + 1) = v26;
        }
      }
      v45 = v76;
LABEL_45:
      v35 = *v31++ + 37 * v45;
      v70 = v31;
LABEL_46:
      v36 = *v31++ + 37 * v35;
      v70 = v31;
LABEL_47:
      v37 = *v31++ + 37 * v36;
      v70 = v31;
LABEL_48:
      v27 = *v31++ + 37 * v37;
      v70 = v31;
LABEL_49:
      v38 = *v31++ + 37 * v27;
      v70 = v31;
LABEL_50:
      LODWORD(v33) = *v31 + 37 * v38;
      v70 = v31 + 1;
      goto LABEL_51;
    }
  }
LABEL_3:
  if ( v6 )
    PopReleaseRwLock((signed __int64 *)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag((PVOID)v5, 0x74456F50u);
  return (unsigned int)v7;
}
