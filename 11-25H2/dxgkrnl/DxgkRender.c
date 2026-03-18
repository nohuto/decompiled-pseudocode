/*
 * XREFs of DxgkRender @ 0x1403444D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x140346894 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140346914 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x140346BA8 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  const void *v7; // rdx
  DXGCONTEXT *v8; // rsi
  int v9; // eax
  __int64 v10; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v12; // rdi
  _QWORD *Pool2; // rcx
  ULONG v14; // r13d
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // edi
  unsigned __int64 v18; // r9
  __int64 AllocationCount; // r15
  char Flags; // dl
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  bool IsDxgmms2; // r13
  struct DXGALLOCATION **v23; // r14
  int v24; // eax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  ULONG64 v28; // r15
  char *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  UINT NewCommandBufferSize; // r12d
  UINT NewAllocationListSize; // r15d
  UINT NewPatchLocationListSize; // r14d
  UINT v36; // eax
  UINT v37; // eax
  UINT v38; // eax
  struct DXGALLOCATION **v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 CurrentProcess; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r15
  D3DKMT_HANDLE v48; // eax
  __int64 v49; // r9
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // [rsp+50h] [rbp-458h] BYREF
  __int64 v55; // [rsp+58h] [rbp-450h]
  char v56; // [rsp+60h] [rbp-448h]
  _BYTE v57[16]; // [rsp+68h] [rbp-440h] BYREF
  PVOID v58; // [rsp+78h] [rbp-430h]
  _BYTE v59[32]; // [rsp+80h] [rbp-428h] BYREF
  unsigned int v60; // [rsp+A0h] [rbp-408h]
  unsigned int v61; // [rsp+A8h] [rbp-400h] BYREF
  int v62; // [rsp+ACh] [rbp-3FCh] BYREF
  int v63; // [rsp+B0h] [rbp-3F8h] BYREF
  _BYTE v64[16]; // [rsp+B8h] [rbp-3F0h] BYREF
  DXGCONTEXT *v65; // [rsp+C8h] [rbp-3E0h] BYREF
  unsigned __int64 v66; // [rsp+D0h] [rbp-3D8h] BYREF
  DXGADAPTER *v67; // [rsp+D8h] [rbp-3D0h]
  char v68; // [rsp+E0h] [rbp-3C8h]
  _QWORD v69[2]; // [rsp+E8h] [rbp-3C0h] BYREF
  ULONG64 v70; // [rsp+F8h] [rbp-3B0h]
  _BYTE v71[24]; // [rsp+100h] [rbp-3A8h] BYREF
  _QWORD v72[6]; // [rsp+118h] [rbp-390h] BYREF
  char v73; // [rsp+148h] [rbp-360h]
  PVOID P; // [rsp+150h] [rbp-358h] BYREF
  _BYTE v75[256]; // [rsp+158h] [rbp-350h] BYREF
  int v76; // [rsp+258h] [rbp-250h]
  _D3DKMT_RENDER v77; // [rsp+260h] [rbp-248h] BYREF
  _BYTE v78[24]; // [rsp+3D0h] [rbp-D8h] BYREF
  DXGADAPTER *v79; // [rsp+3E8h] [rbp-C0h]

  v70 = a1;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2013);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2013);
  Current = DXGPROCESS::GetCurrent(v4);
  v69[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v17 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 42;
    v46 = PsGetCurrentProcess(v45);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v46,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v54);
    }
    return (unsigned int)v17;
  }
  memset(&v77, 0, sizeof(v77));
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v77, v7, 0x170uLL);
  v65 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57, v77.hDevice, Current, &v65, 0, 1);
  v8 = v65;
  if ( !v65 )
  {
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v77.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 66;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v77.hDevice,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  if ( ((*(_BYTE *)&v77.Flags | (unsigned __int8)(*(_DWORD *)&v77.Flags >> 1)) & 0x20) != 0 )
  {
    v17 = -1073741811;
    WdLogSingleEntry2(2LL, v77.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 74;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"RenderKm and RenderKmReadback flags should not be set when DxgkRender is called. Context 0x%I64x returning 0x%I64x",
      v77.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  v9 = *((_DWORD *)v65 + 98);
  if ( (v9 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v65);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  if ( *((_BYTE *)v65 + 430) )
  {
    WdLogSingleEntry1(2LL, v77.hDevice);
    WdLogGlobalForLineNumber = 95;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkRender cannot be called on a virtual context. pContext=0x%p",
      v77.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_99;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64,
    *((struct DXGDEVICE **)v65 + 2));
  BroadcastContextCount = v77.BroadcastContextCount;
  if ( v77.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL)) )
  {
    v17 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 111;
LABEL_55:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
LABEL_56:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
    goto LABEL_57;
  }
  if ( BroadcastContextCount > 0x40 )
  {
    v17 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 119;
    goto LABEL_55;
  }
  v12 = BroadcastContextCount + 1;
  Pool2 = 0LL;
  v58 = 0LL;
  v60 = 0;
  if ( (unsigned int)v12 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 8 )
      goto LABEL_17;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v12, 1265072196LL, v10);
    v58 = Pool2;
  }
  else
  {
    Pool2 = v59;
    v58 = v59;
    if ( (_DWORD)v12 )
    {
      memset(v59, 0, 8LL * (unsigned int)v12);
      Pool2 = v58;
    }
  }
  v60 = v12;
LABEL_17:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 126;
LABEL_95:
    if ( v58 != v59 && v58 )
      ExFreePoolWithTag(v58, 0);
    v58 = 0LL;
    v60 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v54);
    return 3221225495LL;
  }
  *Pool2 = v8;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v71, Current);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= v77.BroadcastContextCount )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v72,
        v58,
        v60,
        v15,
        1);
      if ( v73 )
      {
        if ( v72[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 195;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
          goto LABEL_136;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 190;
      }
      else
      {
        v67 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
        v68 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v66);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, *((_QWORD *)v8 + 2), 0, v16, 0);
        v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78, 0LL);
        if ( v17 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v66);
          goto LABEL_52;
        }
        v18 = *((_QWORD *)v8 + 6);
        if ( v77.CommandOffset >= v18 )
        {
          v17 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v77.CommandOffset, v18, -1073741811LL);
          WdLogGlobalForLineNumber = 216;
          goto LABEL_46;
        }
        if ( v77.CommandLength + (unsigned __int64)v77.CommandOffset > v18 )
        {
          v17 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v77.CommandLength, v18, -1073741811LL);
          WdLogGlobalForLineNumber = 225;
          goto LABEL_46;
        }
        AllocationCount = v77.AllocationCount;
        if ( v77.AllocationCount > *((_DWORD *)v8 + 18) )
        {
          v17 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v77.AllocationCount, *((unsigned int *)v8 + 18), -1073741811LL);
          WdLogGlobalForLineNumber = 233;
          goto LABEL_46;
        }
        if ( v77.PatchLocationCount > *((_DWORD *)v8 + 26) )
        {
          v17 = -1073741811;
          WdLogSingleEntry4(3LL, v8, v77.PatchLocationCount, *((unsigned int *)v8 + 26), -1073741811LL);
          WdLogGlobalForLineNumber = 241;
          goto LABEL_46;
        }
        v17 = 0;
        Flags = (char)v77.Flags;
        if ( !v77.CommandLength )
        {
LABEL_43:
          if ( (Flags & 1) != 0 || (Flags & 2) != 0 || (Flags & 4) != 0 )
          {
            NewCommandBufferSize = v77.NewCommandBufferSize;
            if ( (Flags & 1) == 0 )
              NewCommandBufferSize = *((_DWORD *)v8 + 50);
            NewAllocationListSize = v77.NewAllocationListSize;
            if ( (Flags & 2) == 0 )
              NewAllocationListSize = *((_DWORD *)v8 + 53);
            NewPatchLocationListSize = v77.NewPatchLocationListSize;
            if ( (Flags & 4) == 0 )
              NewPatchLocationListSize = *((_DWORD *)v8 + 54);
            v36 = *((_DWORD *)v8 + 50);
            if ( NewCommandBufferSize < v36 )
              goto LABEL_85;
            if ( NewAllocationListSize >= *((_DWORD *)v8 + 53) && NewPatchLocationListSize >= *((_DWORD *)v8 + 54) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v79) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v78);
              DXGCONTEXT::ResizeUserModeBuffers(
                v8,
                *((struct VIDMM_DMA_POOL **)v8 + 29),
                NewCommandBufferSize,
                NewAllocationListSize,
                NewPatchLocationListSize);
              v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78, 0LL);
              goto LABEL_46;
            }
            if ( NewCommandBufferSize < v36 )
            {
LABEL_85:
              WdLogSingleEntry3(3LL, v8, NewCommandBufferSize, *((unsigned int *)v8 + 50));
              WdLogGlobalForLineNumber = 366;
            }
            v37 = *((_DWORD *)v8 + 53);
            if ( NewAllocationListSize < v37 )
            {
              WdLogSingleEntry3(3LL, v8, NewAllocationListSize, v37);
              WdLogGlobalForLineNumber = 373;
            }
            v38 = *((_DWORD *)v8 + 54);
            if ( NewPatchLocationListSize < v38 )
            {
              WdLogSingleEntry3(3LL, v8, NewPatchLocationListSize, v38);
              WdLogGlobalForLineNumber = 380;
            }
          }
LABEL_46:
          v24 = 0;
          v69[0] = 0LL;
          v25 = 0;
          v62 = 0;
          v26 = 0;
          v63 = 0;
          v27 = 0;
          if ( v17 != -1073741130 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v78);
            if ( !*((_BYTE *)v8 + 430) )
              (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 456LL))(
                *((_QWORD *)v8 + 29),
                v69,
                &v62,
                &v63);
            v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 456LL))(*((_QWORD *)v8 + 32));
            v24 = v69[0];
            v25 = v62;
            v26 = v63;
          }
          v28 = v70;
          *(_QWORD *)(v70 + 24) = *((_QWORD *)v8 + 7);
          *(_DWORD *)(v28 + 32) = v24;
          *(_QWORD *)(v28 + 40) = *((_QWORD *)v8 + 11);
          *(_DWORD *)(v28 + 48) = v25;
          *(_QWORD *)(v28 + 56) = *((_QWORD *)v8 + 15);
          *(_DWORD *)(v28 + 64) = v26;
          *(_DWORD *)(v28 + 340) = v27;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
          if ( v68 )
          {
            v68 = 0;
            v29 = (char *)v67 + 136;
            _InterlockedDecrement((volatile signed __int32 *)v67 + 38);
            ExReleasePushLockSharedEx(v29, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v67);
          }
LABEL_52:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
LABEL_53:
          if ( v58 != v59 && v58 )
            ExFreePoolWithTag(v58, 0);
          v58 = 0LL;
          v60 = 0;
          goto LABEL_55;
        }
        pNewAllocationList = v77.pNewAllocationList;
        if ( (*(_BYTE *)&v77.Flags & 0x20) == 0 )
          pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v8 + 11);
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL));
        v61 = AllocationCount;
        P = 0LL;
        v76 = 0;
        v23 = 0LL;
        if ( !IsDxgmms2 )
        {
LABEL_30:
          if ( v17 >= 0 )
          {
            v17 = DXGCONTEXT::Render(
                    v8,
                    &v77,
                    (struct COREDEVICEACCESS *)v78,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v66,
                    (struct DXGCONTEXT **)v58,
                    v23,
                    0LL);
            Flags = (char)v77.Flags;
          }
          if ( IsDxgmms2 && (_DWORD)AllocationCount )
          {
            do
            {
              if ( *v23 )
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)*v23 + 11);
              ++v23;
              --AllocationCount;
            }
            while ( AllocationCount );
            Flags = (char)v77.Flags;
          }
          if ( v17 >= 0 && (Flags & 0x10) != 0 )
          {
            v17 = DXGCONTEXT::HandleVistaBltStub(
                    v8,
                    v77.PresentHistoryToken,
                    1,
                    (struct COREDEVICEACCESS *)v78,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v66,
                    v77.BroadcastContextCount,
                    v77.BroadcastContext,
                    (struct DXGCONTEXT **)v58);
            Flags = (char)v77.Flags;
          }
          if ( P != v75 && P )
          {
            ExFreePoolWithTag(P, 0);
            Flags = (char)v77.Flags;
          }
          P = 0LL;
          v76 = 0;
          if ( v17 < 0 )
            goto LABEL_46;
          goto LABEL_43;
        }
        v39 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                         &P,
                                         (unsigned int)AllocationCount);
        v23 = v39;
        if ( v39 )
        {
          v17 = DxgkReferenceAllocationList(&v61, pNewAllocationList, v39, *((struct DXGDEVICE **)v8 + 2));
          Flags = (char)v77.Flags;
          AllocationCount = v61;
          goto LABEL_30;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 278;
        if ( P != v75 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v76 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v66);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
      goto LABEL_95;
    }
    v47 = v14;
    v48 = (v77.BroadcastContext[v14] >> 6) & 0xFFFFFF;
    if ( v48 < *((_DWORD *)Current + 74) )
    {
      v49 = *((_QWORD *)Current + 35);
      if ( ((v77.BroadcastContext[v14] >> 25) & 0x60) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x60)
        && (*(_DWORD *)(v49 + 16LL * v48 + 8) & 0x2000) == 0 )
      {
        v50 = *(_DWORD *)(v49 + 16LL * v48 + 8) & 0x1F;
        if ( v50 )
        {
          if ( v50 == 7 )
          {
            v51 = *(_QWORD *)(v49 + 16LL * v48);
            goto LABEL_124;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v51 = 0LL;
LABEL_124:
    *((_QWORD *)v58 + ++v14) = v51;
    v52 = *((_QWORD *)v58 + v14);
    if ( !v52 || (v53 = *(_DWORD *)(v52 + 392), (v53 & 8) != 0) || *(_QWORD *)(v52 + 16) != *((_QWORD *)v8 + 2) )
    {
      v17 = -1073741811;
      WdLogSingleEntry4(2LL, v8, v77.BroadcastContext[v47], v47, -1073741811LL);
      WdLogGlobalForLineNumber = 162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v8,
        v77.BroadcastContext[v47],
        v47,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71);
      goto LABEL_53;
    }
    if ( (v53 & 0x10) != 0 )
      break;
    if ( *(_BYTE *)(v52 + 430) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 178;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"BroadcastContextArray.Get()[i + 1]->UsesGpuVa() == FALSE",
        178LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  WdLogSingleEntry1(2LL, v52);
  WdLogGlobalForLineNumber = 169;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
    *((_QWORD *)v58 + v14),
    0LL,
    0LL,
    0LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v71);
LABEL_136:
  if ( v58 != v59 && v58 )
    ExFreePoolWithTag(v58, 0);
  v58 = 0LL;
  v60 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v64);
LABEL_99:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v57);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v54);
  return (unsigned int)-1073741811;
}
