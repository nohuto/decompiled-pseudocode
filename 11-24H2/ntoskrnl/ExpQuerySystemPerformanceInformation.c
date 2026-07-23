/*
 * XREFs of ExpQuerySystemPerformanceInformation @ 0x140AE2138
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1403F5EC4 (MmGetNumberOfFreeSystemPtes.c)
 *     MiFreePoolPagesLeft @ 0x1404419D0 (MiFreePoolPagesLeft.c)
 *     MmGetAvailablePages @ 0x140457738 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140458464 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1404585C4 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x140459D88 (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x14045A440 (MmGetResidentAvailablePages.c)
 *     MiMaximumCommitmentAvailable @ 0x14045BA70 (MiMaximumCommitmentAvailable.c)
 *     MmGetSharedCommit @ 0x14046A274 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x14046A3A0 (MmGetProcessPartitionId.c)
 *     ExQueryPoolUsage @ 0x14046B794 (ExQueryPoolUsage.c)
 *     MmGetWorkingSetLeafSize @ 0x14046C6CC (MmGetWorkingSetLeafSize.c)
 *     MmGetSystemPageCounts @ 0x14048F778 (MmGetSystemPageCounts.c)
 *     MmGetMdlPagesAllocated @ 0x140497CB0 (MmGetMdlPagesAllocated.c)
 *     MmGetPfnDatabaseCommit @ 0x140498FEC (MmGetPfnDatabaseCommit.c)
 *     MmGetSystemPageTableCommit @ 0x14049909C (MmGetSystemPageTableCommit.c)
 *     MmGetContiguousPagesAllocated @ 0x140499BEC (MmGetContiguousPagesAllocated.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryRuntimeProcess @ 0x1409AF430 (PsQueryRuntimeProcess.c)
 */

