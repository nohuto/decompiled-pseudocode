/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1402CFD80
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031360 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x14004C0D8 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140050E10 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x140051164 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x1400513CC (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018A51C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x140229218 (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x140394404 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1403A1FF4 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, void *a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *Pool2; // rax
  __int64 result; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edx
  enum _D3DKMT_CLIENTHINT v16; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v17; // ebx
  UINT v18; // esi
  UINT v19; // r14d
  __int64 v20; // rcx
  UINT v21; // edi
  unsigned int HostProcess; // eax
  int ContextVirtual; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rbx
  DXGCONTEXT *v32; // rax
  UINT v33; // r8d
  __int64 v34; // rdi
  UINT v35; // r10d
  int v36; // r11d
  unsigned int v37; // r11d
  __int64 v38; // r9
  ADAPTER_RENDER *v39; // rcx
  __int64 v40; // r8
  int v41; // r10d
  __int64 v42; // r9
  bool v43; // al
  int v44; // eax
  __m128i v45; // xmm1
  struct _LOOKASIDE_LIST_EX *v46; // rax
  NTSTATUS v47; // eax
  __int64 v48; // rbx
  __int64 Value; // r8
  __int64 v50; // rax
  char v51; // r10
  __int64 v52; // rdx
  __int64 v53; // rcx
  bool v54; // al
  unsigned int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  int v60; // edx
  int v61; // edx
  unsigned int v62; // r8d
  __int64 v63; // r9
  struct _VIDSCH_CONTEXT *Context; // rcx
  __int64 v65; // r8
  int v66; // eax
  unsigned int v67; // r14d
  _QWORD *v68; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v70; // eax
  void *v71; // r14
  const void *v72; // rdx
  void *v73; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v74; // rax
  int v75; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r8
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  SIZE_T *v82; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v83; // rax
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // r8
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  SIZE_T *v89; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v90; // rax
  int v91; // eax
  struct DXGGLOBAL *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rsi
  unsigned __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rbx
  ULONG Flags[2]; // [rsp+20h] [rbp-1A8h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-1A8h]
  SIZE_T Size; // [rsp+28h] [rbp-1A0h]
  SIZE_T Sizea; // [rsp+28h] [rbp-1A0h]
  ULONG Tag[2]; // [rsp+30h] [rbp-198h]
  ULONG Taga[2]; // [rsp+30h] [rbp-198h]
  USHORT Depth[4]; // [rsp+38h] [rbp-190h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-190h]
  void *v107; // [rsp+40h] [rbp-188h]
  void *v108; // [rsp+40h] [rbp-188h]
  __int64 v109; // [rsp+80h] [rbp-148h]
  unsigned int v110; // [rsp+80h] [rbp-148h]
  unsigned int v111; // [rsp+80h] [rbp-148h]
  ULONG64 v112; // [rsp+80h] [rbp-148h]
  void *v114; // [rsp+90h] [rbp-138h] BYREF
  int v115; // [rsp+98h] [rbp-130h]
  DXGCONTEXT *v116; // [rsp+A0h] [rbp-128h]
  _BYTE v117[24]; // [rsp+A8h] [rbp-120h] BYREF
  _D3DKMT_CREATEHWQUEUE v118; // [rsp+C0h] [rbp-108h] BYREF
  _DXGKARG_CREATECONTEXT v119; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v120[28]; // [rsp+140h] [rbp-88h] BYREF
  int v121; // [rsp+15Ch] [rbp-6Ch]
  __m256i v122; // [rsp+160h] [rbp-68h] BYREF

  v114 = a2;
  v116 = this;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v109 = v5;
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v5, this, 1, *((_DWORD *)this + 95));
  if ( *(int *)(v5 + 2736) >= 9472 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1265072196LL);
    *((_QWORD *)this + 59) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(6LL, this);
      WdLogGlobalForLineNumber = 897;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"DXGCONTEXT (0x%p) failed to allocate m_pDxgkrnlContextHandle",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *Pool2 = this;
  }
  if ( *((_BYTE *)this + 433) && !*((_BYTE *)this + 430) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 906;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The physical adapter requres GpuVaIoMmu but a non-virtual context is created",
      906LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v6);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v117, Current);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 280LL),
          (__int64)this,
          7,
          0,
          0);
  v11 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 926;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v117);
    return 3221225495LL;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v13 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v12 + 296) )
  {
    v14 = *(_QWORD *)(v12 + 280);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( (unsigned int)v11 >> 30 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      *(_DWORD *)(v14 + 16 * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v117);
  if ( *(_BYTE *)(v5 + 209) )
  {
    *((_BYTE *)this + 434) = 1;
    v16 = *((_DWORD *)this + 36);
    v17.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 98);
    v18 = *((_DWORD *)this + 96);
    v19 = *((_DWORD *)this + 95);
    v20 = *((_QWORD *)this + 2);
    v21 = *(_DWORD *)(v20 + 472);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v20 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v109 + 4664),
                       HostProcess,
                       v21,
                       v19,
                       v18,
                       v17,
                       v16,
                       a3,
                       v114);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( !ContextVirtual )
    {
      WdLogSingleEntry0(2LL);
      v24 = 950LL;
      v25 = L"Failed to create context on the host";
LABEL_19:
      WdLogGlobalForLineNumber = v24;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v25, v24, 0LL, 0LL, 0LL, 0LL);
      return 3221225473LL;
    }
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v27 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v26 + 248));
    v28 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v26 + 296) )
    {
      v29 = *(_QWORD *)(v26 + 280);
      if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
      {
        v30 = 2 * ((v27 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v29 + 8 * v30 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v26 + 280) + 8 * v30 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v26 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v122 = *(__m256i *)((char *)this + 200);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v108) = v122.m256i_i32[2];
        *(_DWORD *)Deptha = v122.m256i_i32[1];
        Taga[0] = v122.m256i_i32[0];
        LODWORD(Sizea) = *((_DWORD *)this + 96);
        Flagsa[0] = *((_DWORD *)this + 95);
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          HIDWORD(v122.m256i_i64[0]),
          &EventCreateContext,
          v122.m256i_i64[0],
          *((_QWORD *)this + 2),
          *(_QWORD *)Flagsa,
          Sizea,
          *(_QWORD *)Taga,
          *(_QWORD *)Deptha,
          v108,
          v122.m256i_i32[3],
          v122.m256i_i32[4],
          0,
          this,
          *((unsigned int *)this + 6),
          0LL);
      }
    }
    return 0LL;
  }
  LODWORD(v31) = 0;
  memset(&v119, 0, sizeof(v119));
  if ( *(int *)(v5 + 2736) < 9472 )
    v32 = this;
  else
    v32 = (DXGCONTEXT *)*((_QWORD *)this + 59);
  *((_QWORD *)this + 24) = v32;
  v119.hContext = v32;
  v33 = *((_DWORD *)this + 95);
  v119.NodeOrdinal = v33;
  v119.EngineAffinity = *((_DWORD *)this + 96);
  v119.pPrivateDriverData = a2;
  v119.PrivateDriverDataSize = a3;
  v34 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v34 + 1917) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v119.Flags.Value |= 2u;
  v115 = *((unsigned __int8 *)this + 430);
  v35 = v119.Flags.Value & 0xFFFFFFFB | (4 * (v115 & 1));
  v119.Flags.Value = v35;
  v36 = *((_DWORD *)this + 98);
  if ( (v36 & 0x40) != 0 )
    v119.Flags.Value = v35 | 0x20;
  if ( (v36 & 8) != 0 )
  {
    v37 = v36 & 0xFFFFFFEF;
    *((_DWORD *)this + 98) = v37;
  }
  else
  {
    v39 = *(ADAPTER_RENDER **)(v34 + 16);
    if ( (v36 & 0x10) != 0 )
    {
      if ( *(int *)(*((_QWORD *)v39 + 2) + 3004LL) < 2500 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1023LL;
        v25 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
        goto LABEL_19;
      }
      v110 = *((_DWORD *)this + 97);
      if ( !ADAPTER_RENDER::NodeSupportsContextScheduling(v39, v110, v33) )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1029LL;
        v25 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
        goto LABEL_19;
      }
      if ( !(_BYTE)v115 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1035LL;
        v25 = L"Only virtual contexts can use HwQueueSupported flag";
        goto LABEL_19;
      }
      if ( v37 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1041LL;
        v25 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_19;
      }
      v119.Flags.Value = v41 | 0x10;
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 2992LL) + 344LL * v110 + 32);
      if ( v42 )
        v43 = (*(_BYTE *)(74 * v40 + v42 + 68) & 2) != 0;
      else
        v43 = 0;
      *((_BYTE *)this + 296) = v43;
    }
    else if ( ADAPTER_RENDER::NodeSupportsContextScheduling(v39, *((_DWORD *)this + 97), v33) )
    {
      WdLogSingleEntry0(2LL);
      v24 = 1053LL;
      v25 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
      goto LABEL_19;
    }
  }
  v38 = *(_QWORD *)(v34 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v38 + 16) + 2464LL) & 1) != 0 )
  {
    if ( (v37 & 0x20) != 0 )
    {
      result = CheckNoKmdAccessPrivateData(a3, v114, 0xFF000003);
      LODWORD(v31) = result;
      if ( (int)result < 0 )
        return result;
      v119.hContext = 0LL;
      v119.ContextInfo.DmaBufferPrivateDataSize = 264;
      v119.ContextInfo.AllocationListSize = 128;
      v119.ContextInfo.PatchLocationListSize = 128;
      v119.ContextInfo.DmaBufferSize = 1024;
    }
    else if ( (v37 & 8) != 0 )
    {
      v119.hContext = 0LL;
    }
    else
    {
      v44 = ADAPTER_RENDER::DdiCreateContext(*(ADAPTER_RENDER **)(v34 + 16), *(void **)(v34 + 616), &v119);
      v31 = v44;
      if ( v44 < 0 )
      {
        WdLogSingleEntry1(2LL, v44);
        WdLogGlobalForLineNumber = 1088;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DdiCreateContext() failed with status 0x%I64x",
          v31,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
  }
  else
  {
    v119.hContext = *(HANDLE *)(v34 + 616);
    v45 = *(__m128i *)(v34 + 624);
    *(_QWORD *)&v120[16] = *(_QWORD *)(v34 + 640);
    v119.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v45);
    *(_QWORD *)&v120[16] = *(_QWORD *)(v34 + 640);
    v119.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v34 + 624));
    *(_QWORD *)&v120[16] = *(_QWORD *)(v34 + 640);
    v119.ContextInfo.AllocationListSize = HIDWORD(*(_QWORD *)(v34 + 632));
    *(_OWORD *)v120 = *(_OWORD *)(v34 + 624);
    *(_QWORD *)&v120[16] = *(_QWORD *)(v34 + 640);
    v119.ContextInfo.PatchLocationListSize = *(_DWORD *)&v120[16];
    *(_QWORD *)&v120[16] = *(_QWORD *)(v34 + 640);
    v119.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v34 + 632)));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v31 < 0 )
    return (unsigned int)v31;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2)
    && v119.ContextInfo.AllocationListSize != 256 )
  {
    WdLogSingleEntry2(3LL, 256LL, v119.ContextInfo.AllocationListSize);
    WdLogGlobalForLineNumber = 1124;
    v119.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v119.hContext;
  *(DXGK_CONTEXTINFO *)((char *)this + 200) = v119.ContextInfo;
  if ( *((_DWORD *)this + 52) )
  {
    v46 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x64507844u, 64LL);
    *((_QWORD *)this + 61) = v46;
    if ( !v46 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1138;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate lookaside list for private driver data",
        1138LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v47 = ExInitializeLookasideListEx(
            v46,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            (unsigned int)(*((_DWORD *)this + 52) + 16),
            0x64507844u,
            0);
    v111 = v47;
    if ( v47 < 0 )
    {
      v48 = v47;
      WdLogSingleEntry1(2LL, v47);
      WdLogGlobalForLineNumber = 1154;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to initialize lookaside list for private driver data 0x%x",
        v48,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
      *((_QWORD *)this + 61) = 0LL;
      return v111;
    }
  }
  Value = v119.ContextInfo.Caps.Value;
  if ( (*(_BYTE *)&v119.ContextInfo.Caps.0 & 2) != 0 )
  {
    v50 = *((_QWORD *)this + 2);
    *(_BYTE *)(v50 + 1919) = 1;
    *(_BYTE *)(*(_QWORD *)(v50 + 40) + 337LL) = 1;
    Value = v119.ContextInfo.Caps.Value;
  }
  v51 = *((_BYTE *)this + 430);
  if ( v51 )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2992LL)
                    + 344LL * *((unsigned int *)this + 97)
                    + 32);
    v53 = *((unsigned int *)this + 95);
    if ( v52 )
      LOBYTE(v38) = *(_BYTE *)(74 * v53 + v52 + 73);
    else
      LOBYTE(v38) = 0;
    if ( v52 )
      v54 = *(_BYTE *)(74 * v53 + v52 + 72) != 0;
    else
      v54 = 0;
    if ( *((_BYTE *)this + 433) )
    {
      if ( (Value & 4) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1174;
        return 3221225473LL;
      }
    }
    else if ( (Value & 4) != 0 || (_BYTE)v38 && !v54 )
    {
      if ( !(_BYTE)v38 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1183;
        return 3221225473LL;
      }
      *((_BYTE *)this + 431) = 1;
    }
    else
    {
      *((_BYTE *)this + 432) = 1;
    }
  }
  if ( !v51 && !*((_DWORD *)this + 50) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1194;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_bUseGpuVa || m_ContextInfo.DmaBufferSize",
      1194LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 430) )
  {
    if ( !*((_DWORD *)this + 53) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1195;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_bUseGpuVa || m_ContextInfo.AllocationListSize",
        1195LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_BYTE *)this + 430) && !*((_DWORD *)this + 54) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1196;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_bUseGpuVa || m_ContextInfo.PatchLocationListSize",
        1196LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    v55 = *((_DWORD *)this + 6);
    v122 = *(__m256i *)((char *)this + 200);
    v38 = *((unsigned int *)this + 95);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v107) = v122.m256i_i32[2];
      *(_DWORD *)Depth = v122.m256i_i32[1];
      Tag[0] = v122.m256i_i32[0];
      LODWORD(Size) = *((_DWORD *)this + 96);
      Flags[0] = *((_DWORD *)this + 95);
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        HIDWORD(v122.m256i_i64[0]),
        &EventCreateContext,
        v122.m256i_i64[0],
        *((_QWORD *)this + 2),
        *(_QWORD *)Flags,
        Size,
        *(_QWORD *)Tag,
        *(_QWORD *)Depth,
        v107,
        v122.m256i_i32[3],
        v122.m256i_i32[4],
        0,
        this,
        v55,
        0LL);
    }
  }
  v56 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
  {
    v122.m256i_i32[0] = 0;
    *(__int64 *)((char *)&v122.m256i_i64[1] + 4) = 0LL;
    v122.m256i_i32[6] = 0;
    v122.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v56 + 40) + 416LL);
    v122.m256i_i32[1] = *((_DWORD *)this + 95);
    v122.m256i_i32[2] = *((_DWORD *)this + 97);
    v122.m256i_i32[0] = 2
                      * (*((_DWORD *)this + 98) & 1 | (4
                                                     * (*((_DWORD *)this + 98) & 4 | (16
                                                                                    * (*((_DWORD *)this + 98) & 0x28 | 0x11)))));
    v122.m256i_i32[7] = *((_DWORD *)this + 36);
    v57 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
            this,
            &v122,
            Value,
            v38);
    *((_QWORD *)this + 35) = v57;
    if ( !v57 )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1241;
      return 3221225495LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v57,
        &EventAssociateContext,
        v58,
        this,
        v57,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
    memset(&v118, 0, sizeof(v118));
    v59 = VIDSCH_EXPORT::VidSchCreateHwQueue(
            *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
            0LL,
            *((struct VIDSCH_HW_CONTEXT **)this + 35),
            &v118,
            (struct VIDSCH_HW_QUEUE **)this + 36);
    v111 = v59;
    if ( v59 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v59);
      WdLogGlobalForLineNumber = 1259;
      return v111;
    }
  }
  else
  {
    memset(v120, 0, sizeof(v120));
    v121 = 0;
    *(_DWORD *)&v120[12] = 0;
    *(_DWORD *)&v120[20] = *(_DWORD *)(*(_QWORD *)(v56 + 40) + 416LL);
    *(_DWORD *)&v120[4] = *((_DWORD *)this + 95);
    *(_DWORD *)&v120[8] = *((_DWORD *)this + 97);
    v60 = 2 * (*((_DWORD *)this + 98) & 1 | ((*((_DWORD *)this + 98) & 0x20) << 6));
    *(_DWORD *)v120 = v60;
    v121 = *((_DWORD *)this + 36);
    if ( *((_BYTE *)this + 430) )
      *(_DWORD *)v120 = v60 | 0x80;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      if ( v62 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v24 = 1289LL;
        v25 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_19;
      }
      *(_DWORD *)v120 = v61 & 0xFFFFFBDF | (8 * (v62 & 4 | (16 * (v62 & 8))));
    }
    Context = VIDSCH_EXPORT::VidSchCreateContext(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(v63 + 16) + 736LL),
                this,
                (struct _VIDSCH_CONTEXT_DATA *)v120);
    *((_QWORD *)this + 32) = Context;
    if ( !Context )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1303;
      return 3221225495LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        (__int64)Context,
        &EventAssociateContext,
        v65,
        this,
        Context,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 430) || *(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2 )
  {
    v66 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
    v67 = v66;
    if ( v66 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v66);
      WdLogGlobalForLineNumber = 1321;
      return v67;
    }
  }
  v68 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
  *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 430) )
  {
    if ( *((_QWORD *)this + 44) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1342;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"NULL == m_pCommandDmaBuffer",
        1342LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 444LL) & 0x10) != 0
      && v114
      && a3 == 16 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v70 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
              -1LL,
              (char *)this + 56,
              0LL,
              (char *)this + 48,
              12288,
              4);
      v67 = v70;
      if ( v70 < 0 )
      {
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 6), v70);
        WdLogGlobalForLineNumber = 1363;
        return v67;
      }
      v71 = (void *)*((_QWORD *)v114 + 1);
      v112 = *(_QWORD *)v114;
      v114 = 0LL;
      v72 = v71;
      if ( (unsigned __int64)v71 >= MmUserProbeAddress )
        v72 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v114, v72, 8uLL);
      if ( !v71 || (unsigned __int64)v114 < 8 || (v73 = (void *)v112) == 0LL )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 1387;
        return 3221225485LL;
      }
      if ( v112 >= MmUserProbeAddress )
        v73 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v73, (char *)this + 56, 8uLL);
      if ( (unsigned __int64)v71 >= MmUserProbeAddress )
        v71 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v71, (char *)this + 48, 8uLL);
    }
  }
  else
  {
    v74 = DxgkGetVirtualMemoryInterface();
    v75 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v74)(
            -1LL,
            (char *)this + 56,
            0LL,
            (char *)this + 48,
            12288,
            4);
    v111 = v75;
    if ( v75 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v68, v75);
      WdLogGlobalForLineNumber = 1416;
      return v111;
    }
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                            (struct DXGGLOBAL *)((char *)Global + 1652),
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v77 = ExAllocatePool2(256LL, *v68, 1265072196LL);
      *((_QWORD *)this + 8) = v77;
      if ( !v77 )
      {
        WdLogSingleEntry3(3LL, this, *v68, -1073741801LL);
        WdLogGlobalForLineNumber = 1430;
        return 3221225495LL;
      }
    }
  }
  v78 = *((unsigned int *)this + 18);
  if ( (_DWORD)v78 )
  {
    v79 = (unsigned int)v78;
    v80 = 8 * v78;
    v81 = 0xFFFFFFFFLL;
    if ( v80 <= 0xFFFFFFFF )
      v81 = (unsigned int)v80;
    v67 = v80 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v80 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v79);
      WdLogGlobalForLineNumber = 1448;
      return v67;
    }
    v82 = (SIZE_T *)((char *)this + 80);
    *((_QWORD *)this + 10) = v81;
    v83 = DxgkGetVirtualMemoryInterface();
    v84 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v83)(
            -1LL,
            (char *)this + 88,
            0LL,
            (char *)this + 80,
            12288,
            4);
    v111 = v84;
    if ( v84 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v82, v84);
      WdLogGlobalForLineNumber = 1469;
      return v111;
    }
    *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v82, 4u);
    if ( !*((_QWORD *)this + 12) )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1493;
      return 3221225495LL;
    }
  }
  v85 = *((unsigned int *)this + 26);
  if ( (_DWORD)v85 )
  {
    v86 = (unsigned int)v85;
    v87 = 24 * v85;
    v88 = 0xFFFFFFFFLL;
    if ( v87 <= 0xFFFFFFFF )
      v88 = (unsigned int)v87;
    v67 = v87 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v87 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v86);
      WdLogGlobalForLineNumber = 1510;
      return v67;
    }
    v89 = (SIZE_T *)((char *)this + 112);
    *((_QWORD *)this + 14) = v88;
    v90 = DxgkGetVirtualMemoryInterface();
    v91 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v90)(
            -1LL,
            (char *)this + 120,
            0LL,
            (char *)this + 112,
            12288,
            4);
    v111 = v91;
    if ( v91 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v89, v91);
      WdLogGlobalForLineNumber = 1529;
      return v111;
    }
    *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v89, 4u);
    if ( !*((_QWORD *)this + 17) )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1553;
      return 3221225495LL;
    }
    v92 = DXGGLOBAL::GetGlobal();
    if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                            (struct DXGGLOBAL *)((char *)v92 + 1652),
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v93 = ExAllocatePool2(256LL, *((_QWORD *)this + 14), 1265072196LL);
      *((_QWORD *)this + 16) = v93;
      if ( !v93 )
      {
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 14), -1073741801LL);
        WdLogGlobalForLineNumber = 1567;
        return 3221225495LL;
      }
    }
  }
  v94 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v95 = *((unsigned int *)this + 6);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v94 + 248));
  v96 = ((unsigned int)v95 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v96 < *(_DWORD *)(v94 + 296) )
  {
    v97 = *(_QWORD *)(v94 + 280);
    if ( (((unsigned int)v95 >> 25) & 0x60) == (*(_BYTE *)(v97 + 16 * v96 + 8) & 0x60)
      && (*(_DWORD *)(v97 + 16 * v96 + 8) & 0x1F) != 0 )
    {
      v98 = 2 * ((v95 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v97 + 8 * v98 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v94 + 280) + 8 * v98 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v94 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v94 + 248, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
