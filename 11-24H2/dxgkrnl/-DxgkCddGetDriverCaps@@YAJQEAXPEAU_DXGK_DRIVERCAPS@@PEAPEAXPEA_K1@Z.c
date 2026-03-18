/*
 * XREFs of ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1403D27B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddGetDriverCaps(
        struct DXGADAPTER *this,
        struct _DXGK_DRIVERCAPS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct _DXGK_DRIVERCAPS *a5)
{
  struct _DXGK_DRIVERCAPS *v6; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  __int64 v12; // r14
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGADAPTER *v24; // r9
  __int64 v25; // rdx
  struct _DXGK_DRIVERCAPS *v26; // rax
  __int64 v27; // r8
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  struct DXGADAPTER *v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  char v46; // [rsp+80h] [rbp-80h]
  _BYTE v47[144]; // [rsp+90h] [rbp-70h] BYREF

  v44 = -1;
  v6 = a5;
  v45 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 3005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 3005);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 3005);
  memset(a2, 0, 0x250uLL);
  v40 = 0LL;
  v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v40);
  PairingAdapters = DxgkpGetPairingAdapters(this, 0, v10, &v41, 0LL, 0LL, 0);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, this, PairingAdapters);
    WdLogGlobalForLineNumber = 3243;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddGetDriverCaps (ntStatus = 0x%I64x).",
      (__int64)this,
      v12,
      0LL,
      0LL,
      0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v40, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v44);
    return (unsigned int)v12;
  }
  else
  {
    if ( !v40 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3248;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"RenderAdapterRef != NULL", 3248LL, 0LL, 0LL, 0LL, 0LL);
    }
    v42 = 0LL;
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v42);
    v14 = DxgkpGetPairingAdapters(this, 0, 0LL, 0LL, v13, &v43, 0);
    v19 = v14;
    if ( v14 < 0 )
    {
      v39 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = v19;
      WdLogGlobalForLineNumber = 3266;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v40, v42);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
    if ( v20 >= 0 )
    {
      v24 = v40;
      v25 = 4LL;
      v26 = a5;
      v27 = 4LL;
      v28 = (_OWORD *)((char *)v40 + 2400);
      do
      {
        *(_OWORD *)&v26->HighestAcceptableAddress.LowPart = *v28;
        *(_OWORD *)&v26->ApertureSegmentCommitLimit = v28[1];
        *(_OWORD *)&v26->PointerCaps.0 = v28[2];
        *(_OWORD *)&v26->GammaRampCaps.0 = v28[3];
        *(_OWORD *)&v26->SchedulingCaps.0 = v28[4];
        *(_OWORD *)v26->GpuEngineTopology.Reserved = v28[5];
        *(_OWORD *)&v26->GpuEngineTopology.Reserved[4] = v28[6];
        v26 = (struct _DXGK_DRIVERCAPS *)((char *)v26 + 128);
        v29 = v28[7];
        v28 += 8;
        *(_OWORD *)&v26[-1].SupportSurpriseRemoval = v29;
        --v27;
      }
      while ( v27 );
      *(_OWORD *)&v26->HighestAcceptableAddress.LowPart = *v28;
      *(_OWORD *)&v26->ApertureSegmentCommitLimit = v28[1];
      *(_OWORD *)&v26->PointerCaps.0 = v28[2];
      *(_OWORD *)&v26->GammaRampCaps.0 = v28[3];
      *(_OWORD *)&v26->SchedulingCaps.0 = v28[4];
      if ( v42 )
      {
        v30 = (_OWORD *)((char *)v42 + 2400);
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v30;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = v30[1];
          *(_OWORD *)&a2->PointerCaps.0 = v30[2];
          *(_OWORD *)&a2->GammaRampCaps.0 = v30[3];
          *(_OWORD *)&a2->SchedulingCaps.0 = v30[4];
          *(_OWORD *)a2->GpuEngineTopology.Reserved = v30[5];
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = v30[6];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v31 = v30[7];
          v30 += 8;
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v31;
          --v25;
        }
        while ( v25 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *v30;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = v30[1];
        *(_OWORD *)&a2->PointerCaps.0 = v30[2];
        *(_OWORD *)&a2->GammaRampCaps.0 = v30[3];
        v32 = v30[4];
      }
      else
      {
        do
        {
          *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
          *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
          *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
          *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
          *(_OWORD *)&a2->SchedulingCaps.0 = *(_OWORD *)&v6->SchedulingCaps.0;
          *(_OWORD *)a2->GpuEngineTopology.Reserved = *(_OWORD *)v6->GpuEngineTopology.Reserved;
          *(_OWORD *)&a2->GpuEngineTopology.Reserved[4] = *(_OWORD *)&v6->GpuEngineTopology.Reserved[4];
          a2 = (struct _DXGK_DRIVERCAPS *)((char *)a2 + 128);
          v36 = *(_OWORD *)&v6->GpuEngineTopology.Reserved[8];
          v6 = (struct _DXGK_DRIVERCAPS *)((char *)v6 + 128);
          *(_OWORD *)&a2[-1].SupportSurpriseRemoval = v36;
          --v25;
        }
        while ( v25 );
        *(_OWORD *)&a2->HighestAcceptableAddress.LowPart = *(_OWORD *)&v6->HighestAcceptableAddress.LowPart;
        *(_OWORD *)&a2->ApertureSegmentCommitLimit = *(_OWORD *)&v6->ApertureSegmentCommitLimit;
        *(_OWORD *)&a2->PointerCaps.0 = *(_OWORD *)&v6->PointerCaps.0;
        *(_OWORD *)&a2->GammaRampCaps.0 = *(_OWORD *)&v6->GammaRampCaps.0;
        v32 = *(_OWORD *)&v6->SchedulingCaps.0;
      }
      v33 = v41;
      *(_OWORD *)&a2->SchedulingCaps.0 = v32;
      *a3 = v24;
      *a4 = v33;
      v40 = 0LL;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v42 )
        DXGADAPTER::ReleaseReference(v42);
      v42 = 0LL;
      if ( v40 )
        DXGADAPTER::ReleaseReference(v40);
      v40 = 0LL;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v44);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v42 )
        DXGADAPTER::ReleaseReference(v42);
      v42 = 0LL;
      if ( v40 )
        DXGADAPTER::ReleaseReference(v40);
      v40 = 0LL;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
      if ( v46 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v44);
      }
      return (unsigned int)v20;
    }
  }
}
