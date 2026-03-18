/*
 * XREFs of DxgkGetDisplayModeList @ 0x140283980
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1402845E8 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140284668 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1402846E8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x140298BFC (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x14032ADD0 (_lambda_4ad224167d91228276911ab76f1e9490_--operator().c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  D3DKMT_DISPLAYMODE *pModeList; // rsi
  UINT ModeCount; // edi
  char v8; // r12
  const void *v9; // rdx
  struct DXGADAPTER *v10; // r14
  int PairingAdapters; // eax
  unsigned int v12; // ebx
  struct DXGADAPTER *v13; // r14
  struct DXGGLOBAL *v14; // rax
  unsigned __int8 v15; // dl
  struct DXGSESSIONDATA *v16; // r13
  int v17; // ebx
  __int64 v18; // rcx
  struct _KPROCESS *v19; // rbx
  char v20; // bl
  int v21; // eax
  __int64 v22; // r13
  ADAPTER_DISPLAY *v23; // rcx
  UINT v24; // r15d
  unsigned int v25; // eax
  unsigned int v26; // r12d
  _DWORD *v27; // r10
  __int64 v28; // r15
  unsigned __int64 *v29; // r14
  __int64 i; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  __int32 v34; // r11d
  _BYTE *v35; // rcx
  struct DXGSESSIONDATA *v36; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v41; // r11d
  __m128i v42; // xmm4
  __m128i v43; // xmm5
  __m128 si128; // xmm6
  unsigned int v45; // r10d
  __m128i v46; // xmm4
  __m128i v47; // xmm4
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  UINT v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 CurrentProcess; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  bool v58; // zf
  unsigned __int64 v59; // rdx
  int v60; // eax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  unsigned __int8 v63[4]; // [rsp+50h] [rbp-218h] BYREF
  int v64; // [rsp+54h] [rbp-214h]
  int v65; // [rsp+58h] [rbp-210h] BYREF
  __int64 v66; // [rsp+60h] [rbp-208h]
  char v67; // [rsp+68h] [rbp-200h]
  char v68; // [rsp+70h] [rbp-1F8h]
  unsigned int v69[4]; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v70; // [rsp+88h] [rbp-1E0h]
  int v71; // [rsp+90h] [rbp-1D8h]
  int v72; // [rsp+94h] [rbp-1D4h]
  unsigned int v73; // [rsp+98h] [rbp-1D0h]
  struct _D3DKMT_DISPLAYMODE *v74; // [rsp+A0h] [rbp-1C8h] BYREF
  struct DXGSESSIONDATA *v75; // [rsp+A8h] [rbp-1C0h]
  struct DXGADAPTER *v76; // [rsp+B0h] [rbp-1B8h] BYREF
  struct DXGADAPTER *v77; // [rsp+B8h] [rbp-1B0h] BYREF
  _DWORD *v78; // [rsp+C0h] [rbp-1A8h]
  D3DKMT_DISPLAYMODE *v79; // [rsp+C8h] [rbp-1A0h]
  struct DXGPROCESS *v80; // [rsp+D0h] [rbp-198h]
  DXGADAPTER *v81[2]; // [rsp+D8h] [rbp-190h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v82; // [rsp+E8h] [rbp-180h] BYREF
  unsigned __int64 v83; // [rsp+100h] [rbp-168h] BYREF
  ULONG64 v84; // [rsp+108h] [rbp-160h]
  _DWORD *v85; // [rsp+110h] [rbp-158h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-150h] BYREF
  char v87; // [rsp+148h] [rbp-120h]
  _BYTE v88[144]; // [rsp+150h] [rbp-118h] BYREF
  __m128i v89; // [rsp+1E0h] [rbp-88h]
  int v90; // [rsp+1F0h] [rbp-78h]
  int v91; // [rsp+1F4h] [rbp-74h]
  int v92; // [rsp+1F8h] [rbp-70h]

  v84 = a1;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2017);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 2017);
  Current = DXGPROCESS::GetCurrent();
  v80 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 5763;
    v55 = PsGetCurrentProcess(v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v55,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v58 = v67 == 0;
LABEL_88:
    if ( v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_95;
  }
  *(_OWORD *)v69 = 0LL;
  v70 = 0LL;
  pModeList = 0LL;
  v79 = 0LL;
  ModeCount = 0;
  v63[0] = 0;
  v8 = 0;
  v9 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v69, v9, 0x18uLL);
  v76 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v81, v69[0], Current, &v76, 1);
  v10 = v76;
  if ( !v76 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v69[0]);
    WdLogGlobalForLineNumber = 5798;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v81, v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v58 = v67 == 0;
    goto LABEL_88;
  }
  v77 = 0LL;
  v83 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v76, v69[1], 0LL, 0LL, &v77, &v83, 0);
  v12 = PairingAdapters;
  v64 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v13 = v77;
    if ( !v77 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5822;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 5822LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, v13, 0LL);
    DXGADAPTER::ReleaseReference(v13);
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    {
      v75 = 0LL;
      v60 = DxgkAcquireSessionModeChangeLock(0LL);
      v22 = v60;
      v64 = v60;
      if ( v60 < 0 )
      {
        WdLogSingleEntry1(2LL, v60);
        WdLogGlobalForLineNumber = 5843;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
          v22,
          0LL,
          0LL,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v81, v61);
LABEL_62:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
        if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v65);
        return (unsigned int)v22;
      }
      v16 = v75;
LABEL_12:
      v87 = 0;
      if ( v16 )
      {
        v17 = *(_DWORD *)v16;
        if ( (unsigned int)PsGetCurrentProcessSessionId() != v17 )
        {
          v8 = 1;
          v19 = (struct _KPROCESS *)*((_QWORD *)v16 + 2332);
          if ( (struct _KPROCESS *)PsGetCurrentProcess(v18) != v19 )
          {
            KeStackAttachProcess(v19, &ApcState);
            v87 = 1;
          }
        }
      }
      v20 = 0;
      v74 = 0LL;
      v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88, 0LL);
      LODWORD(v22) = v21;
      v64 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry4(7LL, v21, Current, v69[0], v13);
        WdLogGlobalForLineNumber = 5906;
      }
      else
      {
        v23 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 390);
        if ( v69[1] >= *((_DWORD *)v23 + 24) )
        {
          LODWORD(v22) = -1071774972;
          v64 = -1071774972;
          WdLogSingleEntry3(7LL, -1071774972LL, v13, v69[1]);
          WdLogGlobalForLineNumber = 5914;
        }
        else if ( ADAPTER_DISPLAY::IsPartOfDesktop(v23, v69[1]) )
        {
          *(_QWORD *)&v82.hAdapter = *(_QWORD *)v69;
          *(&v82.ModeCount + 1) = HIDWORD(v70);
          v82.ModeCount = 0;
          v82.pModeList = 0LL;
          LODWORD(v22) = DxgkpGetDisplayModeList(
                           v13,
                           (struct COREADAPTERACCESS *)v88,
                           0,
                           &v82,
                           (const struct _D3DKMT_DISPLAYMODE **)&v74,
                           v63);
          v64 = v22;
          if ( (int)v22 >= 0 )
          {
            ModeCount = v82.ModeCount;
            pModeList = v82.pModeList;
            v79 = v82.pModeList;
          }
        }
        else
        {
          LODWORD(v22) = -1071774972;
          v64 = -1071774972;
          WdLogSingleEntry3(7LL, -1071774972LL, v13, v69[1]);
          WdLogGlobalForLineNumber = 5923;
        }
      }
      if ( v8 && v87 )
      {
        KeUnstackDetachProcess(&ApcState);
        v87 = 0;
      }
      if ( (int)v22 < 0 )
        goto LABEL_54;
      v24 = ModeCount;
      if ( *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v13 + 390), v69[1]) + 19) )
      {
        v20 = 1;
        v41 = 0;
        if ( ModeCount >= 8 )
        {
          v42 = 0LL;
          v43 = 0LL;
          si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          v45 = 2;
          do
          {
            v42 = _mm_sub_epi32(
                    v42,
                    (__m128i)_mm_andnot_ps(
                               (__m128)_mm_cmpeq_epi32(
                                         (__m128i)_mm_and_ps(
                                                    (__m128)_mm_srli_epi32(
                                                              _mm_unpacklo_epi64(
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v41].Flags + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 - 1].Flags
                                                                                    + 1))),
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45].Flags + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 + 1].Flags
                                                                                    + 1)))),
                                                              4u),
                                                    si128),
                                         (__m128i)0LL),
                               si128));
            v43 = _mm_sub_epi32(
                    v43,
                    (__m128i)_mm_andnot_ps(
                               (__m128)_mm_cmpeq_epi32(
                                         (__m128i)_mm_and_ps(
                                                    (__m128)_mm_srli_epi32(
                                                              _mm_unpacklo_epi64(
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 + 2].Flags
                                                                                    + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 + 3].Flags
                                                                                    + 1))),
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 + 4].Flags
                                                                                    + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v45 + 5].Flags
                                                                                    + 1)))),
                                                              4u),
                                                    si128),
                                         (__m128i)0LL),
                               si128));
            v41 += 8;
            v45 += 8;
          }
          while ( v41 < (ModeCount & 0xFFFFFFF8) );
          v46 = _mm_add_epi32(v42, v43);
          v47 = _mm_add_epi32(v46, _mm_srli_si128(v46, 8));
          v24 = ModeCount + _mm_cvtsi128_si32(_mm_add_epi32(v47, _mm_srli_si128(v47, 4)));
        }
        if ( v41 < ModeCount )
        {
          v48 = (_DWORD *)&pModeList[v41].Flags + 1;
          v49 = ModeCount - v41;
          do
          {
            v50 = v24 - 1;
            if ( (*v48 & 0x10) == 0 )
              v50 = v24;
            v24 = v50;
            v48 += 11;
            --v49;
          }
          while ( v49 );
        }
      }
      v89 = _mm_load_si128((const __m128i *)&_xmm);
      v90 = 31;
      v91 = 119;
      v92 = 113;
      v25 = 7;
      if ( *((_QWORD *)v13 + 391) )
        v25 = 1;
      v73 = v25;
      v26 = ((v74 != 0LL) + v24) * v25;
      v27 = *(_DWORD **)&v69[2];
      if ( *(_QWORD *)&v69[2] )
      {
        if ( (unsigned int)v70 >= v26 )
        {
          v68 = 0;
          v78 = *(_DWORD **)&v69[2];
          v28 = 0LL;
          v29 = (unsigned __int64 *)MmUserProbeAddress;
          while ( 1 )
          {
            v72 = v28;
            if ( (unsigned int)v28 >= v25 )
              break;
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v71 = i;
              v31 = v27;
              if ( (unsigned int)i >= ModeCount )
                break;
              v32 = (unsigned int)i;
              if ( !v20 || (*((_DWORD *)&pModeList[v32].Flags + 1) & 0x10) == 0 )
              {
                v33 = v27;
                v85 = v27;
                v27 += 11;
                v78 = v27;
                v34 = v89.m128i_i32[v28];
                if ( v27 <= v33 || (unsigned __int64)v27 > *v29 )
                  *(_BYTE *)*v29 = 0;
                *(_OWORD *)v31 = *(_OWORD *)&pModeList[v32].Width;
                *((_OWORD *)v31 + 1) = *(_OWORD *)&pModeList[v32].RefreshRate.Numerator;
                *((_QWORD *)v31 + 4) = *(_QWORD *)&pModeList[v32].DisplayFixedOutput;
                v31[10] = *((_DWORD *)&pModeList[v32].Flags + 1);
                if ( pModeList[v32].RefreshRate.Numerator == -2 && pModeList[v32].RefreshRate.Denominator == -2 )
                {
                  v33[4] = 64;
                  v33[5] = 1;
                  v33[3] = 64;
                }
                if ( v34 != 21 )
                  v33[2] = v34;
              }
            }
            if ( v74 )
            {
              v78 = v27 + 11;
              lambda_4ad224167d91228276911ab76f1e9490_::operator()(i, v27, v74, v89.m128i_u32[v28]);
              v29 = (unsigned __int64 *)MmUserProbeAddress;
            }
            v28 = (unsigned int)(v28 + 1);
            v25 = v73;
          }
          goto LABEL_51;
        }
        LODWORD(v22) = -1073741789;
        v64 = -1073741789;
      }
      v29 = (unsigned __int64 *)MmUserProbeAddress;
LABEL_51:
      v35 = (_BYTE *)(v84 + 16);
      if ( v84 + 16 >= *v29 )
        v35 = (_BYTE *)*v29;
      *(_DWORD *)v35 = v26;
LABEL_54:
      if ( v63[0] )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
      v36 = v75;
      if ( v75 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 118), v36);
      }
      else
      {
        DxgkReleaseSessionModeChangeLock();
      }
      if ( v87 )
      {
        KeUnstackDetachProcess(&ApcState);
        v87 = 0;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
      if ( v81[0] )
        DXGADAPTER::ReleaseReference(v81[0]);
      goto LABEL_62;
    }
    v14 = DXGGLOBAL::GetGlobal();
    v16 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v14 + 118), v15);
    v75 = v16;
    if ( v16 )
      goto LABEL_12;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5865;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire console session mode change shared lock, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v81, v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_95:
    McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit, v57, v65);
    return 3221225485LL;
  }
  WdLogSingleEntry3(4LL, v10, v69[1], PairingAdapters);
  WdLogGlobalForLineNumber = 5818;
  if ( v81[0] )
    DXGADAPTER::ReleaseReference(v81[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v65);
  return v12;
}