void *__fastcall ExpQuerySystemPerformanceInformation(unsigned int a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  ULONG v4; // edi
  LARGE_INTEGER v5; // rax
  __int64 v6; // r10
  ULONG v7; // esi
  __int64 *v8; // r15
  LARGE_INTEGER v9; // r9
  ULONG v10; // r14d
  LARGE_INTEGER v11; // rdx
  __int64 *v12; // r11
  __int64 v13; // r12
  __int64 v14; // r8
  int v15; // r8d
  int v16; // edx
  __int64 *v17; // rcx
  __int64 v18; // rax
  _KPROCESS *Process; // rcx
  unsigned __int16 v20; // di
  unsigned __int64 AvailablePages; // rax
  int v22; // ecx
  unsigned __int64 TotalCommittedPages; // rax
  unsigned __int16 v24; // cx
  unsigned __int64 v25; // r9
  int v26; // r8d
  unsigned __int64 TotalCommitLimit; // rax
  unsigned __int64 v28; // r9
  int v29; // ecx
  unsigned __int64 PeakCommitment; // rax
  unsigned int v31; // r8d
  unsigned __int64 v32; // r9
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // r8d
  int v37; // r9d
  int v38; // ecx
  int v39; // r10d
  int v40; // r11d
  int v41; // esi
  int v42; // r14d
  int v43; // r12d
  int v44; // r13d
  int v45; // edi
  __int64 *v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // rcx
  unsigned __int64 NumberOfFreeSystemPtes; // rax
  unsigned __int64 WorkingSetLeafSize; // rax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r8
  __m128i v56; // xmm4
  __m128i v57; // xmm11
  __m128i v58; // xmm5
  __m128i v59; // xmm6
  __m128i v60; // xmm7
  __m128i v61; // xmm8
  __m128i v62; // xmm9
  __m128i v63; // xmm10
  __int64 v64; // rcx
  __int64 v65; // rax
  int v67; // [rsp+48h] [rbp-C0h]
  int v68; // [rsp+4Ch] [rbp-BCh]
  int v69; // [rsp+50h] [rbp-B8h]
  int v70; // [rsp+54h] [rbp-B4h]
  int v71; // [rsp+58h] [rbp-B0h]
  __int128 v72; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD Src[4]; // [rsp+78h] [rbp-90h] BYREF
  ULONG v74; // [rsp+98h] [rbp-70h]
  ULONG v75; // [rsp+9Ch] [rbp-6Ch]
  ULONG v76; // [rsp+A0h] [rbp-68h]
  int v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+A8h] [rbp-60h]
  int v79; // [rsp+ACh] [rbp-5Ch]
  unsigned int v80; // [rsp+B0h] [rbp-58h]
  int v81; // [rsp+B4h] [rbp-54h]
  int v82; // [rsp+B8h] [rbp-50h]
  int v83; // [rsp+BCh] [rbp-4Ch]
  int v84; // [rsp+C0h] [rbp-48h]
  int v85; // [rsp+C4h] [rbp-44h]
  int v86; // [rsp+C8h] [rbp-40h]
  int v87; // [rsp+CCh] [rbp-3Ch]
  int v88; // [rsp+D0h] [rbp-38h]
  int v89; // [rsp+D4h] [rbp-34h]
  int v90; // [rsp+D8h] [rbp-30h]
  int v91; // [rsp+DCh] [rbp-2Ch]
  int v92; // [rsp+E0h] [rbp-28h]
  int v93; // [rsp+E4h] [rbp-24h]
  char v94; // [rsp+E8h] [rbp-20h] BYREF
  char v95; // [rsp+ECh] [rbp-1Ch] BYREF
  char v96; // [rsp+F0h] [rbp-18h] BYREF
  char v97; // [rsp+F4h] [rbp-14h] BYREF
  _BYTE v98[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v99[4]; // [rsp+FCh] [rbp-Ch] BYREF
  int v100; // [rsp+100h] [rbp-8h]
  int v101; // [rsp+104h] [rbp-4h]
  int v102; // [rsp+108h] [rbp+0h]
  int v103; // [rsp+10Ch] [rbp+4h]
  _BYTE v104[4]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v105[4]; // [rsp+114h] [rbp+Ch] BYREF
  int v106; // [rsp+118h] [rbp+10h]
  int v107; // [rsp+11Ch] [rbp+14h]
  int v108; // [rsp+120h] [rbp+18h]
  int v109; // [rsp+124h] [rbp+1Ch]
  unsigned __int64 v110; // [rsp+128h] [rbp+20h]
  unsigned __int64 v111; // [rsp+130h] [rbp+28h]
  int v112; // [rsp+138h] [rbp+30h]
  ULONG v113; // [rsp+13Ch] [rbp+34h]
  unsigned __int64 v114; // [rsp+140h] [rbp+38h]
  unsigned __int64 v115; // [rsp+148h] [rbp+40h]
  unsigned __int64 v116; // [rsp+150h] [rbp+48h]
  unsigned __int64 v117; // [rsp+158h] [rbp+50h]
  unsigned __int64 v118; // [rsp+160h] [rbp+58h]
  unsigned __int64 v119; // [rsp+168h] [rbp+60h]
  unsigned __int64 v120; // [rsp+170h] [rbp+68h]
  unsigned __int64 v121; // [rsp+178h] [rbp+70h]
  unsigned __int64 v122; // [rsp+180h] [rbp+78h]
  unsigned __int64 v123; // [rsp+188h] [rbp+80h]
  unsigned __int64 v124; // [rsp+190h] [rbp+88h]
  unsigned __int64 v125; // [rsp+198h] [rbp+90h]
  int v126; // [rsp+1A0h] [rbp+98h]
  int v127; // [rsp+1A4h] [rbp+9Ch]
  int v128; // [rsp+1A8h] [rbp+A0h]
  int v129; // [rsp+1ACh] [rbp+A4h]
  __int64 v130; // [rsp+1B0h] [rbp+A8h]
  __int64 v131; // [rsp+1B8h] [rbp+B0h]
  __int64 ResidentAvailablePages; // [rsp+1C0h] [rbp+B8h]
  __int64 SharedCommit; // [rsp+1C8h] [rbp+C0h]
  __int64 MdlPagesAllocated; // [rsp+1D0h] [rbp+C8h]
  __int64 PfnDatabaseCommit; // [rsp+1D8h] [rbp+D0h]
  __int64 SystemPageTableCommit; // [rsp+1E0h] [rbp+D8h]
  __int64 ContiguousPagesAllocated; // [rsp+1E8h] [rbp+E0h]
  unsigned __int16 ProcessPartitionId; // [rsp+2A8h] [rbp+1A0h]
  __int64 v141; // [rsp+2C0h] [rbp+1B8h] BYREF

  v3 = a1;
  memset_0(Src, 0, 0x178uLL);
  v4 = IoOtherOperationCount;
  v5 = IoOtherTransferCount;
  v6 = (unsigned int)v3;
  v7 = IoReadOperationCount;
  v8 = KiProcessorBlock;
  v9 = IoReadTransferCount;
  v10 = IoWriteOperationCount;
  v11 = IoWriteTransferCount;
  v72 = 0LL;
  if ( (_DWORD)v3 )
  {
    v12 = KiProcessorBlock;
    v13 = (unsigned int)v3;
    do
    {
      v14 = *v12++;
      v4 += *(_DWORD *)(v14 + 11620);
      v7 += *(_DWORD *)(v14 + 11612);
      v10 += *(_DWORD *)(v14 + 11616);
      v11.QuadPart += *(_QWORD *)(v14 + 11632);
      v5.QuadPart += *(_QWORD *)(v14 + 11640);
      v9.QuadPart += *(_QWORD *)(v14 + 11624);
      --v13;
    }
    while ( v13 );
  }
  Src[2] = v11.QuadPart;
  v15 = 0;
  v16 = 0;
  Src[1] = v9.QuadPart;
  Src[3] = v5.QuadPart;
  v74 = v7;
  v75 = v10;
  v76 = v4;
  if ( (_DWORD)v3 )
  {
    v17 = KiProcessorBlock;
    do
    {
      v18 = *v17++;
      v15 += *(_DWORD *)(v18 + 11580);
      v16 += *(_DWORD *)(v18 + 11576);
      --v6;
    }
    while ( v6 );
  }
  v127 = 0;
  v128 = 0;
  v126 = v15;
  Process = KeGetCurrentThread()->ApcState.Process;
  v129 = v16;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)Process);
  v20 = ProcessPartitionId;
  AvailablePages = MmGetAvailablePages(ProcessPartitionId);
  v22 = -1;
  if ( AvailablePages <= 0xFFFFFFFF )
    v22 = AvailablePages;
  v77 = v22;
  TotalCommittedPages = MmGetTotalCommittedPages(ProcessPartitionId);
  v26 = v25;
  if ( TotalCommittedPages <= v25 )
    v26 = TotalCommittedPages;
  v78 = v26;
  TotalCommitLimit = MmGetTotalCommitLimit(v24);
  v29 = v28;
  if ( TotalCommitLimit <= v28 )
    v29 = TotalCommitLimit;
  v79 = v29;
  PeakCommitment = MmGetPeakCommitment(ProcessPartitionId);
  v33 = v32;
  if ( PeakCommitment <= v32 )
    v33 = PeakCommitment;
  if ( v33 < v31 )
    v33 = v31;
  v34 = 0;
  v70 = 0;
  v35 = 0;
  v71 = 0;
  v36 = 0;
  v80 = v33;
  v37 = 0;
  v38 = 0;
  LODWORD(v141) = 0;
  v39 = 0;
  v67 = 0;
  v40 = 0;
  v68 = 0;
  v41 = 0;
  v69 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  if ( (_DWORD)v3 )
  {
    v45 = 0;
    v46 = KiProcessorBlock;
    v47 = v3;
    do
    {
      v48 = (_DWORD *)*v46++;
      v37 += v48[2884];
      v39 += v48[2885];
      v40 += v48[2886];
      v41 += v48[8714];
      v42 += v48[2887];
      v43 += v48[2888];
      v44 += v48[2889];
      LODWORD(v141) = v48[8715] + v141;
      v67 += v48[8716];
      v68 += v48[2890];
      v69 += v48[2891];
      v70 += v48[2892];
      v45 += v48[2893];
      --v47;
    }
    while ( v47 );
    v34 = v141;
    v38 = v67;
    v35 = v68;
    v36 = v69;
    v71 = v45;
    v20 = ProcessPartitionId;
  }
  v88 = v34;
  v92 = v70;
  v93 = v71;
  v81 = v37;
  v82 = v39;
  v83 = v40;
  v84 = v41;
  v85 = v42;
  v86 = v43;
  v87 = v44;
  v89 = v38;
  v90 = v35;
  v91 = v36;
  NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
  if ( NumberOfFreeSystemPtes > 0xFFFFFFFF )
    LODWORD(NumberOfFreeSystemPtes) = -1;
  v100 = NumberOfFreeSystemPtes;
  MmGetSystemPageCounts(&v72);
  v101 = v72;
  WorkingSetLeafSize = MmGetWorkingSetLeafSize(1);
  if ( WorkingSetLeafSize > v51 )
    LODWORD(WorkingSetLeafSize) = v51;
  v107 = WorkingSetLeafSize;
  v52 = MmGetWorkingSetLeafSize(2);
  if ( v52 > v53 )
    LODWORD(v52) = v53;
  v108 = v52;
  v103 = DWORD2(v72);
  v109 = DWORD1(v72);
  v102 = HIDWORD(v72);
  MiFreePoolPagesLeft(5);
  v54 = MiMaximumCommitmentAvailable();
  if ( v55 > v54 )
    LODWORD(v55) = v54;
  v106 = v55;
  Src[0] = PsQueryRuntimeProcess(PsIdleProcess, &v141) * KeMaximumIncrement;
  ExQueryPoolUsage((int)&v94, (int)&v95, (int)&v96, (int)&v97, (__int64)v105, (__int64)v98, (__int64)v99, (__int64)v104);
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v113 = CcFastMdlReadWait;
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  if ( (_DWORD)v3 )
  {
    v56 = 0LL;
    v57 = 0LL;
    v58 = _mm_unpacklo_epi32(
            (__m128i)0LL,
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(CcFastMdlReadWait), _mm_cvtsi32_si128(0)));
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v64 = v3;
    do
    {
      v65 = *v8++;
      v56 = _mm_add_epi32(
              v56,
              _mm_unpacklo_epi32(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 11588)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34816))),
                _mm_loadl_epi64((const __m128i *)(v65 + 11592))));
      v58 = _mm_add_epi32(
              v58,
              _mm_unpacklo_epi32(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34752)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34824))),
                _mm_loadl_epi64((const __m128i *)(v65 + 34756))));
      v59 = _mm_add_epi32(
              v59,
              _mm_unpacklo_epi64(
                _mm_loadl_epi64((const __m128i *)(v65 + 34764)),
                _mm_loadl_epi64((const __m128i *)(v65 + 34828))));
      v60 = _mm_add_epi32(
              v60,
              _mm_unpacklo_epi64(
                _mm_loadl_epi64((const __m128i *)(v65 + 34772)),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34780)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34836)))));
      v61 = _mm_add_epi32(
              v61,
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34840)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 11600))),
                _mm_loadl_epi64((const __m128i *)(v65 + 11604))));
      v57 = _mm_add_epi32(v57, _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v65 + 34804)), (__m128i)_xmm));
      v62 = _mm_add_epi32(
              v62,
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34820)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34784))),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34788)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v65 + 34844)))));
      v63 = _mm_add_epi32(
              v63,
              _mm_unpacklo_epi64(
                _mm_loadl_epi64((const __m128i *)(v65 + 34848)),
                _mm_loadl_epi64((const __m128i *)(v65 + 34796))));
      --v64;
    }
    while ( v64 );
    v110 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v56, 4)), _mm_cvtsi128_si32(v56));
    v111 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v56, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v56, 8)));
    v113 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
    v114 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v58, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v58, 8)));
    v116 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v59, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v59, 8)));
    v118 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v60, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v60, 8)));
    v120 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v61, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v61, 8)));
    v122 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v62, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v62, 8)));
    v112 = _mm_cvtsi128_si32(v58);
    v115 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v59, 4)), _mm_cvtsi128_si32(v59));
    v117 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v60, 4)), _mm_cvtsi128_si32(v60));
    v119 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v61, 4)), _mm_cvtsi128_si32(v61));
    v121 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v62, 4)), _mm_cvtsi128_si32(v62));
    v123 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v63, 4)), _mm_cvtsi128_si32(v63));
    v125 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v57, 4)), _mm_cvtsi128_si32(v57));
    v124 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v63, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v63, 8)));
  }
  v130 = *(_QWORD *)CcSystemPartitionDirtyPageStatistics;
  v131 = *(_QWORD *)CcSystemPartitionDirtyPageThresholds;
  ResidentAvailablePages = MmGetResidentAvailablePages(v20);
  SharedCommit = MmGetSharedCommit();
  MdlPagesAllocated = MmGetMdlPagesAllocated();
  PfnDatabaseCommit = MmGetPfnDatabaseCommit();
  SystemPageTableCommit = MmGetSystemPageTableCommit();
  ContiguousPagesAllocated = MmGetContiguousPagesAllocated();
  return memmove(a2, Src, a3);
}
