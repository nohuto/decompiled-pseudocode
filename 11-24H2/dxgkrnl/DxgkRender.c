/*
 * XREFs of DxgkRender @ 0x140332650
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403349F4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140334A74 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x140334D08 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  const void *v7; // rdx
  struct DXGCONTEXT *v8; // rsi
  int v9; // eax
  ULONG BroadcastContextCount; // edi
  __int64 v11; // rdi
  _QWORD *Pool2; // rcx
  ULONG v13; // r13d
  __int64 v14; // r9
  __int64 v15; // r9
  int v16; // edi
  unsigned __int64 v17; // r9
  __int64 AllocationCount; // r15
  char Flags; // dl
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  bool IsDxgmms2; // r13
  struct DXGALLOCATION **v22; // r14
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  ULONG64 v27; // r15
  char *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  UINT NewCommandBufferSize; // r12d
  UINT NewAllocationListSize; // r15d
  UINT NewPatchLocationListSize; // r14d
  UINT v35; // eax
  UINT v36; // eax
  UINT v37; // eax
  struct DXGALLOCATION **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 CurrentProcess; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r15
  D3DKMT_HANDLE v47; // eax
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // [rsp+50h] [rbp-458h] BYREF
  __int64 v54; // [rsp+58h] [rbp-450h]
  char v55; // [rsp+60h] [rbp-448h]
  _BYTE v56[16]; // [rsp+68h] [rbp-440h] BYREF
  PVOID v57; // [rsp+78h] [rbp-430h]
  _BYTE v58[32]; // [rsp+80h] [rbp-428h] BYREF
  unsigned int v59; // [rsp+A0h] [rbp-408h]
  unsigned int v60; // [rsp+A8h] [rbp-400h] BYREF
  int v61; // [rsp+ACh] [rbp-3FCh] BYREF
  int v62; // [rsp+B0h] [rbp-3F8h] BYREF
  _BYTE v63[16]; // [rsp+B8h] [rbp-3F0h] BYREF
  struct DXGCONTEXT *v64; // [rsp+C8h] [rbp-3E0h] BYREF
  unsigned __int64 v65; // [rsp+D0h] [rbp-3D8h] BYREF
  DXGADAPTER *v66; // [rsp+D8h] [rbp-3D0h]
  char v67; // [rsp+E0h] [rbp-3C8h]
  _QWORD v68[2]; // [rsp+E8h] [rbp-3C0h] BYREF
  ULONG64 v69; // [rsp+F8h] [rbp-3B0h]
  _BYTE v70[24]; // [rsp+100h] [rbp-3A8h] BYREF
  _QWORD v71[6]; // [rsp+118h] [rbp-390h] BYREF
  char v72; // [rsp+148h] [rbp-360h]
  PVOID P; // [rsp+150h] [rbp-358h] BYREF
  _BYTE v74[256]; // [rsp+158h] [rbp-350h] BYREF
  int v75; // [rsp+258h] [rbp-250h]
  _D3DKMT_RENDER v76; // [rsp+260h] [rbp-248h] BYREF
  _BYTE v77[24]; // [rsp+3D0h] [rbp-D8h] BYREF
  DXGADAPTER *v78; // [rsp+3E8h] [rbp-C0h]

  v69 = a1;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2013);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2013);
  Current = DXGPROCESS::GetCurrent(v4);
  v68[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 42;
    v45 = PsGetCurrentProcess(v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v45,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v53);
    }
    return (unsigned int)v16;
  }
  memset(&v76, 0, sizeof(v76));
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v76, v7, 0x170uLL);
  v64 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v56,
    v76.hDevice,
    (struct _KTHREAD **)Current,
    &v64,
    0,
    1);
  v8 = v64;
  if ( !v64 )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v76.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 66;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v76.hDevice,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  if ( ((*(_BYTE *)&v76.Flags | (unsigned __int8)(*(_DWORD *)&v76.Flags >> 1)) & 0x20) != 0 )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, v76.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 74;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"RenderKm and RenderKmReadback flags should not be set when DxgkRender is called. Context 0x%I64x returning 0x%I64x",
      v76.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  v9 = *((_DWORD *)v64 + 98);
  if ( (v9 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v64);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
      (__int64)v8,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_99;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 88;
    goto LABEL_99;
  }
  if ( *((_BYTE *)v64 + 430) )
  {
    WdLogSingleEntry1(2LL, v76.hDevice);
    WdLogGlobalForLineNumber = 95;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkRender cannot be called on a virtual context. pContext=0x%p",
      v76.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_99;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v63,
    *((struct DXGDEVICE **)v64 + 2));
  BroadcastContextCount = v76.BroadcastContextCount;
  if ( v76.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL)) )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 111;
LABEL_55:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v63);
LABEL_56:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v56);
    goto LABEL_57;
  }
  if ( BroadcastContextCount > 0x40 )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 119;
    goto LABEL_55;
  }
  v11 = BroadcastContextCount + 1;
  Pool2 = 0LL;
  v57 = 0LL;
  v59 = 0;
  if ( (unsigned int)v11 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 < 8 )
      goto LABEL_17;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v11, 1265072196LL);
    v57 = Pool2;
  }
  else
  {
    Pool2 = v58;
    v57 = v58;
    if ( (_DWORD)v11 )
    {
      memset(v58, 0, 8LL * (unsigned int)v11);
      Pool2 = v57;
    }
  }
  v59 = v11;
LABEL_17:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 126;
LABEL_95:
    if ( v57 != v58 && v57 )
      ExFreePoolWithTag(v57, 0);
    v57 = 0LL;
    v59 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v63);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, (__int64)&EventProfilerExit, v40, v53);
    return 3221225495LL;
  }
  *Pool2 = v8;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current);
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v76.BroadcastContextCount )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v70);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v71,
        v57,
        v59,
        v14,
        1);
      if ( v72 )
      {
        if ( v71[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 195;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
          goto LABEL_136;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 190;
      }
      else
      {
        v66 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
        v67 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v65);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, *((_QWORD *)v8 + 2), 0, v15, 0);
        v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, 0LL);
        if ( v16 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v65);
          goto LABEL_52;
        }
        v17 = *((_QWORD *)v8 + 6);
        if ( v76.CommandOffset >= v17 )
        {
          v16 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v76.CommandOffset, v17, -1073741811LL);
          WdLogGlobalForLineNumber = 216;
          goto LABEL_46;
        }
        if ( v76.CommandLength + (unsigned __int64)v76.CommandOffset > v17 )
        {
          v16 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v76.CommandLength, v17, -1073741811LL);
          WdLogGlobalForLineNumber = 225;
          goto LABEL_46;
        }
        AllocationCount = v76.AllocationCount;
        if ( v76.AllocationCount > *((_DWORD *)v8 + 18) )
        {
          v16 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v76.AllocationCount, *((unsigned int *)v8 + 18), -1073741811LL);
          WdLogGlobalForLineNumber = 233;
          goto LABEL_46;
        }
        if ( v76.PatchLocationCount > *((_DWORD *)v8 + 26) )
        {
          v16 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v76.PatchLocationCount, *((unsigned int *)v8 + 26), -1073741811LL);
          WdLogGlobalForLineNumber = 241;
          goto LABEL_46;
        }
        v16 = 0;
        Flags = (char)v76.Flags;
        if ( !v76.CommandLength )
        {
LABEL_43:
          if ( (Flags & 1) != 0 || (Flags & 2) != 0 || (Flags & 4) != 0 )
          {
            NewCommandBufferSize = v76.NewCommandBufferSize;
            if ( (Flags & 1) == 0 )
              NewCommandBufferSize = *((_DWORD *)v8 + 50);
            NewAllocationListSize = v76.NewAllocationListSize;
            if ( (Flags & 2) == 0 )
              NewAllocationListSize = *((_DWORD *)v8 + 53);
            NewPatchLocationListSize = v76.NewPatchLocationListSize;
            if ( (Flags & 4) == 0 )
              NewPatchLocationListSize = *((_DWORD *)v8 + 54);
            v35 = *((_DWORD *)v8 + 50);
            if ( NewCommandBufferSize < v35 )
              goto LABEL_85;
            if ( NewAllocationListSize >= *((_DWORD *)v8 + 53) && NewPatchLocationListSize >= *((_DWORD *)v8 + 54) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v78) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v77);
              DXGCONTEXT::ResizeUserModeBuffers(
                v8,
                *((struct VIDMM_DMA_POOL **)v8 + 29),
                NewCommandBufferSize,
                NewAllocationListSize,
                NewPatchLocationListSize);
              v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, 0LL);
              goto LABEL_46;
            }
            if ( NewCommandBufferSize < v35 )
            {
LABEL_85:
              WdLogSingleEntry3(3LL, v8, NewCommandBufferSize, *((unsigned int *)v8 + 50));
              WdLogGlobalForLineNumber = 366;
            }
            v36 = *((_DWORD *)v8 + 53);
            if ( NewAllocationListSize < v36 )
            {
              WdLogSingleEntry3(3LL, v8, NewAllocationListSize, v36);
              WdLogGlobalForLineNumber = 373;
            }
            v37 = *((_DWORD *)v8 + 54);
            if ( NewPatchLocationListSize < v37 )
            {
              WdLogSingleEntry3(3LL, v8, NewPatchLocationListSize, v37);
              WdLogGlobalForLineNumber = 380;
            }
          }
LABEL_46:
          v23 = 0;
          v68[0] = 0LL;
          v24 = 0;
          v61 = 0;
          v25 = 0;
          v62 = 0;
          v26 = 0;
          if ( v16 != -1073741130 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v77);
            if ( !*((_BYTE *)v8 + 430) )
              (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 456LL))(
                *((_QWORD *)v8 + 29),
                v68,
                &v61,
                &v62);
            v26 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 456LL))(*((_QWORD *)v8 + 32));
            v23 = v68[0];
            v24 = v61;
            v25 = v62;
          }
          v27 = v69;
          *(_QWORD *)(v69 + 24) = *((_QWORD *)v8 + 7);
          *(_DWORD *)(v27 + 32) = v23;
          *(_QWORD *)(v27 + 40) = *((_QWORD *)v8 + 11);
          *(_DWORD *)(v27 + 48) = v24;
          *(_QWORD *)(v27 + 56) = *((_QWORD *)v8 + 15);
          *(_DWORD *)(v27 + 64) = v25;
          *(_DWORD *)(v27 + 340) = v26;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
          if ( v67 )
          {
            v67 = 0;
            v28 = (char *)v66 + 136;
            _InterlockedDecrement((volatile signed __int32 *)v66 + 38);
            ExReleasePushLockSharedEx(v28, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v66);
          }
LABEL_52:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
LABEL_53:
          if ( v57 != v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v57 = 0LL;
          v59 = 0;
          goto LABEL_55;
        }
        pNewAllocationList = v76.pNewAllocationList;
        if ( (*(_BYTE *)&v76.Flags & 0x20) == 0 )
          pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v8 + 11);
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL));
        v60 = AllocationCount;
        P = 0LL;
        v75 = 0;
        v22 = 0LL;
        if ( !IsDxgmms2 )
        {
LABEL_30:
          if ( v16 >= 0 )
          {
            v16 = DXGCONTEXT::Render(
                    v8,
                    &v76,
                    (struct COREDEVICEACCESS *)v77,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v65,
                    (struct DXGCONTEXT **)v57,
                    v22,
                    0LL);
            Flags = (char)v76.Flags;
          }
          if ( IsDxgmms2 && (_DWORD)AllocationCount )
          {
            do
            {
              if ( *v22 )
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)*v22 + 11);
              ++v22;
              --AllocationCount;
            }
            while ( AllocationCount );
            Flags = (char)v76.Flags;
          }
          if ( v16 >= 0 && (Flags & 0x10) != 0 )
          {
            v16 = DXGCONTEXT::HandleVistaBltStub(
                    v8,
                    v76.PresentHistoryToken,
                    1,
                    (struct COREDEVICEACCESS *)v77,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v65,
                    v76.BroadcastContextCount,
                    v76.BroadcastContext,
                    (struct DXGCONTEXT **)v57);
            Flags = (char)v76.Flags;
          }
          if ( P != v74 && P )
          {
            ExFreePoolWithTag(P, 0);
            Flags = (char)v76.Flags;
          }
          P = 0LL;
          v75 = 0;
          if ( v16 < 0 )
            goto LABEL_46;
          goto LABEL_43;
        }
        v38 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                         &P,
                                         (unsigned int)AllocationCount);
        v22 = v38;
        if ( v38 )
        {
          v16 = DxgkReferenceAllocationList(&v60, pNewAllocationList, v38, *((struct DXGDEVICE **)v8 + 2));
          Flags = (char)v76.Flags;
          AllocationCount = v60;
          goto LABEL_30;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 278;
        if ( P != v74 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v75 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v65);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v71);
      goto LABEL_95;
    }
    v46 = v13;
    v47 = (v76.BroadcastContext[v13] >> 6) & 0xFFFFFF;
    if ( v47 < *((_DWORD *)Current + 74) )
    {
      v48 = *((_QWORD *)Current + 35);
      if ( ((v76.BroadcastContext[v13] >> 25) & 0x60) == (*(_BYTE *)(v48 + 16LL * v47 + 8) & 0x60)
        && (*(_DWORD *)(v48 + 16LL * v47 + 8) & 0x2000) == 0 )
      {
        v49 = *(_DWORD *)(v48 + 16LL * v47 + 8) & 0x1F;
        if ( v49 )
        {
          if ( v49 == 7 )
          {
            v50 = *(_QWORD *)(v48 + 16LL * v47);
            goto LABEL_124;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v50 = 0LL;
LABEL_124:
    *((_QWORD *)v57 + ++v13) = v50;
    v51 = *((_QWORD *)v57 + v13);
    if ( !v51 || (v52 = *(_DWORD *)(v51 + 392), (v52 & 8) != 0) || *(_QWORD *)(v51 + 16) != *((_QWORD *)v8 + 2) )
    {
      v16 = -1073741811;
      WdLogSingleEntry4(2LL, v8, v76.BroadcastContext[v46], v46, -1073741811LL);
      WdLogGlobalForLineNumber = 162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v8,
        v76.BroadcastContext[v46],
        v46,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v70);
      goto LABEL_53;
    }
    if ( (v52 & 0x10) != 0 )
      break;
    if ( *(_BYTE *)(v51 + 430) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 178;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"BroadcastContextArray.Get()[i + 1]->UsesGpuVa() == FALSE",
        178LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  WdLogSingleEntry1(2LL, v51);
  WdLogGlobalForLineNumber = 169;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
    *((_QWORD *)v57 + v13),
    0LL,
    0LL,
    0LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v70);
LABEL_136:
  if ( v57 != v58 && v57 )
    ExFreePoolWithTag(v57, 0);
  v57 = 0LL;
  v59 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v63);
LABEL_99:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v53);
  return (unsigned int)-1073741811;
}
