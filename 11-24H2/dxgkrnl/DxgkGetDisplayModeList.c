/*
 * XREFs of DxgkGetDisplayModeList @ 0x140415680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14018BCE0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x14030D4F0 (_lambda_4ad224167d91228276911ab76f1e9490_--operator().c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403C2FA8 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1403C3028 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf
  D3DKMT_DISPLAYMODE *pModeList; // rdi
  UINT ModeCount; // r14d
  const void *v15; // rdx
  struct DXGADAPTER *v16; // r15
  int PairingAdapters; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  volatile signed __int64 *v22; // rbx
  char v23; // r8
  __int64 v24; // rcx
  signed __int64 v25; // rax
  ADAPTER_DISPLAY **v26; // r12
  struct DXGSESSIONDATA *v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  struct DXGGLOBAL *Global; // rax
  int v38; // ebx
  __int64 v39; // rcx
  struct _KPROCESS *v40; // rbx
  int v41; // eax
  struct _KTHREAD **v42; // r8
  unsigned int v43; // r13d
  ADAPTER_DISPLAY *v44; // rcx
  UINT v45; // ebx
  __int64 v46; // rcx
  char v47; // r12
  unsigned int v48; // r11d
  __m128i v49; // xmm5
  __m128i v50; // xmm4
  __m128 si128; // xmm6
  unsigned int v52; // r10d
  __m128i v53; // xmm4
  __m128i v54; // xmm4
  _DWORD *v55; // rdx
  UINT v56; // eax
  unsigned int v57; // r8d
  unsigned __int64 v58; // r11
  __int64 i; // rbx
  UINT j; // r10d
  _DWORD *v61; // rdx
  struct DXGSESSIONDATA *v62; // rbx
  struct DXGGLOBAL *v63; // rax
  int v64; // [rsp+50h] [rbp-228h]
  int v65; // [rsp+50h] [rbp-228h]
  int v66; // [rsp+50h] [rbp-228h]
  char v67; // [rsp+54h] [rbp-224h]
  unsigned __int8 v68[3]; // [rsp+55h] [rbp-223h] BYREF
  int v69; // [rsp+58h] [rbp-220h] BYREF
  __int64 v70; // [rsp+60h] [rbp-218h]
  char v71; // [rsp+68h] [rbp-210h]
  char v72; // [rsp+70h] [rbp-208h]
  ULONG64 v73; // [rsp+78h] [rbp-200h]
  struct DXGADAPTER *v74; // [rsp+80h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v75; // [rsp+90h] [rbp-1E8h]
  struct DXGADAPTER *v76; // [rsp+98h] [rbp-1E0h] BYREF
  struct DXGSESSIONDATA *v77; // [rsp+A0h] [rbp-1D8h]
  unsigned int v78[4]; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-1C0h]
  UINT v80; // [rsp+C0h] [rbp-1B8h]
  int v81; // [rsp+C4h] [rbp-1B4h]
  struct _D3DKMT_DISPLAYMODE *v82; // [rsp+C8h] [rbp-1B0h] BYREF
  struct DXGADAPTER *v83; // [rsp+D0h] [rbp-1A8h] BYREF
  unsigned __int64 v84; // [rsp+D8h] [rbp-1A0h]
  D3DKMT_DISPLAYMODE *v85; // [rsp+E0h] [rbp-198h]
  struct _KTHREAD **v86; // [rsp+E8h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST v87; // [rsp+F0h] [rbp-188h] BYREF
  unsigned __int64 v88; // [rsp+108h] [rbp-170h] BYREF
  _BYTE v89[24]; // [rsp+110h] [rbp-168h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+128h] [rbp-150h] BYREF
  char v91; // [rsp+158h] [rbp-120h]
  _BYTE v92[144]; // [rsp+160h] [rbp-118h] BYREF
  __m128i v93; // [rsp+1F0h] [rbp-88h]
  int v94; // [rsp+200h] [rbp-78h]
  int v95; // [rsp+204h] [rbp-74h]
  int v96; // [rsp+208h] [rbp-70h]

  v73 = a1;
  v69 = -1;
  v70 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2017);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v86 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 5822;
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v9,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    v12 = v71 == 0;
LABEL_41:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v69);
    return 3221225485LL;
  }
  *(_OWORD *)v78 = 0LL;
  v79 = 0LL;
  pModeList = 0LL;
  v85 = 0LL;
  ModeCount = 0;
  v68[0] = 0;
  v67 = 0;
  v15 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v78, v15, 0x18uLL);
  v83 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v74, v78[0], Current, &v83, 1);
  v16 = v83;
  if ( !v83 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v78[0]);
    WdLogGlobalForLineNumber = 5857;
    goto LABEL_37;
  }
  v76 = 0LL;
  v88 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v83, v78[1], 0LL, 0LL, &v76, &v88, 0);
  v18 = PairingAdapters;
  v64 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, v16, v78[1], PairingAdapters);
    WdLogGlobalForLineNumber = 5877;
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v74 + 2), v74);
      v18 = v64;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v69);
    return v18;
  }
  v22 = (volatile signed __int64 *)v76;
  if ( !v76 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5881;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 5881LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v92, (struct DXGADAPTER *const)v22, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89, 0LL, v23);
  v25 = _InterlockedExchangeAdd64(v22 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v26 = (ADAPTER_DISPLAY **)v76;
  v75 = v76;
  if ( v25 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v24) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v27 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 122));
    v77 = v27;
    if ( !v27 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5925;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire console session mode change shared lock, returning 0x%I64x.",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
LABEL_37:
      if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v74 + 2), v74);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
      v12 = v71 == 0;
      goto LABEL_41;
    }
    goto LABEL_45;
  }
  v27 = 0LL;
  v77 = 0LL;
  v28 = DxgkAcquireSessionModeChangeLock(0);
  v33 = v28;
  v65 = v28;
  if ( v28 >= 0 )
  {
LABEL_45:
    v91 = 0;
    if ( v27 )
    {
      v38 = *(_DWORD *)v27;
      if ( (unsigned int)PsGetCurrentProcessSessionId(v30, v29, v31, v32) != v38 )
      {
        v67 = 1;
        v40 = (struct _KPROCESS *)*((_QWORD *)v77 + 2332);
        if ( (struct _KPROCESS *)PsGetCurrentProcess(v39) != v40 )
        {
          KeStackAttachProcess(v40, &ApcState);
          v91 = 1;
        }
      }
    }
    v82 = 0LL;
    v41 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92, 0LL);
    LODWORD(v33) = v41;
    v66 = v41;
    if ( v41 >= 0 )
    {
      v44 = v26[390];
      if ( v78[1] < *((_DWORD *)v44 + 24) )
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(v44, v78[1]) )
        {
          *(_QWORD *)&v87.hAdapter = *(_QWORD *)v78;
          *(&v87.ModeCount + 1) = HIDWORD(v79);
          v87.ModeCount = 0;
          v87.pModeList = 0LL;
          LODWORD(v33) = DxgkpGetDisplayModeList(
                           v26,
                           (struct COREADAPTERACCESS *)v92,
                           (struct DXGAUTOPUSHLOCK *)v89,
                           0LL,
                           &v87,
                           (const struct _D3DKMT_DISPLAYMODE **)&v82,
                           v68);
          v66 = v33;
          v43 = 7;
          if ( (int)v33 >= 0 )
          {
            ModeCount = v87.ModeCount;
            pModeList = v87.pModeList;
            v85 = v87.pModeList;
          }
        }
        else
        {
          LODWORD(v33) = -1071774972;
          v66 = -1071774972;
          v43 = 7;
          WdLogSingleEntry3(7LL, -1071774972LL, v26, v78[1]);
          WdLogGlobalForLineNumber = 5983;
        }
      }
      else
      {
        LODWORD(v33) = -1071774972;
        v66 = -1071774972;
        v43 = 7;
        WdLogSingleEntry3(7LL, -1071774972LL, v26, v78[1]);
        WdLogGlobalForLineNumber = 5974;
      }
    }
    else
    {
      v42 = Current;
      v43 = 7;
      WdLogSingleEntry4(7LL, v41, v42, v78[0], v26);
      WdLogGlobalForLineNumber = 5966;
    }
    if ( v67 && v91 )
    {
      KeUnstackDetachProcess(&ApcState);
      v91 = 0;
    }
    if ( (int)v33 >= 0 )
    {
      v45 = ModeCount;
      if ( *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v26[390], v78[1]) + 19) )
      {
        v47 = 1;
        v48 = 0;
        if ( ModeCount >= 8 )
        {
          v49 = 0LL;
          v50 = 0LL;
          si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          v52 = 2;
          do
          {
            v49 = _mm_sub_epi32(
                    v49,
                    (__m128i)_mm_andnot_ps(
                               (__m128)_mm_cmpeq_epi32(
                                         (__m128i)_mm_and_ps(
                                                    (__m128)_mm_srli_epi32(
                                                              _mm_unpacklo_epi64(
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v48].Flags + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52 - 1].Flags
                                                                                    + 1))),
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52].Flags + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52 + 1].Flags
                                                                                    + 1)))),
                                                              4u),
                                                    si128),
                                         (__m128i)0LL),
                               si128));
            v46 = v52 + 2;
            v50 = _mm_sub_epi32(
                    v50,
                    (__m128i)_mm_andnot_ps(
                               (__m128)_mm_cmpeq_epi32(
                                         (__m128i)_mm_and_ps(
                                                    (__m128)_mm_srli_epi32(
                                                              _mm_unpacklo_epi64(
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v46].Flags + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52 + 3].Flags
                                                                                    + 1))),
                                                                _mm_unpacklo_epi32(
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52 + 4].Flags
                                                                                    + 1)),
                                                                  _mm_cvtsi32_si128(*((_DWORD *)&pModeList[v52 + 5].Flags
                                                                                    + 1)))),
                                                              4u),
                                                    si128),
                                         (__m128i)0LL),
                               si128));
            v48 += 8;
            v52 += 8;
          }
          while ( v48 < (ModeCount & 0xFFFFFFF8) );
          v53 = _mm_add_epi32(v50, v49);
          v54 = _mm_add_epi32(v53, _mm_srli_si128(v53, 8));
          v45 = ModeCount + _mm_cvtsi128_si32(_mm_add_epi32(v54, _mm_srli_si128(v54, 4)));
        }
        if ( v48 < ModeCount )
        {
          v55 = (_DWORD *)&pModeList[v48].Flags + 1;
          v46 = ModeCount - v48;
          do
          {
            v56 = v45 - 1;
            if ( (*v55 & 0x10) == 0 )
              v56 = v45;
            v45 = v56;
            v55 += 11;
            --v46;
          }
          while ( v46 );
        }
      }
      else
      {
        v47 = 0;
      }
      v93 = _mm_load_si128((const __m128i *)&_xmm);
      v94 = 31;
      v95 = 119;
      v96 = 113;
      if ( *((_QWORD *)v75 + 391) )
        v43 = 1;
      v57 = v43 * ((v82 != 0LL) + v45);
      LODWORD(v75) = v57;
      v58 = *(_QWORD *)&v78[2];
      if ( *(_QWORD *)&v78[2] )
      {
        if ( (unsigned int)v79 >= v57 )
        {
          v72 = 0;
          v84 = *(_QWORD *)&v78[2];
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v81 = i;
            if ( (unsigned int)i >= v43 )
              break;
            for ( j = 0; ; ++j )
            {
              v80 = j;
              if ( j >= ModeCount )
                break;
              if ( v47 )
              {
                v46 = *((unsigned int *)&pModeList[j].Flags + 1);
                if ( (v46 & 0x10) != 0 )
                  continue;
              }
              v84 = v58 + 44;
              lambda_4ad224167d91228276911ab76f1e9490_::operator()(v46, v58, (__int64)&pModeList[j], v93.m128i_i32[i]);
            }
            if ( v82 )
            {
              v84 = v58 + 44;
              lambda_4ad224167d91228276911ab76f1e9490_::operator()(v46, v58, (__int64)v82, v93.m128i_i32[i]);
            }
          }
          v57 = (unsigned int)v75;
        }
        else
        {
          LODWORD(v33) = -1073741789;
          v66 = -1073741789;
        }
      }
      v61 = (_DWORD *)(v73 + 16);
      if ( v73 + 16 >= MmUserProbeAddress )
        v61 = (_DWORD *)MmUserProbeAddress;
      *v61 = v57;
    }
    if ( v68[0] )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(pModeList);
    v62 = v77;
    if ( v77 )
    {
      v63 = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v63 + 122), v62);
    }
    else
    {
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v91 )
    {
      KeUnstackDetachProcess(&ApcState);
      v91 = 0;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v74 + 2), v74);
      LODWORD(v33) = v66;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    v36 = v71 == 0;
    goto LABEL_31;
  }
  WdLogSingleEntry1(2LL, v28);
  WdLogGlobalForLineNumber = 5903;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
    v33,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
  if ( v74 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v74 + 2), v74);
    LODWORD(v33) = v65;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
  v36 = v71 == 0;
LABEL_31:
  if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v69);
  return (unsigned int)v33;
}
