/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009A0EC (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003D274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400BDC60 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400BDD58 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1400BF1F8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 ProcessID; // rbx
  unsigned int v10; // r15d
  __int64 v11; // r12
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
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax

  v5 = (char *)this + 24;
  ProcessID = 0LL;
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
        WdLogGlobalForLineNumber = 2928;
        return 3221225495LL;
      }
      if ( (int)VIDMM_DEVICE::Init(v13, 0, a5) < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2937;
        return 3221225495LL;
      }
    }
    if ( dword_1400815C0 == 2 )
    {
      if ( *((char *)a4 + 40936) < 0 )
        goto LABEL_10;
    }
    else if ( !dword_1400815C0 )
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
    _InterlockedIncrement(&dword_1400817DC);
    WdLogSingleEntry0(6LL);
    v19 = 2962;
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
      _InterlockedIncrement(&dword_1400817F0);
      WdLogSingleEntry0(6LL);
      v19 = 2974;
      goto LABEL_15;
    }
    if ( v10 )
    {
      v30 = 0LL;
      v31 = 0LL;
      do
      {
        v27 = *(_QWORD *)(v31 + *((_QWORD *)a4 + 5029));
        if ( (*(_BYTE *)(v27 + 476) & 1) != 0 )
        {
          *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 16) = *(_DWORD *)(v27 + 48LL * *(unsigned int *)(v27 + 468) + 128);
          *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 20) = *(_DWORD *)(v27 + 48LL * *(unsigned int *)(v27 + 468) + 136);
          if ( *((_QWORD *)this + 12) && (*((_DWORD *)a5 + 24) & 2) != 0 )
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 28) = *(_DWORD *)(v27 + 84);
            v32 = *(_DWORD *)(v27 + 100);
          }
          else
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 28) = *(_DWORD *)(v27 + 76);
            v32 = *(_DWORD *)(v27 + 92);
          }
          *(_DWORD *)(v30 + *((_QWORD *)this + 15) + 24) = v32;
        }
        v31 += 8LL;
        v30 += 32LL;
        --v24;
      }
      while ( v24 );
    }
    if ( (byte_140081242 & 0x40) != 0 )
    {
      v28 = *((_QWORD *)this + 12);
      v29 = *(_QWORD *)(*((_QWORD *)this + 11) + 24LL);
      if ( v28 )
        ProcessID = DXGPROCESS::GetProcessID(*(DXGPROCESS **)(v28 + 32));
      McTemplateK0ppp_EtwWriteTransfer(v28, &CreateGpuVirtualAddressAllocator, v27, this, ProcessID, v29);
    }
  }
  return 0LL;
}
