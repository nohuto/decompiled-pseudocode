/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140349230
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmIsAllocationAccessPending@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400520B4 (-VidMmIsAllocationAccessPending@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140350030 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14036617C (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 *     ?NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z @ 0x1403861A8 (-NewTerminationTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@_K@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v8; // r14d
  struct DXGALLOCATION *v9; // r12
  BOOL v12; // r15d
  struct DXGALLOCATION *v13; // rdi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  char *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  struct DXGTERMINATIONTRACKER *v22; // rax
  struct DXGTERMINATIONTRACKER *v23; // rdi
  void *v24; // rcx
  _BYTE v25[8]; // [rsp+50h] [rbp-58h] BYREF
  char *v26; // [rsp+58h] [rbp-50h]
  int v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+B0h] [rbp+8h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v30; // [rsp+D8h] [rbp+30h]

  v28 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v30.0 = 0;
  v9 = a4;
  v12 = *((_DWORD *)this + 116) == 2;
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( (v14 & 0x20000800) != 0 )
        break;
      v15 = *((_QWORD *)this + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 209LL) )
        break;
      v16 = *((_QWORD *)v13 + 3);
      if ( !v16 )
        break;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 584LL))(v16, 0LL);
      if ( !v17 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 983;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"IndividualAllocationSize > 0",
          983LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v28 += v17;
      *(_DWORD *)&v30.0 += (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                              + 8LL)
                                                                  + 592LL))(*((_QWORD *)v13 + 3));
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationAccessPending(
                              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                              *((struct VIDMM_MULTI_ALLOC **)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      if ( !v13 )
        goto LABEL_16;
    }
    v8 = 0;
LABEL_16:
    v9 = a4;
  }
  if ( a3 )
  {
    v26 = (char *)this + 240;
    if ( this != (DXGDEVICE *)-240LL )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( *((struct _KTHREAD **)this + 31) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1575;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1575LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 240));
    v27 = 2;
    if ( a2 == *((struct DXGRESOURCE **)this + 7) )
    {
      v18 = (char *)this + 56;
    }
    else
    {
      if ( !*((_QWORD *)a2 + 4) )
      {
LABEL_32:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
        goto LABEL_33;
      }
      v18 = (char *)this + 56;
    }
    v19 = *((_QWORD *)a2 + 5);
    v20 = (_QWORD *)((char *)this + 56);
    if ( v19 )
    {
      v20 = v18;
      *(_QWORD *)(v19 + 32) = *((_QWORD *)a2 + 4);
    }
    v21 = *((_QWORD *)a2 + 4);
    if ( v21 )
    {
      *(_QWORD *)(v21 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( *((struct DXGRESOURCE **)this + 7) != a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9045;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pResourceList == pResource",
          9045LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *v20 = *((_QWORD *)a2 + 5);
    }
    goto LABEL_32;
  }
LABEL_33:
  if ( v8
    && !v12
    && (a3 && *((_QWORD *)a2 + 3) || !a2)
    && (v22 = ADAPTER_RENDER::NewTerminationTracker(*((ADAPTER_RENDER **)this + 2), v28), (v23 = v22) != 0LL) )
  {
    *(_QWORD *)v22 = a2;
    *((_QWORD *)v22 + 1) = v9;
    v24 = *(void **)(*((_QWORD *)this + 5) + 56LL);
    *((_QWORD *)v22 + 2) = v24;
    *((_QWORD *)v22 + 3) = this;
    *((_QWORD *)v22 + 5) = v28;
    *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v22 + 12) = a6;
    *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v22 + 8) = v30;
    ObfReferenceObject(v24);
    DXGDEVICE::ScheduleDeferredDestruction(this, a6, v23, a5);
  }
  else if ( a3 )
  {
    DXGDEVICE::DestroyResource(this, a2, a5, a6);
  }
  else
  {
    DXGDEVICE::DestroyAllocations(this, a2, 0, v9, a5, a6);
  }
}
