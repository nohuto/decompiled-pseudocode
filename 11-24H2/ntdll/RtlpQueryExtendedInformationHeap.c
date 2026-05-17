/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x1800480F0
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18004768C (RtlpEstimateAllocatedSize.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800477C0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpHeapReportCounters @ 0x180047820 (RtlpHpHeapReportCounters.c)
 *     RtlpHpHeapWalk @ 0x180047C00 (RtlpHpHeapWalk.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x180047D44 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpWalkCallbackRoutine @ 0x180047E50 (RtlpWalkCallbackRoutine.c)
 *     RtlpWalkHeap @ 0x180048BA0 (RtlpWalkHeap.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800F5F74 (RtlpQueryMemoryUsageHeap.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  int v5; // edi
  _QWORD **v6; // r13
  __int64 (__fastcall *v7)(__int64, _QWORD **); // rbx
  char v8; // r14
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v12; // rax
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  unsigned __int8 v19; // r12
  __int16 v20; // bx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rbx
  _QWORD *v30; // r8
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned __int64 v33; // r10
  _QWORD *v34; // rcx
  _QWORD *v35; // r10
  _QWORD *v36; // r9
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r11
  int v39; // ebx
  int v40; // r9d
  unsigned __int64 v41; // rcx
  bool v42; // zf
  int v43; // ebx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 Metadata; // rdi
  bool v48; // zf
  int v49; // eax
  __int64 v50; // rbx
  unsigned __int64 v51; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v52; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v53; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v54)(__int64, _QWORD **); // [rsp+38h] [rbp-C8h]
  __int128 v55; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+50h] [rbp-B0h]
  __int128 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int128 v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int128 v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  _DWORD v72[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v73; // [rsp+138h] [rbp+38h]
  unsigned __int64 v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  __int64 v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  __int64 v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+180h] [rbp+80h]

  v72[1] = 0;
  memset_thunk_772440563353939046(v72, 0, 0x54uLL);
  v4 = *(_DWORD *)a2;
  v5 = 0;
  v6 = *(_QWORD ***)(a2 + 16);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD **))(a2 + 8);
  v54 = v7;
  v53 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v8 = 1;
    v71 = a1;
    v9 = (_QWORD *)a1;
  }
  else
  {
    v8 = 0;
    v71 = 0LL;
    v9 = 0LL;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return 3221225474LL;
  }
  if ( v4 == 0x80000000 )
  {
    memset_thunk_772440563353939046(&v58, 0, 0xB0uLL);
    LODWORD(v58) = v4;
    v59 = 176LL;
    if ( v8 )
    {
      RtlpHpHeapReportCounters((__int64)v9, (__int64)&v58);
    }
    else
    {
      DWORD2(v60) = *(unsigned __int16 *)(a1 + 208);
      DWORD1(v60) = 1;
      v61 = a1;
      NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
      v62 = *(_QWORD *)(a1 + 568);
      v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      HIDWORD(v60) = NumberOfHeaps - 1;
      *(_QWORD *)&v63 = v12;
      *(_QWORD *)&v65 = RtlpEstimateAllocatedSize(a1);
      *((_QWORD *)&v65 + 1) = 16LL * *(_QWORD *)(a1 + 192);
      DWORD2(v64) = *(_DWORD *)(a1 + 604);
      DWORD2(v66) = *(_DWORD *)(a1 + 592);
      *(_QWORD *)&v64 = *(_QWORD *)(a1 + 584);
      DWORD2(v63) = *(_DWORD *)(a1 + 600);
      HIDWORD(v66) = *(_DWORD *)(a1 + 608);
      LODWORD(v67) = HIDWORD(v66);
      v13 = *(__int64 **)(a1 + 312);
      *((_QWORD *)&v67 + 1) = 0LL;
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 + 4);
        LODWORD(v66) = v14;
        v15 = *v13;
        if ( v15 )
          LODWORD(v66) = *(_DWORD *)(v15 + 16) + v14;
      }
      v16 = *(__int64 **)(a1 + 352);
      v17 = *(_DWORD *)(a1 + 620);
      DWORD1(v66) = v17;
      if ( v16 )
      {
        v18 = *v16;
        if ( v18 != -1 )
          v5 = *(_DWORD *)(v18 + 36);
        DWORD1(v66) = v5 + v17;
      }
    }
    return v7((__int64)&v58, v6);
  }
  memset_thunk_772440563353939046((char *)&v60 + 12, 0, 0x94uLL);
  v58 = 2LL;
  v59 = 64LL;
  *(_QWORD *)&v60 = a1;
  if ( v8 )
  {
    v61 = v9[16] << 12;
    v61 += v9[11] << 12;
    v62 = v9[17] << 12;
    v62 += v9[12] << 12;
    DWORD2(v60) = 0;
  }
  else
  {
    DWORD2(v60) = *(unsigned __int8 *)(a1 + 418);
    result = RtlpQueryMemoryUsageHeap(a1, &v61, &v62);
    if ( (int)result < 0 )
      return result;
  }
  result = v7((__int64)&v58, v6);
  if ( (int)result >= 0 && v4 >= 3 )
  {
    v51 = 0LL;
    v55 = 0LL;
    v52 = 0LL;
    v19 = v4 > 3;
    v56 = 0LL;
    v57 = 0LL;
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
        {
          RtlpEnsureSegHeapLockedForWalk(a1);
          result = RtlpHpHeapWalk(a1, (__int64)&v55, v19, v40);
        }
        else
        {
          result = RtlpWalkHeap(a1, &v55, v19);
        }
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v20 = WORD1(v56);
        if ( (BYTE2(v56) & 2) != 0 )
          break;
        if ( (WORD1(v56) & 0x4000) != 0 )
        {
          memset_thunk_772440563353939046(&v58, 0, 0xB0uLL);
          LODWORD(v58) = 3;
          v59 = 56LL;
          v46 = 0LL;
          Metadata = 0LL;
          if ( v8 )
          {
            *(_QWORD *)&v60 = v55;
            Metadata = RtlpHpLargeAllocGetMetadata(v71, v55);
            *((_QWORD *)&v60 + 1) = (*(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
            v61 = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            v50 = v55 - 16;
            _m_prefetchw((const void *)(v55 - 16));
            if ( *(_BYTE *)(v50 + 15) == 5 )
              v50 -= 16LL * *(unsigned __int8 *)(v50 + 14);
            v46 = v50 - 48;
            *(_QWORD *)&v60 = v46 & 0xFFFFFFFFFFFF0000uLL;
            *((_QWORD *)&v60 + 1) = *(_QWORD *)(v46 + 40);
            v61 = *(_QWORD *)(v46 + 32);
          }
          result = v54((__int64)&v58, v6);
          if ( (int)result < 0 )
            return result;
          HIDWORD(v58) = 0;
          memset_thunk_772440563353939046((char *)&v60 + 8, 0, 0x98uLL);
          v59 = 56LL;
          LODWORD(v58) = 4;
          if ( v8 )
          {
            *(_QWORD *)&v60 = v55;
            *((_QWORD *)&v60 + 1) = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
            v48 = (*(_DWORD *)(v71 + 20) & 0x40000000) == 0;
          }
          else
          {
            v48 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
            *(_QWORD *)&v60 = v46;
            *((_QWORD *)&v60 + 1) = *(_QWORD *)(v46 + 32);
          }
          v49 = 64;
          LODWORD(v61) = 1;
          if ( v48 )
            v49 = 4;
          HIDWORD(v61) = v49;
          result = v54((__int64)&v58, v6);
          if ( (int)result < 0 )
            return result;
          v20 = WORD1(v56);
          v21 = v55;
LABEL_33:
          if ( (v20 & 0xF0) != 0 )
          {
            memset_thunk_772440563353939046(v72, 0, 0x58uLL);
            v76 = *((_QWORD *)&v55 + 1);
            v26 = 2;
            v72[0] = 5;
            v73 = 88LL;
            v74 = v21;
            v75 = 2;
            if ( (v20 & 2) != 0 )
              v27 = (unsigned __int8)v56;
            else
              v27 = *(_QWORD *)((char *)&v57 + 4);
            v77 = v27;
            if ( (v20 & 0x4000) != 0 )
            {
              v26 = 6;
              v75 = 6;
            }
            if ( (v20 & 1) != 0 )
              v75 = v26 | 1;
            v25 = (__int64 *)v72;
            v80 = *((_QWORD *)&v56 + 1);
            v81 = v57;
            v78 = 1;
            v79 = 32LL;
            goto LABEL_43;
          }
          v58 = 5LL;
          v63 = 0LL;
          v61 = *((_QWORD *)&v55 + 1);
          v64 = 0LL;
          v65 = 0LL;
          v66 = 0LL;
          v67 = 0LL;
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v59 = 56LL;
          v60 = v21;
          if ( (v20 & 2) != 0 )
            v22 = (unsigned __int8)v56;
          else
            v22 = *(_QWORD *)((char *)&v57 + 4);
          v62 = v22;
          v23 = DWORD2(v60);
          if ( (v20 & 1) != 0 )
            v23 = 1;
          DWORD2(v60) = v23;
          if ( (v20 & 0x4000) != 0 )
          {
            v24 = v23 | 4;
            goto LABEL_41;
          }
          if ( v20 < 0 )
          {
            v24 = v23 | 8;
LABEL_41:
            DWORD2(v60) = v24;
          }
LABEL_42:
          v25 = &v58;
LABEL_43:
          result = v54((__int64)v25, v6);
          if ( (int)result < 0 )
            return result;
        }
        else if ( (WORD1(v56) & 0x1000) != 0 )
        {
          if ( v4 >= 4 )
          {
            HIDWORD(v58) = 0;
            memset_thunk_772440563353939046(&v62, 0, 0x88uLL);
            v59 = 56LL;
            LODWORD(v58) = 4;
            v60 = v55;
            v61 = 0x100000002LL;
            goto LABEL_42;
          }
        }
        else
        {
          v21 = v55;
          if ( v8 || (unsigned __int64)v55 >= v51 && (unsigned __int64)v55 <= v52 )
          {
LABEL_32:
            if ( v4 >= 4 )
              goto LABEL_33;
          }
          else
          {
            v34 = *(_QWORD **)(v53 + 96);
            v35 = 0LL;
            v36 = 0LL;
            while ( v34 != (_QWORD *)(v53 + 96) )
            {
              v37 = v34[2];
              v51 = v37;
              if ( (unsigned __int64)v55 < v37 )
              {
                if ( !v36 || v36[4] > v37 )
                  v36 = v34 - 2;
                goto LABEL_75;
              }
              v52 = v37 + v34[3];
              if ( (unsigned __int64)v55 < v52 )
                goto LABEL_81;
              if ( v35 && v35[4] >= v37 )
              {
LABEL_75:
                v34 = (_QWORD *)*v34;
              }
              else
              {
                v35 = v34 - 2;
                v34 = (_QWORD *)*v34;
              }
            }
            if ( v35 )
            {
              v38 = v35[4] + v35[5];
            }
            else
            {
              v38 = v53;
              if ( v53 + 24 == *(_QWORD *)(*(_QWORD *)(v53 + 40) + 288LL) )
                v38 = *(_QWORD *)(v53 + 40);
            }
            v51 = v38;
            if ( v36 )
              v52 = v36[4];
            else
              v52 = v38 + ((unsigned __int64)*(unsigned int *)(v53 + 56) << 12);
LABEL_81:
            v39 = 64;
            if ( (*(_DWORD *)(*(_QWORD *)(v53 + 40) + 112LL) & 0x40000) == 0 )
              v39 = 4;
            if ( v4 >= 4 )
            {
              HIDWORD(v58) = 0;
              memset_thunk_772440563353939046(&v62, 0, 0x88uLL);
              *(_QWORD *)&v60 = v51;
              *((_QWORD *)&v60 + 1) = v52 - v51;
              LODWORD(v58) = 4;
              v59 = 56LL;
              LODWORD(v61) = 1;
              HIDWORD(v61) = v39;
              result = v54((__int64)&v58, v6);
              if ( (int)result >= 0 )
              {
                v20 = WORD1(v56);
                v21 = v55;
                goto LABEL_32;
              }
              return result;
            }
          }
        }
      }
      if ( v8 || SWORD1(v56) < 0 )
      {
        v28 = v55;
      }
      else
      {
        v28 = v55;
        v53 = v55;
        if ( (_QWORD)v55 + 24LL == *(_QWORD *)(a1 + 288) )
          v28 = a1;
      }
      HIDWORD(v58) = 0;
      memset_thunk_772440563353939046(&v62, 0, 0x88uLL);
      *((_QWORD *)&v60 + 1) = DWORD2(v56) + (unsigned __int64)HIDWORD(v56);
      v61 = DWORD2(v56);
      LODWORD(v58) = 3;
      v59 = 56LL;
      *(_QWORD *)&v60 = v28;
      if ( v54 == RtlpWalkCallbackRoutine )
        result = RtlpWalkCallbackRoutine((__int64)&v58, v6);
      else
        result = v54((__int64)&v58, v6);
      if ( (int)result < 0 )
        return result;
      if ( v8 )
      {
        v41 = v55 + DWORD2(v56);
        v51 = v55;
        v42 = (*(_DWORD *)(v71 + 20) & 0x40000000) == 0;
      }
      else
      {
        if ( (SWORD1(v56) & 0x8000u) == 0 )
        {
          v29 = 0LL;
          v30 = 0LL;
          v31 = v53;
          v32 = *(_QWORD **)(v53 + 96);
          while ( 1 )
          {
            if ( v32 == (_QWORD *)(v53 + 96) )
            {
              if ( v29 )
              {
                v44 = v29[4] + v29[5];
              }
              else
              {
                v44 = v53;
                if ( v53 + 24 == *(_QWORD *)(*(_QWORD *)(v53 + 40) + 288LL) )
                  v44 = *(_QWORD *)(v53 + 40);
              }
              v51 = v44;
              if ( v30 )
              {
                v52 = v30[4];
                v45 = *(_QWORD *)(v53 + 40);
              }
              else
              {
                v45 = *(_QWORD *)(v53 + 40);
                v52 = v44 + ((unsigned __int64)*(unsigned int *)(v53 + 56) << 12);
              }
              v42 = (*(_DWORD *)(v45 + 112) & 0x40000) == 0;
              goto LABEL_90;
            }
            v33 = v32[2];
            if ( v31 < v33 )
              break;
            v31 = v53;
            if ( v53 < v33 + v32[3] )
            {
              _mm_lfence();
              v51 = v32[2];
              v52 = v51 + v32[3];
              v42 = (*(_DWORD *)(*(_QWORD *)(v53 + 40) + 112LL) & 0x40000) == 0;
              goto LABEL_90;
            }
            if ( v29 && v29[4] >= v33 )
            {
LABEL_67:
              v32 = (_QWORD *)*v32;
            }
            else
            {
              v29 = v32 - 2;
              v32 = (_QWORD *)*v32;
            }
          }
          if ( !v30 || v30[4] > v33 )
            v30 = v32 - 2;
          goto LABEL_67;
        }
        v41 = v55 + DWORD2(v56);
        v51 = v55;
        v42 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
      }
      v52 = v41;
LABEL_90:
      v43 = 64;
      if ( v42 )
        v43 = 4;
      HIDWORD(v58) = 0;
      memset_thunk_772440563353939046(&v62, 0, 0x88uLL);
      LODWORD(v58) = 4;
      *(_QWORD *)&v60 = v51;
      *((_QWORD *)&v60 + 1) = v52 - v51;
      v59 = 56LL;
      LODWORD(v61) = 1;
      HIDWORD(v61) = v43;
      if ( v54 == RtlpWalkCallbackRoutine )
        result = RtlpWalkCallbackRoutine((__int64)&v58, v6);
      else
        result = v54((__int64)&v58, v6);
    }
    while ( (int)result >= 0 );
  }
  return result;
}
