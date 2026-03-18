/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x14001CE9C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003DD1C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x14003DF74 (RtlStringCbPrintfW.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400A9028 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400E819C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140102D58 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS_ADAPTER_INFO *v4; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int16 v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int i; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  CVirtualAddressAllocator *v26; // rax
  CVirtualAddressAllocator *v27; // rax
  wchar_t *v28; // r15
  NTSTATUS v29; // r14d
  unsigned int v30; // ebp
  __int64 v31; // r13
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v32; // r14d
  _QWORD *v33; // r15
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  CVirtualAddressAllocator *v40; // rcx
  int v41; // eax
  unsigned int v42; // eax
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v48; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-78h]
  struct _PCW_DATA v52; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  wchar_t *pszDest; // [rsp+C8h] [rbp+20h]

  v4 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(1904LL, 0x33316956u, 256LL);
  if ( !v4 || (v5 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v4)) == 0LL )
  {
    _InterlockedAdd(&dword_14008171C, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 659;
    DxgkLogInternalTriageEvent(v48, 262145LL);
    return 0LL;
  }
  v6 = *((unsigned int *)a2 + 1736);
  v7 = 304 * v6;
  if ( !is_mul_ok(v6, 0x130uLL) )
    v7 = -1LL;
  v8 = __CFADD__(v7, 8LL);
  v9 = v7 + 8;
  if ( v8 )
    v9 = -1LL;
  v10 = operator new[](v9, 0x61316956u, 256LL);
  if ( v10 )
  {
    v11 = v10 + 8;
    *(_QWORD *)v10 = v6;
    `vector constructor iterator'(
      (char *)(v10 + 8),
      304LL,
      (unsigned int)v6,
      (void (__fastcall *)(char *))VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO::VIDMM_PROCESS_PHYSICAL_ADAPTER_INFO);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (_QWORD *)((char *)v5 + 16);
  *((_QWORD *)v5 + 2) = v11;
  if ( !v11 )
  {
    _InterlockedAdd(&dword_140081720, 1u);
    WdLogSingleEntry0(6LL);
    v14 = 667;
LABEL_12:
    v15 = 262145LL;
LABEL_13:
    WdLogGlobalForLineNumber = v14;
    DxgkLogInternalTriageEvent(v13, v15);
LABEL_48:
    v40 = (CVirtualAddressAllocator *)*((_QWORD *)v5 + 23);
    if ( v40 )
      CVirtualAddressAllocator::DestroyVaAllocator(v40);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v5);
    return 0LL;
  }
  v16 = 0;
  if ( *((_DWORD *)a2 + 1736) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a2 + 5029) + 8LL * v16);
      v18 = *(unsigned int *)(v17 + 64);
      v19 = 184 * v18;
      if ( !is_mul_ok(v18, 0xB8uLL) )
        v19 = -1LL;
      v8 = __CFADD__(v19, 8LL);
      v20 = v19 + 8;
      if ( v8 )
        v20 = -1LL;
      v21 = operator new[](v20, 0x34316956u, 256LL);
      if ( !v21 )
        break;
      v22 = v21 + 8;
      *(_QWORD *)v21 = v18;
      `vector constructor iterator'(
        (char *)(v21 + 8),
        184LL,
        (unsigned int)v18,
        (void (__fastcall *)(char *))VIDMM_PROCESS_COMMITMENT_INFO::VIDMM_PROCESS_COMMITMENT_INFO);
      if ( !v22 )
        break;
      for ( i = 0; i < *(_DWORD *)(v17 + 64); *(_QWORD *)(184 * v24 + v22) = this )
        v24 = i++;
      v12 = (_QWORD *)((char *)v5 + 16);
      v25 = v16++;
      *(_QWORD *)(304 * v25 + *((_QWORD *)v5 + 2)) = v22;
      if ( (unsigned int)v16 >= *((_DWORD *)a2 + 1736) )
        goto LABEL_24;
    }
    _InterlockedAdd(&dword_140081720, 1u);
    WdLogSingleEntry0(6LL);
    v14 = 681;
    goto LABEL_12;
  }
