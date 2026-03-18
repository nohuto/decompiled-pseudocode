/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403367F0
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031440 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1400419DC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x14004C628 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051500 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x140051854 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140051978 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018820C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x14022292C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x14039DD1C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1403B145C (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, void *a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r9
  _QWORD *Pool2; // rax
  __int64 result; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // edx
  enum _D3DKMT_CLIENTHINT v17; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v18; // ebx
  UINT v19; // esi
  UINT v20; // r14d
  __int64 v21; // rcx
  UINT v22; // edi
  unsigned int HostProcess; // eax
  int ContextVirtual; // eax
  __int64 v25; // rax
  const wchar_t *v26; // r9
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rbx
  DXGCONTEXT *v33; // rax
  UINT v34; // r8d
  __int64 v35; // rdi
  UINT v36; // r10d
  int v37; // r11d
  unsigned int v38; // r11d
  __int64 v39; // r9
  ADAPTER_RENDER *v40; // rcx
  __int64 v41; // r8
  int v42; // r10d
  __int64 v43; // r9
  bool v44; // al
  int v45; // eax
  __m128i v46; // xmm1
  struct _LOOKASIDE_LIST_EX *v47; // rax
  NTSTATUS v48; // eax
  __int64 v49; // rbx
  __int64 Value; // r8
  __int64 v51; // rax
  char v52; // r10
  __int64 v53; // rdx
  __int64 v54; // rcx
  bool v55; // al
  unsigned int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  int v61; // edx
  int v62; // edx
  unsigned int v63; // r8d
  __int64 v64; // r9
  struct _VIDSCH_CONTEXT *Context; // rcx
  __int64 v66; // r8
  int v67; // eax
  unsigned int v68; // r14d
  _QWORD *v69; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v71; // eax
  void *v72; // r14
  const void *v73; // rdx
  void *v74; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v75; // rax
  int v76; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r8
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  SIZE_T *v84; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v85; // rax
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r8
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  SIZE_T *v91; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v92; // rax
  int v93; // eax
  struct DXGGLOBAL *v94; // rax
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rsi
  unsigned __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rbx
  ULONG Flags[2]; // [rsp+20h] [rbp-1A8h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-1A8h]
  SIZE_T Size; // [rsp+28h] [rbp-1A0h]
  SIZE_T Sizea; // [rsp+28h] [rbp-1A0h]
  ULONG Tag[2]; // [rsp+30h] [rbp-198h]
  ULONG Taga[2]; // [rsp+30h] [rbp-198h]
  USHORT Depth[4]; // [rsp+38h] [rbp-190h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-190h]
  void *v110; // [rsp+40h] [rbp-188h]
  void *v111; // [rsp+40h] [rbp-188h]
  __int64 v112; // [rsp+80h] [rbp-148h]
  unsigned int v113; // [rsp+80h] [rbp-148h]
  unsigned int v114; // [rsp+80h] [rbp-148h]
  ULONG64 v115; // [rsp+80h] [rbp-148h]
  void *v117; // [rsp+90h] [rbp-138h] BYREF
  int v118; // [rsp+98h] [rbp-130h]
  DXGCONTEXT *v119; // [rsp+A0h] [rbp-128h]
  _BYTE v120[24]; // [rsp+A8h] [rbp-120h] BYREF
  _D3DKMT_CREATEHWQUEUE v121; // [rsp+C0h] [rbp-108h] BYREF
  _DXGKARG_CREATECONTEXT v122; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v123[28]; // [rsp+140h] [rbp-88h] BYREF
  int v124; // [rsp+15Ch] [rbp-6Ch]
  __m256i v125; // [rsp+160h] [rbp-68h] BYREF

  v117 = a2;
  v119 = this;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v112 = v5;
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v5, this, 1, *((_DWORD *)this + 95));
  if ( *(int *)(v5 + 2736) >= 9472 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1265072196LL, v7);
    *((_QWORD *)this + 59) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(6LL, this);
      WdLogGlobalForLineNumber = 897;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
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
      0x40000,
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
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v120, Current);
  v11 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 280LL),
          (__int64)this,
          7,
          0,
          0);
  v12 = v11;
  *((_DWORD *)this + 6) = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 926;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v120);
    return 3221225495LL;
  }
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v14 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 < *(_DWORD *)(v13 + 296) )
  {
    v15 = *(_QWORD *)(v13 + 280);
    v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
    if ( (unsigned int)v12 >> 30 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      *(_DWORD *)(v15 + 16 * ((v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v120);
  if ( *(_BYTE *)(v5 + 209) )
  {
    *((_BYTE *)this + 434) = 1;
    v17 = *((_DWORD *)this + 36);
    v18.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 98);
    v19 = *((_DWORD *)this + 96);
    v20 = *((_DWORD *)this + 95);
    v21 = *((_QWORD *)this + 2);
    v22 = *(_DWORD *)(v21 + 472);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v21 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v112 + 4664),
                       HostProcess,
                       v22,
                       v20,
                       v19,
                       v18,
                       v17,
                       a3,
                       v117);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( !ContextVirtual )
    {
      WdLogSingleEntry0(2LL);
      v25 = 950LL;
      v26 = L"Failed to create context on the host";
LABEL_19:
      WdLogGlobalForLineNumber = v25;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v26, v25, 0LL, 0LL, 0LL, 0LL);
      return 3221225473LL;
    }
    v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    v28 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v27 + 248));
    v29 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v27 + 296) )
    {
      v30 = *(_QWORD *)(v27 + 280);
      if ( (((unsigned int)v28 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
        && (*(_DWORD *)(v30 + 16 * v29 + 8) & 0x1F) != 0 )
      {
        v31 = 2 * ((v28 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v30 + 8 * v31 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v27 + 280) + 8 * v31 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v27 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v27 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled )
    {
      v125 = *(__m256i *)((char *)this + 200);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v111) = v125.m256i_i32[2];
        *(_DWORD *)Deptha = v125.m256i_i32[1];
        Taga[0] = v125.m256i_i32[0];
        LODWORD(Sizea) = *((_DWORD *)this + 96);
        Flagsa[0] = *((_DWORD *)this + 95);
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          HIDWORD(v125.m256i_i64[0]),
          &EventCreateContext,
          v125.m256i_i64[0],
          *((_QWORD *)this + 2),
          *(_QWORD *)Flagsa,
          Sizea,
          *(_QWORD *)Taga,
          *(_QWORD *)Deptha,
          v111,
          v125.m256i_i32[3],
          v125.m256i_i32[4],
          0,
          this,
          *((unsigned int *)this + 6),
          0LL);
      }
    }
    return 0LL;
  }
  LODWORD(v32) = 0;
  memset(&v122, 0, sizeof(v122));
  if ( *(int *)(v5 + 2736) < 9472 )
    v33 = this;
  else
    v33 = (DXGCONTEXT *)*((_QWORD *)this + 59);
  *((_QWORD *)this + 24) = v33;
  v122.hContext = v33;
  v34 = *((_DWORD *)this + 95);
  v122.NodeOrdinal = v34;
  v122.EngineAffinity = *((_DWORD *)this + 96);
  v122.pPrivateDriverData = a2;
  v122.PrivateDriverDataSize = a3;
  v35 = *((_QWORD *)this + 2);
  if ( (*(_BYTE *)(v35 + 1901) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v122.Flags.Value |= 2u;
  v118 = *((unsigned __int8 *)this + 430);
  v36 = v122.Flags.Value & 0xFFFFFFFB | (4 * (v118 & 1));
  v122.Flags.Value = v36;
  v37 = *((_DWORD *)this + 98);
  if ( (v37 & 0x40) != 0 )
    v122.Flags.Value = v36 | 0x20;
  if ( (v37 & 8) != 0 )
  {
    v38 = v37 & 0xFFFFFFEF;
    *((_DWORD *)this + 98) = v38;
  }
  else
  {
    v40 = *(ADAPTER_RENDER **)(v35 + 16);
    if ( (v37 & 0x10) != 0 )
    {
      if ( *(int *)(*((_QWORD *)v40 + 2) + 3004LL) < 2500 )
      {
        WdLogSingleEntry0(2LL);
        v25 = 1023LL;
        v26 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
        goto LABEL_19;
      }
      v113 = *((_DWORD *)this + 97);
      if ( !ADAPTER_RENDER::NodeSupportsContextScheduling(v40, v113, v34) )
      {
        WdLogSingleEntry0(2LL);
        v25 = 1029LL;
        v26 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
        goto LABEL_19;
      }
      if ( !(_BYTE)v118 )
      {
        WdLogSingleEntry0(2LL);
        v25 = 1035LL;
        v26 = L"Only virtual contexts can use HwQueueSupported flag";
        goto LABEL_19;
      }
      if ( v38 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v25 = 1041LL;
        v26 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_19;
      }
      v122.Flags.Value = v42 | 0x10;
      v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 2992LL) + 344LL * v113 + 32);
      if ( v43 )
        v44 = (*(_BYTE *)(74 * v41 + v43 + 68) & 2) != 0;
      else
        v44 = 0;
      *((_BYTE *)this + 296) = v44;
    }
    else if ( ADAPTER_RENDER::NodeSupportsContextScheduling(v40, *((_DWORD *)this + 97), v34) )
    {
      WdLogSingleEntry0(2LL);
      v25 = 1053LL;
      v26 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
      goto LABEL_19;
    }
  }
  v39 = *(_QWORD *)(v35 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v39 + 16) + 2464LL) & 1) != 0 )
  {
    if ( (v38 & 0x20) != 0 )
    {
      result = CheckNoKmdAccessPrivateData(a3, v117, 0xFF000003);
      LODWORD(v32) = result;
      if ( (int)result < 0 )
        return result;
      v122.hContext = 0LL;
      v122.ContextInfo.DmaBufferPrivateDataSize = 264;
      v122.ContextInfo.AllocationListSize = 128;
      v122.ContextInfo.PatchLocationListSize = 128;
      v122.ContextInfo.DmaBufferSize = 1024;
    }
    else if ( (v38 & 8) != 0 )
    {
      v122.hContext = 0LL;
    }
    else
    {
      v45 = ADAPTER_RENDER::DdiCreateContext(*(ADAPTER_RENDER **)(v35 + 16), *(void **)(v35 + 616), &v122);
      v32 = v45;
      if ( v45 < 0 )
      {
        WdLogSingleEntry1(2LL, v45);
        WdLogGlobalForLineNumber = 1088;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DdiCreateContext() failed with status 0x%I64x",
          v32,
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
    v122.hContext = *(HANDLE *)(v35 + 616);
    v46 = *(__m128i *)(v35 + 624);
    *(_QWORD *)&v123[16] = *(_QWORD *)(v35 + 640);
    v122.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v46);
    *(_QWORD *)&v123[16] = *(_QWORD *)(v35 + 640);
    v122.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v35 + 624));
    *(_QWORD *)&v123[16] = *(_QWORD *)(v35 + 640);
    v122.ContextInfo.AllocationListSize = HIDWORD(*(_QWORD *)(v35 + 632));
    *(_OWORD *)v123 = *(_OWORD *)(v35 + 624);
    *(_QWORD *)&v123[16] = *(_QWORD *)(v35 + 640);
    v122.ContextInfo.PatchLocationListSize = *(_DWORD *)&v123[16];
    *(_QWORD *)&v123[16] = *(_QWORD *)(v35 + 640);
    v122.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v35 + 632)));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v32 < 0 )
    return (unsigned int)v32;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2)
    && v122.ContextInfo.AllocationListSize != 256 )
  {
    WdLogSingleEntry2(3LL, 256LL, v122.ContextInfo.AllocationListSize);
    WdLogGlobalForLineNumber = 1124;
    v122.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v122.hContext;
  *(DXGK_CONTEXTINFO *)((char *)this + 200) = v122.ContextInfo;
  if ( *((_DWORD *)this + 52) )
  {
    v47 = (struct _LOOKASIDE_LIST_EX *)operator new(0x60uLL, 0x64507844u, 64LL, v39);
    *((_QWORD *)this + 61) = v47;
    if ( !v47 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1138;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate lookaside list for private driver data",
        1138LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v48 = ExInitializeLookasideListEx(
            v47,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            (unsigned int)(*((_DWORD *)this + 52) + 16),
            0x64507844u,
            0);
    v114 = v48;
    if ( v48 < 0 )
    {
      v49 = v48;
      WdLogSingleEntry1(2LL, v48);
      WdLogGlobalForLineNumber = 1154;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to initialize lookaside list for private driver data 0x%x",
        v49,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
      *((_QWORD *)this + 61) = 0LL;
      return v114;
    }
  }
  Value = v122.ContextInfo.Caps.Value;
  if ( (*(_BYTE *)&v122.ContextInfo.Caps.0 & 2) != 0 )
  {
    v51 = *((_QWORD *)this + 2);
    *(_BYTE *)(v51 + 1903) = 1;
    *(_BYTE *)(*(_QWORD *)(v51 + 40) + 337LL) = 1;
    Value = v122.ContextInfo.Caps.Value;
  }
  v52 = *((_BYTE *)this + 430);
  if ( v52 )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2992LL)
                    + 344LL * *((unsigned int *)this + 97)
                    + 32);
    v54 = *((unsigned int *)this + 95);
    if ( v53 )
      LOBYTE(v39) = *(_BYTE *)(74 * v54 + v53 + 73);
    else
      LOBYTE(v39) = 0;
    if ( v53 )
      v55 = *(_BYTE *)(74 * v54 + v53 + 72) != 0;
    else
      v55 = 0;
    if ( *((_BYTE *)this + 433) )
    {
      if ( (Value & 4) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1174;
        return 3221225473LL;
      }
    }
    else if ( (Value & 4) != 0 || (_BYTE)v39 && !v55 )
    {
      if ( !(_BYTE)v39 )
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
  if ( !v52 && !*((_DWORD *)this + 50) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1194;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
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
        262146,
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
        262146,
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
    v56 = *((_DWORD *)this + 6);
    v125 = *(__m256i *)((char *)this + 200);
    v39 = *((unsigned int *)this + 95);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      LODWORD(v110) = v125.m256i_i32[2];
      *(_DWORD *)Depth = v125.m256i_i32[1];
      Tag[0] = v125.m256i_i32[0];
      LODWORD(Size) = *((_DWORD *)this + 96);
      Flags[0] = *((_DWORD *)this + 95);
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        HIDWORD(v125.m256i_i64[0]),
        &EventCreateContext,
        v125.m256i_i64[0],
        *((_QWORD *)this + 2),
        *(_QWORD *)Flags,
        Size,
        *(_QWORD *)Tag,
        *(_QWORD *)Depth,
        v110,
        v125.m256i_i32[3],
        v125.m256i_i32[4],
        0,
        this,
        v56,
        0LL);
    }
  }
  v57 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
  {
    v125.m256i_i32[0] = 0;
    *(__int64 *)((char *)&v125.m256i_i64[1] + 4) = 0LL;
    v125.m256i_i32[6] = 0;
    v125.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v57 + 40) + 416LL);
    v125.m256i_i32[1] = *((_DWORD *)this + 95);
    v125.m256i_i32[2] = *((_DWORD *)this + 97);
    v125.m256i_i32[0] = 2
                      * (*((_DWORD *)this + 98) & 1 | (4
                                                     * (*((_DWORD *)this + 98) & 4 | (16
                                                                                    * (*((_DWORD *)this + 98) & 0x28 | 0x11)))));
    v125.m256i_i32[7] = *((_DWORD *)this + 36);
    v58 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
            this,
            &v125,
            Value,
            v39);
    *((_QWORD *)this + 35) = v58;
    if ( !v58 )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1241;
      return 3221225495LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v58,
        &EventAssociateContext,
        v59,
        this,
        v58,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
    memset(&v121, 0, sizeof(v121));
    v60 = VIDSCH_EXPORT::VidSchCreateHwQueue(
            *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
            0LL,
            *((struct VIDSCH_HW_CONTEXT **)this + 35),
            &v121,
            (struct VIDSCH_HW_QUEUE **)this + 36);
    v114 = v60;
    if ( v60 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v60);
      WdLogGlobalForLineNumber = 1259;
      return v114;
    }
  }
  else
  {
    memset(v123, 0, sizeof(v123));
    v124 = 0;
    *(_DWORD *)&v123[12] = 0;
    *(_DWORD *)&v123[20] = *(_DWORD *)(*(_QWORD *)(v57 + 40) + 416LL);
    *(_DWORD *)&v123[4] = *((_DWORD *)this + 95);
    *(_DWORD *)&v123[8] = *((_DWORD *)this + 97);
    v61 = 2 * (*((_DWORD *)this + 98) & 1 | ((*((_DWORD *)this + 98) & 0x20) << 6));
    *(_DWORD *)v123 = v61;
    v124 = *((_DWORD *)this + 36);
    if ( *((_BYTE *)this + 430) )
      *(_DWORD *)v123 = v61 | 0x80;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      if ( v63 >= 0x80 )
      {
        WdLogSingleEntry0(2LL);
        v25 = 1289LL;
        v26 = L"Context is setting non-zero Reserved flags at the creation time.";
        goto LABEL_19;
      }
      *(_DWORD *)v123 = v62 & 0xFFFFFBDF | (8 * (v63 & 4 | (16 * (v63 & 8))));
    }
    Context = VIDSCH_EXPORT::VidSchCreateContext(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(v64 + 16) + 736LL),
                this,
                (struct _VIDSCH_CONTEXT_DATA *)v123);
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
        v66,
        this,
        Context,
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 430) || *(_DWORD *)(*((_QWORD *)this + 2) + 464LL) == 2 || *((_DWORD *)this + 36) == 2 )
  {
    v67 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
    v68 = v67;
    if ( v67 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v67);
      WdLogGlobalForLineNumber = 1321;
      return v68;
    }
  }
  v69 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
  *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 430) )
  {
    if ( *((_QWORD *)this + 44) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1342;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_pCommandDmaBuffer", 1342LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 444LL) & 0x10) != 0
      && v117
      && a3 == 16 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v71 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
              -1LL,
              (char *)this + 56,
              0LL,
              (char *)this + 48,
              12288,
              4);
      v68 = v71;
      if ( v71 < 0 )
      {
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 6), v71);
        WdLogGlobalForLineNumber = 1363;
        return v68;
      }
      v72 = (void *)*((_QWORD *)v117 + 1);
      v115 = *(_QWORD *)v117;
      v117 = 0LL;
      v73 = v72;
      if ( (unsigned __int64)v72 >= MmUserProbeAddress )
        v73 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v117, v73, 8uLL);
      if ( !v72 || (unsigned __int64)v117 < 8 || (v74 = (void *)v115) == 0LL )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 1387;
        return 3221225485LL;
      }
      if ( v115 >= MmUserProbeAddress )
        v74 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v74, (char *)this + 56, 8uLL);
      if ( (unsigned __int64)v72 >= MmUserProbeAddress )
        v72 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v72, (char *)this + 48, 8uLL);
    }
  }
  else
  {
    v75 = DxgkGetVirtualMemoryInterface();
    v76 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v75)(
            -1LL,
            (char *)this + 56,
            0LL,
            (char *)this + 48,
            12288,
            4);
    v114 = v76;
    if ( v76 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v69, v76);
      WdLogGlobalForLineNumber = 1416;
      return v114;
    }
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                            (struct DXGGLOBAL *)((char *)Global + 1620),
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v79 = ExAllocatePool2(256LL, *v69, 1265072196LL, v78);
      *((_QWORD *)this + 8) = v79;
      if ( !v79 )
      {
        WdLogSingleEntry3(3LL, this, *v69, -1073741801LL);
        WdLogGlobalForLineNumber = 1430;
        return 3221225495LL;
      }
    }
  }
  v80 = *((unsigned int *)this + 18);
  if ( (_DWORD)v80 )
  {
    v81 = (unsigned int)v80;
    v82 = 8 * v80;
    v83 = 0xFFFFFFFFLL;
    if ( v82 <= 0xFFFFFFFF )
      v83 = (unsigned int)v82;
    v68 = v82 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v82 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v81);
      WdLogGlobalForLineNumber = 1448;
      return v68;
    }
    v84 = (SIZE_T *)((char *)this + 80);
    *((_QWORD *)this + 10) = v83;
    v85 = DxgkGetVirtualMemoryInterface();
    v86 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v85)(
            -1LL,
            (char *)this + 88,
            0LL,
            (char *)this + 80,
            12288,
            4);
    v114 = v86;
    if ( v86 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v84, v86);
      WdLogGlobalForLineNumber = 1469;
      return v114;
    }
    *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v84, 4u);
    if ( !*((_QWORD *)this + 12) )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1493;
      return 3221225495LL;
    }
  }
  v87 = *((unsigned int *)this + 26);
  if ( (_DWORD)v87 )
  {
    v88 = (unsigned int)v87;
    v89 = 24 * v87;
    v90 = 0xFFFFFFFFLL;
    if ( v89 <= 0xFFFFFFFF )
      v90 = (unsigned int)v89;
    v68 = v89 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v89 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v88);
      WdLogGlobalForLineNumber = 1510;
      return v68;
    }
    v91 = (SIZE_T *)((char *)this + 112);
    *((_QWORD *)this + 14) = v90;
    v92 = DxgkGetVirtualMemoryInterface();
    v93 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v92)(
            -1LL,
            (char *)this + 120,
            0LL,
            (char *)this + 112,
            12288,
            4);
    v114 = v93;
    if ( v93 < 0 )
    {
      WdLogSingleEntry3(3LL, this, *v91, v93);
      WdLogGlobalForLineNumber = 1529;
      return v114;
    }
    *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v91, 4u);
    if ( !*((_QWORD *)this + 17) )
    {
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 1553;
      return 3221225495LL;
    }
    v94 = DXGGLOBAL::GetGlobal();
    if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                            (struct DXGGLOBAL *)((char *)v94 + 1620),
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v96 = ExAllocatePool2(256LL, *((_QWORD *)this + 14), 1265072196LL, v95);
      *((_QWORD *)this + 16) = v96;
      if ( !v96 )
      {
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 14), -1073741801LL);
        WdLogGlobalForLineNumber = 1567;
        return 3221225495LL;
      }
    }
  }
  v97 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v98 = *((unsigned int *)this + 6);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v97 + 248));
  v99 = ((unsigned int)v98 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v99 < *(_DWORD *)(v97 + 296) )
  {
    v100 = *(_QWORD *)(v97 + 280);
    if ( (((unsigned int)v98 >> 25) & 0x60) == (*(_BYTE *)(v100 + 16 * v99 + 8) & 0x60)
      && (*(_DWORD *)(v100 + 16 * v99 + 8) & 0x1F) != 0 )
    {
      v101 = 2 * ((v98 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v100 + 8 * v101 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v97 + 280) + 8 * v101 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v97 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v97 + 248, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
