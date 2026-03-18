/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400B1458
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093E90 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009952C (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B1FC4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140101738 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B1854 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B676C (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400B6ADC (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x140101B74 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  unsigned int v10; // r15d
  unsigned __int64 v11; // r12
  VIDMM_DEVICE *v12; // rax
  VIDMM_DEVICE *v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  struct VIDMM_VAD *Vad; // rax
  struct VIDMM_VAD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax

  v5 = (char *)this + 24;
  v6 = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 11) = a4;
  *((_QWORD *)this + 12) = a5;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  v10 = 1;
  v11 = a3;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( a5 )
  {
    v10 = *((_DWORD *)a4 + 1736);
    if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
    {
      *((_QWORD *)this + 13) = *((_QWORD *)a4 + 5049);
      v21 = *((_DWORD *)this + 36) & 0xFFFFFFFE;
      *((_DWORD *)this + 36) = v21;
      v15 = v21 | 4;
      goto LABEL_12;
    }
    if ( (*((_BYTE *)a4 + 40936) & 2) != 0 )
    {
      v12 = (VIDMM_DEVICE *)operator new(400LL, 0x4B677844u, 256LL);
      if ( v12 )
        v13 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
      else
        v13 = 0LL;
      *((_QWORD *)this + 13) = v13;
      if ( !v13 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2524;
        return 3221225495LL;
      }
      if ( (int)VIDMM_DEVICE::Init(v13, 0, a5) < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2533;
        return 3221225495LL;
      }
    }
    if ( dword_1400815A0 == 2 )
    {
      if ( *((char *)a4 + 40936) < 0 )
        goto LABEL_10;
    }
    else if ( !dword_1400815A0 )
    {
LABEL_10:
      v14 = 0;
LABEL_11:
      v5 = (char *)this + 24;
      v15 = v14 | *((_DWORD *)this + 36) & 0xFFFFFFFE;
LABEL_12:
      *((_DWORD *)this + 36) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v15)) & 2;
      goto LABEL_13;
    }
    v14 = 1;
    goto LABEL_11;
  }
LABEL_13:
  Vad = CVirtualAddressAllocator::AllocateVad(v11, a2, v10);
  v17 = Vad;
  if ( !Vad )
  {
    _InterlockedIncrement(&dword_1400817BC);
    WdLogSingleEntry0(6LL);
    v19 = 2558;
LABEL_15:
    WdLogGlobalForLineNumber = v19;
    DxgkLogInternalTriageEvent(v18, 262145LL);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v22 = *(_QWORD *)v5;
  v23 = (_QWORD *)((char *)v17 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v23 = v22;
  *((_QWORD *)v17 + 6) = v5;
  *(_QWORD *)(v22 + 8) = v23;
  *(_QWORD *)v5 = v23;
  if ( a4 && (*((_BYTE *)a4 + 40936) & 2) != 0 )
  {
    v24 = v10;
    v25 = 32LL * v10;
    if ( !is_mul_ok(v10, 0x20uLL) )
      v25 = -1LL;
    v26 = operator new[](v25, 0x4B677844u, 256LL);
    *((_QWORD *)this + 15) = v26;
    if ( !v26 )
    {
      _InterlockedIncrement(&dword_1400817D0);
      WdLogSingleEntry0(6LL);
      v19 = 2570;
      goto LABEL_15;
    }
    if ( v10 )
    {
      v30 = 0LL;
      v31 = 0LL;
      do
      {
        v28 = *(_QWORD *)(v31 + *((_QWORD *)a4 + 5029));
        if ( (*(_BYTE *)(v28 + 476) & 1) != 0 )
        {
          *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 16) = *(_DWORD *)(v28 + 48LL * *(unsigned int *)(v28 + 468) + 128);
          *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 20) = *(_DWORD *)(v28 + 48LL * *(unsigned int *)(v28 + 468) + 136);
          if ( *((_QWORD *)this + 12) && (*((_DWORD *)a5 + 24) & 2) != 0 )
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 28) = *(_DWORD *)(v28 + 84);
            v32 = *(_DWORD *)(v28 + 100);
          }
          else
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 28) = *(_DWORD *)(v28 + 76);
            v32 = *(_DWORD *)(v28 + 92);
          }
          v27 = *((_QWORD *)this + 15);
          *(_DWORD *)(v30 + v27 + 24) = v32;
        }
        v31 += 8LL;
        v30 += 32LL;
        --v24;
      }
      while ( v24 );
    }
    if ( (byte_140081242 & 0x40) != 0 )
    {
      v29 = *((_QWORD *)this + 12);
      if ( v29 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 64LL);
        v6 = *(_QWORD *)(v27 + 80);
      }
      McTemplateK0ppp_EtwWriteTransfer(
        v27,
        &CreateGpuVirtualAddressAllocator,
        v28,
        this,
        v6,
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    }
  }
  return 0LL;
}
