/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x14009829C (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x1400350FC (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140035964 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x140036618 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140037604 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x140038290 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140038D6C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     RtlStringCbPrintfW @ 0x14003DF74 (RtlStringCbPrintfW.c)
 *     ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x14004B6DC (-SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z.c)
 *     DxgkpIsDrtEnabled @ 0x14004B784 (DxgkpIsDrtEnabled.c)
 *     ?Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z @ 0x140055BB8 (-Initialize@DXGK_LOG@@QEAAJIW4DXGK_POOL_FLAGS@@_K1@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914E4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@@Z @ 0x140094E64 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBUDXGADAPTER_GPUMMUCAPS@.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x140098BCC (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009A0EC (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009C6B0 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z @ 0x14009D134 (-Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400A9028 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(VIDMM_GLOBAL *this, struct ADAPTER_RENDER *a2, unsigned int a3, char a4)
{
  _BYTE *v4; // rbx
  __int64 v5; // rax
  NTSTATUS VaAllocator; // esi
  __int64 v10; // r14
  char IsDrtEnabled; // al
  __int64 v12; // r8
  char v13; // cl
  unsigned __int8 v14; // dl
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int16 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int16 i; // bx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  char v27; // al
  char v28; // cl
  char v29; // al
  __int64 v30; // rcx
  bool IsGpuVaIoMmuGlobalSupported; // al
  char v32; // cl
  char v33; // dl
  int v34; // ecx
  char v35; // al
  unsigned __int16 v36; // r12
  unsigned __int16 j; // bx
  __int64 v38; // r14
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // r15
  __int64 v40; // r9
  VIDMM_PHYSICAL_ADAPTER *v41; // r13
  bool v42; // al
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  wchar_t *v46; // r13
  __int64 v47; // rcx
  int v48; // eax
  PPCW_INSTANCE *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // r12d
  unsigned __int64 v55; // rdx
  bool v56; // zf
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  bool v62; // cf
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  unsigned int v66; // ecx
  __int64 v67; // r9
  VIDMM_PHYSICAL_ADAPTER *v68; // r13
  const struct DXGK_PHYSICALADAPTERINFO *v69; // r10
  unsigned int v70; // edx
  int v71; // eax
  CVirtualAddressAllocator *v72; // rax
  CVirtualAddressAllocator *v73; // rax
  int (*v74)(unsigned __int64, unsigned __int64, void *); // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  PPCW_INSTANCE *v77; // rax
  struct _RTL_BALANCED_NODE *v78; // rax
  VIDMM_PARTITION *k; // r14
  int v80; // eax
  VIDMM_PARTITION **v81; // rax
  VIDMM_PARTITION *v82; // rcx
  VIDMM_PARTITION *v83; // rcx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  _QWORD *v86; // rdi
  PPCW_DATA Data; // [rsp+28h] [rbp-69h]
  __int64 v88; // [rsp+30h] [rbp-61h]
  int v89; // [rsp+58h] [rbp-39h] BYREF
  PPCW_INSTANCE *v90; // [rsp+60h] [rbp-31h] BYREF
  __int64 v91; // [rsp+68h] [rbp-29h]
  struct _PCW_DATA v92; // [rsp+70h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v94[80]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int16 v95; // [rsp+F8h] [rbp+67h]
  const struct DXGADAPTER_GPUMMUCAPS *v97; // [rsp+100h] [rbp+6Fh]

  *((_QWORD *)this + 2) = a2;
  v4 = (char *)this + 40937;
  v5 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v5;
  *((_DWORD *)this + 8) = a3;
  VaAllocator = 0;
  byte_14008161C |= (*(_DWORD *)(v5 + 444) & 0x200) != 0;
  v10 = *((_QWORD *)this + 3);
  if ( a3 >= 0x6000 )
    *v4 |= 2u;
  IsDrtEnabled = DxgkpIsDrtEnabled();
  v12 = *((_QWORD *)this + 3);
  v13 = *v4 ^ (*v4 ^ (IsDrtEnabled << 6)) & 0x40;
  *v4 = v13;
  v14 = v13 ^ (v13 ^ *(_DWORD *)(v12 + 5028) & 0xE0) & 0x20;
  *v4 = v14 ^ (v14 ^ (v14 >> 1)) & 0x10;
  v15 = *(_DWORD *)(v12 + 296);
  *((_DWORD *)this + 1736) = v15;
  if ( v15 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 64LL);
    WdLogGlobalForLineNumber = 1395;
LABEL_5:
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
  v95 = *((_WORD *)this + 3472);
  v18 = v95;
  v19 = 8LL * v95;
  if ( !is_mul_ok(v95, 8uLL) )
    v19 = -1LL;
  v20 = operator new[](v19, 0x30356956u, 64LL);
  *((_QWORD *)this + 5029) = v20;
  if ( !v20 )
  {
    _InterlockedIncrement(&dword_140081858);
    WdLogSingleEntry0(6LL);
    v21 = 1404;
    goto LABEL_10;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v95 )
    {
      v26 = *(_DWORD *)(v10 + 2468);
      if ( (v26 & 0x20) != 0 )
      {
        v27 = *((_BYTE *)this + 40936);
        v89 = 0;
        v28 = v27 ^ (v27 ^ (v26 >> 5)) & 2;
        *((_BYTE *)this + 40936) = v28;
        v29 = v28 ^ (v28 ^ (*(_DWORD *)(v10 + 2468) >> 2)) & 0x20;
        v30 = *((_QWORD *)this + 3);
        *((_BYTE *)this + 40936) = v29;
        SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v30 + 224), (union SYSMM_IOMMU_STATE *)&v89);
        *((_BYTE *)this + 40936) = *((_BYTE *)this + 40936) & 0xFB | (4 * ((v89 & 4) != 0));
        IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*((DXGADAPTER **)this + 3));
        v32 = *((_BYTE *)this + 40936) & 0xE7 | (IsGpuVaIoMmuGlobalSupported ? 8 : 0);
        v33 = v32 | ((*((_BYTE *)this + 40936) & 6 | (IsGpuVaIoMmuGlobalSupported ? 8 : 0)) != 0 ? 0x10 : 0);
        *((_BYTE *)this + 40936) = v33;
        if ( (v32 & 0x20) != 0 )
        {
          if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
            || (v34 = *(_DWORD *)(*((_QWORD *)this + 3) + 444LL), (v34 & 4) != 0)
            || (v34 & 8) != 0 )
          {
            v35 = 0;
          }
          else
          {
            v35 = 64;
          }
          *((_BYTE *)this + 40936) = v35 | v33 & 0xBF;
        }
        if ( a3 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
          *((_BYTE *)this + 40937) |= 1u;
      }
      if ( (*((_BYTE *)this + 40936) & 0xC) == 0 )
      {
        if ( (a4 & 1) != 0 )
        {
          *((_BYTE *)this + 40107) = 1;
          *((_BYTE *)this + 40109) = 1;
          *((_BYTE *)this + 40152) = 1;
        }
        if ( (a4 & 2) != 0 )
        {
          if ( (*(_DWORD *)(v10 + 2468) & 0x4000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            v16 = 0LL;
            WdLogGlobalForLineNumber = 1462;
            goto LABEL_5;
          }
          *((_BYTE *)this + 40108) = 1;
        }
      }
      *((_BYTE *)this + 4568) = (*(_DWORD *)(v10 + 2464) & 0x20) == 0;
      v36 = 0;
      *((_BYTE *)this + 40937) ^= (*((_BYTE *)this + 40937) ^ (8 * (*(_DWORD *)(v10 + 2468) >> 14))) & 8;
      for ( j = 0; j < v18; ++j )
      {
        v38 = *(_QWORD *)(*((_QWORD *)this + 3) + 2992LL) + 344LL * j;
        GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), j);
        v41 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * v40);
        VaAllocator = VIDMM_PHYSICAL_ADAPTER::Initialize(
                        v41,
                        (const struct DXGK_PHYSICALADAPTERINFO *)v38,
                        (const struct _DXGK_GPUMMUCAPS *)GpuMmuCaps);
        if ( VaAllocator < 0 )
          goto LABEL_127;
        *((_DWORD *)this + 926) += *((_DWORD *)v41 + 16);
        if ( GpuMmuCaps )
          *((_BYTE *)this + 40105) &= (*((_BYTE *)GpuMmuCaps + 20) & 1) == 0;
        v18 = v95;
        *((_BYTE *)this + 40937) = *((_BYTE *)this + 40937) & 0xFB ^ (*((_BYTE *)this + 40937) | (4
                                                                                                * (*(_DWORD *)(v38 + 16) >> 5))) & 4;
      }
      if ( dword_140081480 == 2 )
        v42 = (*(_DWORD *)(*((_QWORD *)this + 3) + 2452LL) & 4) != 0;
      else
        v42 = dword_140081480 == 1;
      *((_BYTE *)this + 7080) = v42;
      *((_QWORD *)this + 5586) = qword_140081590;
      v43 = dword_14008143C;
      if ( dword_14008143C )
      {
        v44 = 360LL * (unsigned int)dword_14008143C;
        if ( !is_mul_ok((unsigned int)dword_14008143C, 0x168uLL) )
          v44 = -1LL;
        v45 = operator new[](v44, 0x6D4D6956u, 64LL);
        *((_QWORD *)this + 976) = v45;
        if ( v45 )
        {
          *((_DWORD *)this + 1950) = v43;
          *((_QWORD *)this + 977) = 0LL;
        }
      }
      *((_QWORD *)this + 869) = 0LL;
      v46 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
      if ( !v46 )
      {
        _InterlockedAdd(&dword_140081870, 1u);
        WdLogSingleEntry0(6LL);
        v48 = 1555;
LABEL_54:
        WdLogGlobalForLineNumber = v48;
        DxgkLogInternalTriageEvent(v47, 262145LL);
        VaAllocator = -1073741801;
LABEL_127:
        VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
        operator delete(*((void **)this + 869));
        *((_QWORD *)this + 869) = 0LL;
        return (unsigned int)VaAllocator;
      }
      while ( v36 < v95 )
      {
        v49 = *(PPCW_INSTANCE **)(*((_QWORD *)this + 5029) + 8LL * v36);
        DestinationString = 0LL;
        v90 = v49;
        v50 = *((_QWORD *)a2 + 2);
        LODWORD(v88) = v36;
        LODWORD(Data) = *(_DWORD *)(v50 + 412);
        VaAllocator = RtlStringCbPrintfW(
                        v46,
                        0x208uLL,
                        L"luid_0x%08X_0x%08X_phys_%u",
                        *(unsigned int *)(v50 + 416),
                        Data,
                        v88);
        if ( VaAllocator < 0 )
        {
          WdLogSingleEntry0(1LL);
          v52 = 1575;
          v53 = 0x40000LL;
          goto LABEL_60;
        }
        RtlInitUnicodeString(&DestinationString, v46);
        v92.Data = v90;
        v92.Size = 1728;
        VaAllocator = PcwCreateInstance(v90 + 205, GpuPerformanceCounterSetAdapterMemory, &DestinationString, 1u, &v92);
        if ( VaAllocator < 0 )
        {
          _InterlockedAdd(&dword_140081870, 1u);
          WdLogSingleEntry0(6LL);
          v52 = 1583;
          v53 = 262145LL;
LABEL_60:
          v54 = 0;
          WdLogGlobalForLineNumber = v52;
          DxgkLogInternalTriageEvent(v51, v53);
          goto LABEL_63;
        }
        ++v36;
      }
      v54 = 0;
LABEL_63:
      operator delete(v46);
      if ( VaAllocator < 0 )
        goto LABEL_127;
      v55 = *((_QWORD *)this + 5553) + qword_1400812F8;
      v56 = (*((_BYTE *)this + 40936) & 0x10) == 0;
      *((_BYTE *)this + 40104) = v55 < *(_QWORD *)(*((_QWORD *)this + 3) + 3024LL);
      if ( !v56 )
      {
        if ( dword_1400814CC )
        {
          v57 = 256LL;
          if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
          {
            if ( (unsigned int)dword_1400814CC <= 0x10000 )
              v57 = 64LL;
            DXGK_LOG::Initialize(
              (__int64)this + 41032,
              v55,
              v57,
              (unsigned int)dword_1400814CC,
              (unsigned int)dword_1400814D0);
          }
          else
          {
            v60 = (unsigned int)dword_1400814CC;
            v61 = 24LL * (unsigned int)dword_1400814CC;
            if ( !is_mul_ok((unsigned int)dword_1400814CC, 0x18uLL) )
              v61 = -1LL;
            v62 = __CFADD__(v61, 8LL);
            v63 = v61 + 8;
            if ( v62 )
              v63 = -1LL;
            v64 = (_QWORD *)operator new[](v63, 0x32356956u, 256LL);
            if ( v64 )
            {
              *v64 = v60;
              v65 = v64 + 1;
            }
            else
            {
              v65 = 0LL;
            }
            *((_QWORD *)this + 5124) = v65;
            if ( !v65 )
            {
              _InterlockedAdd(&dword_140081874, 1u);
              WdLogSingleEntry0(6LL);
              v48 = 1627;
              goto LABEL_54;
            }
          }
          v58 = 48LL * (unsigned int)dword_1400814D4;
          if ( !is_mul_ok((unsigned int)dword_1400814D4, 0x30uLL) )
            v58 = -1LL;
          v59 = operator new[](v58, 0x32356956u, 256LL);
          *((_QWORD *)this + 5133) = v59;
          if ( !v59 )
          {
            _InterlockedAdd(&dword_140081874, 1u);
            WdLogSingleEntry0(6LL);
            v48 = 1636;
            goto LABEL_54;
          }
        }
        *((_BYTE *)this + 40936) &= 0x7Eu;
        *((_DWORD *)this + 10233) = 0;
        LOBYTE(v66) = 0;
        while ( v54 < v95 )
        {
          v97 = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), v54);
          v68 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * v67);
          VaAllocator = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(v68, this, v54, v97, v69);
          if ( VaAllocator < 0 )
            goto LABEL_127;
          v70 = *((_DWORD *)v68 + 27);
          v66 = *((_DWORD *)this + 10233);
          if ( v70 > v66 )
          {
            *((_DWORD *)this + 10233) = v70;
            LOBYTE(v66) = v70;
          }
          if ( *((_DWORD *)v68 + 117) == 1 )
            *((_BYTE *)this + 40936) |= 0x80u;
          if ( (*(_DWORD *)v97 & 0x40) != 0 )
            *((_BYTE *)this + 40936) |= 1u;
          ++v54;
        }
        if ( a3 >= 0x5023 )
          v71 = dword_1400814D8;
        else
          v71 = 4096 << v66;
        *((_DWORD *)this + 10247) = v71;
        VaAllocator = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40384), this);
        if ( VaAllocator < 0 )
          goto LABEL_127;
      }
      if ( DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*((DXGADAPTER **)this + 3)) )
      {
        v72 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
        if ( v72 )
          v73 = CVirtualAddressAllocator::CVirtualAddressAllocator(v72);
        else
          v73 = 0LL;
        *((_QWORD *)this + 5563) = v73;
        if ( !v73 )
        {
          _InterlockedAdd(&dword_14008186C, 1u);
          WdLogSingleEntry0(6LL);
          v48 = 1701;
          goto LABEL_54;
        }
        VaAllocator = CVirtualAddressAllocator::InitializeVaAllocator(
                        v73,
                        1LL << *((_DWORD *)this + 10232),
                        *((_DWORD *)this + 10247),
                        this,
                        0LL);
        if ( VaAllocator < 0 )
        {
          WdLogSingleEntry1(1LL, *((_QWORD *)this + 5563));
          WdLogGlobalForLineNumber = 1709;
LABEL_105:
          DxgkLogInternalTriageEvent(v75, 0x40000LL);
          goto LABEL_127;
        }
        v76 = *((_QWORD *)this + 3);
        v77 = (PPCW_INSTANCE *)*((_QWORD *)this + 5563);
        v91 = 0LL;
        v90 = v77;
        SysMmIterateHardwareReservedRanges(*(struct SYSMM_ADAPTER **)(v76 + 224), v74, &v90);
        VaAllocator = v91;
        if ( (int)v91 < 0 )
        {
          WdLogSingleEntry1(1LL, *(_QWORD *)(*((_QWORD *)this + 3) + 224LL));
          WdLogGlobalForLineNumber = 1725;
          goto LABEL_105;
        }
      }
      KeInitializeTimer((PKTIMER)((char *)this + 44808));
      KeInitializeThreadedDpc((PRKDPC)((char *)this + 44880), (PKDEFERRED_ROUTINE)VidMmDelayedEvictionDpc, this);
      VaAllocator = VIDMM_GLOBAL::CreateWorkerThread(this);
      if ( VaAllocator >= 0 )
      {
        DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
          (DXGAUTOEXPUSHLOCKSHARED *)v94,
          (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
        v78 = VIDMM_PARTITION::_PartitionTree;
        k = 0LL;
        while ( v78 )
        {
          k = (VIDMM_PARTITION *)v78;
          v78 = v78->Children[0];
        }
        while ( k )
        {
          v80 = VIDMM_PARTITION::EnsureAdapter(k, this);
          VaAllocator = v80;
          if ( v80 < 0 )
          {
            WdLogSingleEntry3(1LL, this, k, v80);
            WdLogGlobalForLineNumber = 1762;
            DxgkLogInternalTriageEvent(v84, 0x40000LL);
            DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v94);
            goto LABEL_127;
          }
          v81 = (VIDMM_PARTITION **)*((_QWORD *)k + 1);
          v82 = k;
          if ( v81 )
          {
            v83 = *v81;
            for ( k = (VIDMM_PARTITION *)*((_QWORD *)k + 1); v83; v83 = *(VIDMM_PARTITION **)v83 )
              k = v83;
          }
          else
          {
            while ( 1 )
            {
              k = (VIDMM_PARTITION *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !k || *(VIDMM_PARTITION **)k == v82 )
                break;
              v82 = k;
            }
          }
        }
        DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v94);
        *((_QWORD *)this + 980) = MEMORY[0xFFFFF78000000014];
        *((_QWORD *)this + 981) = MEMORY[0xFFFFF78000000014];
        DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
          (DXGAUTOEXPUSHLOCKEXCLUSIVE *)&v92,
          (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
        v85 = (_QWORD *)qword_1400812D8;
        v86 = (_QWORD *)((char *)this + 44792);
        if ( *(PVOID **)qword_1400812D8 != &VIDMM_GLOBAL::_AdapterListHead )
          __fastfail(3u);
        *v86 = &VIDMM_GLOBAL::_AdapterListHead;
        v86[1] = v85;
        *v85 = v86;
        qword_1400812D8 = (__int64)v86;
        DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)&v92);
        return (unsigned int)VaAllocator;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1742;
      goto LABEL_105;
    }
    v23 = operator new(1728LL, 0x30356956u, 64LL);
    v24 = v23;
    if ( v23 )
    {
      *(_QWORD *)(v23 + 48) = this;
      *(_WORD *)(v23 + 56) = i;
      v25 = (_QWORD *)(v23 + 1656);
      v25[1] = v25;
      *v25 = v25;
      *(_QWORD *)(v24 + 1680) = v24 + 1672;
      *(_QWORD *)(v24 + 1672) = v24 + 1672;
      *(_QWORD *)(v24 + 1696) = v24 + 1688;
      *(_QWORD *)(v24 + 1688) = v24 + 1688;
      *(_QWORD *)(v24 + 1712) = v24 + 1704;
      *(_QWORD *)(v24 + 1704) = v24 + 1704;
      *(_DWORD *)(v24 + 1720) = 0;
      *(_QWORD *)(v24 + 512) = v24 + 504;
      *(_QWORD *)(v24 + 504) = v24 + 504;
      *(_QWORD *)(v24 + 528) = v24 + 520;
      *(_QWORD *)(v24 + 520) = v24 + 520;
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i) = v24;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i) )
      break;
  }
  _InterlockedAdd(&dword_14008185C, 1u);
  WdLogSingleEntry0(6LL);
  v21 = 1413;
LABEL_10:
  WdLogGlobalForLineNumber = v21;
  DxgkLogInternalTriageEvent(0LL, 262145LL);
  return 3221225495LL;
}