LABEL_24:
  if ( (*((_BYTE *)a2 + 40936) & 0x10) != 0 && ((_DWORD)this[12] & 2) == 0 )
  {
    v26 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    if ( v26 )
      v27 = CVirtualAddressAllocator::CVirtualAddressAllocator(v26);
    else
      v27 = 0LL;
    *((_QWORD *)v5 + 23) = v27;
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      v14 = 702;
LABEL_32:
      v15 = 0x40000LL;
      goto LABEL_13;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                v27,
                1LL << *((_DWORD *)a2 + 10232),
                *((_DWORD *)a2 + 10247),
                a2,
                (struct VIDMM_PROCESS *)this) < 0 )
    {
      WdLogSingleEntry0(1LL);
      v14 = 714;
      goto LABEL_32;
    }
  }
  pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  v28 = pszDest;
  if ( !pszDest )
  {
    _InterlockedAdd(&dword_140081870, 1u);
    WdLogSingleEntry0(6LL);
    v14 = 722;
    goto LABEL_12;
  }
  v29 = 0;
  v30 = 0;
  if ( *((_DWORD *)a2 + 1736) )
  {
    while ( 1 )
    {
      v31 = 304LL * (unsigned __int16)v30 + *v12 + 8LL;
      v32 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      *(_QWORD *)(v31 + 16) = v5;
      v33 = (_QWORD *)(v31 + 24);
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v30, v32++, this[37]);
        *v33++ = *((_QWORD *)SegmentGroupState + 4);
      }
      while ( v32 < 2 );
      v35 = *((_QWORD *)a2 + 3);
      v28 = pszDest;
      v36 = *((unsigned int *)this + 2);
      DestinationString = 0LL;
      LODWORD(v51) = v30;
      LODWORD(v50) = *(_DWORD *)(v35 + 412);
      LODWORD(Data) = *(_DWORD *)(v35 + 416);
      v29 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"pid_%u_luid_0x%08X_0x%08X_phys_%u", v36, Data, v50, v51);
      if ( v29 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v52.Data = (const void *)v31;
      v52.Size = 296;
      v29 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v31 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v52);
      if ( v29 < 0 )
      {
        _InterlockedAdd(&dword_140081870, 1u);
        WdLogSingleEntry0(6LL);
        v38 = 758;
        v39 = 262145LL;
        goto LABEL_46;
      }
      v12 = (_QWORD *)((char *)v5 + 16);
      if ( ++v30 >= *((_DWORD *)a2 + 1736) )
        goto LABEL_47;
    }
    WdLogSingleEntry0(1LL);
    v37 = 0LL;
    v38 = 750;
    v39 = 0x40000LL;
LABEL_46:
    WdLogGlobalForLineNumber = v38;
    DxgkLogInternalTriageEvent(v37, v39);
  }
LABEL_47:
  operator delete(v28);
  if ( v29 < 0 )
    goto LABEL_48;
  v41 = *((_DWORD *)v5 + 38);
  if ( dword_1400813B8 )
    v42 = v41 & 0xFFFFFFF8 | 6;
  else
    v42 = v41 | 7;
  *((_DWORD *)v5 + 38) = v42;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 )
  {
    *((_DWORD *)v5 + 41) = 1;
  }
  *(_QWORD *)v5 = a2;
  *((_DWORD *)v5 + 2) = 1;
  *((_QWORD *)v5 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41080));
  v43 = (_QWORD *)((char *)a2 + 41128);
  v44 = *((_QWORD *)a2 + 5141);
  v45 = (_QWORD *)((char *)v5 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v44 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41128) )
    __fastfail(3u);
  *v45 = v44;
  *((_QWORD *)v5 + 4) = v43;
  *(_QWORD *)(v44 + 8) = v45;
  *v43 = v45;
  v46 = *((_QWORD *)a2 + 5597);
  *((_QWORD *)a2 + 5597) = v46 + 1;
  *((_QWORD *)v5 + 25) = v46;
  *((_QWORD *)a2 + 5136) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41080, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v5;
}
