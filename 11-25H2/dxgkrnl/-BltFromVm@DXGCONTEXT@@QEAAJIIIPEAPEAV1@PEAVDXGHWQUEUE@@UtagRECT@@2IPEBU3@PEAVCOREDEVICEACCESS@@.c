/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401E544C
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218A40 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x14003BDA8 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x14034F784 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct DXGHWQUEUE *a6,
        struct tagRECT *a7,
        struct tagRECT *a8,
        UINT a9,
        const struct tagRECT *a10,
        struct COREDEVICEACCESS *a11)
{
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  int v18; // edx
  struct DXGALLOCATION *v19; // rdx
  __int64 v20; // rdx
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // r10
  int v27; // edx
  struct DXGALLOCATION *v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  struct DXGDEVICE *v31; // r14
  unsigned int v32; // esi
  VIDMM_EXPORT **v33; // r15
  int right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  LONG left; // r10d
  int v38; // r9d
  LONG v39; // r8d
  LONG v40; // edx
  UINT i; // ecx
  LONG *v42; // rax
  int v43; // ebx
  LONG v44; // r11d
  LONG v45; // eax
  __int64 v46; // rcx
  unsigned int j; // eax
  struct COREDEVICEACCESS *v48; // rbx
  int v49; // eax
  __int64 v50; // rdx
  RECT v51; // xmm0
  RECT v52; // xmm1
  struct VIDSCH_SUBMIT_DATA_BASE *v53; // r8
  int v54; // edx
  struct DXGHWQUEUE *v55; // rcx
  int v56; // eax
  struct DXGHWQUEUE *v57; // rdx
  int v58; // eax
  __int64 v59; // rdi
  struct DXGCONTEXT **v61; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v62; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION *v63; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v64; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v65; // [rsp+80h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v66; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+90h] [rbp-70h]
  struct VIDSCH_SUBMIT_DATA_BASE *v68[2]; // [rsp+98h] [rbp-68h] BYREF
  struct COREDEVICEACCESS *v69; // [rsp+A8h] [rbp-58h]
  struct DXGHWQUEUE *v70; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGHWQUEUE *v71; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v72; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_DESCRIBEALLOCATION v73; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v74; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v75; // [rsp+130h] [rbp+30h] BYREF

  v72 = a5;
  v71 = a6;
  v68[0] = (struct VIDSCH_SUBMIT_DATA_BASE *)a10;
  v69 = a11;
  v12 = *((_QWORD *)this + 2);
  v13 = a3;
  v14 = a2;
  v65 = a3;
  v15 = *(_QWORD *)(v12 + 40);
  v67 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 296)
    && (v17 = *(_QWORD *)(v15 + 280), (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60))
    && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0
    && (v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F) != 0 )
  {
    if ( v18 == 5 )
    {
      v19 = *(struct DXGALLOCATION **)(v17 + 16LL * v16);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v64 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 7662;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source handle 0x%I64x", v14, 0LL, 0LL, 0LL, 0LL);
LABEL_88:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64);
    return -1073741811LL;
  }
  v20 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, v20, v64, -1073741811LL);
    v61 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7670;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v61,
      (__int64)v64,
      -1073741811LL,
      0LL,
      0LL);
LABEL_86:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64);
    return (unsigned int)v21;
  }
  memset(&v74, 0, sizeof(v74));
  v74.hAllocation = *(HANDLE *)(*((_QWORD *)v64 + 6) + 16LL);
  v22 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 3128LL),
          &v74);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v22,
      this,
      *((unsigned int *)v64 + 4),
      v64,
      (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7681;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v64 + 4),
      (__int64)v64,
      (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF);
LABEL_15:
    v21 = v23;
    goto LABEL_86;
  }
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v24 + 248));
  v25 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( v25 >= *(_DWORD *)(v24 + 296) )
    goto LABEL_22;
  v26 = *(_QWORD *)(v24 + 280);
  if ( (((unsigned int)v13 >> 25) & 0x60) != (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60) )
    goto LABEL_22;
  if ( (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) != 0 )
    goto LABEL_22;
  v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
  if ( !v27 )
    goto LABEL_22;
  if ( v27 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v28 = 0LL;
    goto LABEL_23;
  }
  v28 = *(struct DXGALLOCATION **)(v26 + 16LL * v25);
LABEL_23:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63, v28);
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 264));
  ExReleasePushLockSharedEx(v24 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v63 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 7689;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid destination handle 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_85:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
    v21 = -1073741811;
    goto LABEL_86;
  }
  v29 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, v29, v63, -1073741811LL);
    v62 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7697;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v62,
      (__int64)v63,
      -1073741811LL,
      0LL,
      0LL);
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
    goto LABEL_86;
  }
  memset(&v73, 0, sizeof(v73));
  v73.hAllocation = *(HANDLE *)(*((_QWORD *)v63 + 6) + 16LL);
  v30 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 3128LL),
          &v73);
  v23 = v30;
  if ( v30 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v30,
      this,
      *((unsigned int *)v63 + 4),
      v63,
      (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7708;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v63 + 4),
      (__int64)v63,
      (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF);
LABEL_31:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 430) )
  {
    v31 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v32 = *((_DWORD *)this + 97);
    v33 = (VIDMM_EXPORT **)*((_QWORD *)v31 + 2);
    if ( !VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
            v33[95],
            *((const struct VIDMM_MULTI_ALLOC **)v63 + 3),
            *((_BYTE *)this + 431) != 0,
            v32) )
    {
      v21 = MapGpuVaForAllocation((struct ADAPTER_RENDER *)v33, v31, v32, v63);
      if ( v21 < 0 )
        goto LABEL_28;
    }
    if ( !VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
            *((const struct VIDMM_MULTI_ALLOC **)v64 + 3),
            *((_BYTE *)this + 431) != 0,
            v32) )
    {
      v21 = MapGpuVaForAllocation((struct ADAPTER_RENDER *)v33, v31, v32, v64);
      if ( v21 < 0 )
        goto LABEL_28;
    }
    LODWORD(v13) = v65;
  }
  right = a7->right;
  if ( a7->left >= right
    || a7->left < 0
    || right > (int)v74.Width
    || (top = a7->top, bottom = a7->bottom, top >= bottom)
    || top < 0
    || bottom > (int)v74.Height )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7761;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source rect", 7761LL, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
    goto LABEL_88;
  }
  left = a8->left;
  v38 = a8->right;
  if ( a8->left >= v38
    || left < 0
    || v38 > (int)v73.Width
    || (v39 = a8->top, v40 = a8->bottom, v39 >= v40)
    || v39 < 0
    || v40 > (int)v73.Height )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7771;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid destination rect", 7771LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_85;
  }
  for ( i = 0; i < a9; ++i )
  {
    v42 = (LONG *)((char *)v68[0] + 16 * i);
    v43 = v42[2];
    if ( *v42 < v43 && *v42 >= left && v43 <= v38 )
    {
      v44 = v42[1];
      v45 = v42[3];
      if ( v44 < v45 && v44 >= v39 && v45 <= v40 )
        continue;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7784;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid subrect", 7784LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_85;
  }
  v46 = *((_QWORD *)this + 46);
  v66 = 0LL;
  if ( v46 )
  {
    for ( j = 0; j < *((_DWORD *)this + 94); ++j )
    {
      if ( *(_QWORD *)(v46 + 8LL * j) )
      {
        v66 = *(struct VIDMM_DMA_BUFFER **)(v46 + 8LL * j);
        *(_QWORD *)(v46 + 8LL * j) = 0LL;
        if ( !v66 )
          break;
        v48 = v69;
        goto LABEL_69;
      }
    }
  }
  v48 = v69;
  v49 = DXGCONTEXT::AcquireDmaBuffer(this, &v66, v69, 1u);
  v23 = v49;
  if ( v49 < 0 )
  {
    WdLogSingleEntry1(2LL, v49);
    WdLogGlobalForLineNumber = 7811;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire DMA buffer 0x%I64x",
      v23,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_31;
  }
LABEL_69:
  memset(&v75, 0, sizeof(v75));
  v50 = *((_QWORD *)this + 2);
  v51 = *a8;
  v52 = *a7;
  v75.Flags.Value |= 1u;
  v75.DstRect = v51;
  v75.SubRectCnt = a9;
  v75.SrcRect = v52;
  v75.pDstSubRects = (const RECT *)v68[0];
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v68, *(struct ADAPTER_RENDER **)(v50 + 16), 1);
  v53 = v68[0];
  if ( !v68[0] )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7828;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      7828LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v68);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
    v21 = -1073741801;
    goto LABEL_86;
  }
  v54 = *(_DWORD *)v68[0] | 0x10000;
  *(_DWORD *)v68[0] = v54;
  if ( (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) & 3) != 0 )
  {
    v54 |= 1u;
    *(_DWORD *)v53 = v54;
  }
  v55 = v71;
  *(_DWORD *)v53 = v54 | 0x120;
  v56 = *((_DWORD *)this + 98);
  v70 = v55;
  if ( (v56 & 0x10) != 0 && !v55 )
  {
    v57 = 0LL;
    if ( *((DXGCONTEXT **)this + 50) != (DXGCONTEXT *)((char *)this + 400) )
      v57 = (struct DXGHWQUEUE *)*((_QWORD *)this + 50);
    v70 = v57;
    if ( !v57 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 7856;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Attempting to Blt on a HardwareContext:0x%I64x with no HwQueues",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v68);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
      v21 = -1073741823;
      goto LABEL_86;
    }
  }
  v58 = DXGCONTEXT::SubmitPresent(this, 0LL, &v70, 0, v72, 0LL, v67, v13, &v75, 0LL, v66, v53, v73.Format, v48);
  v59 = v58;
  if ( v58 < 0 )
  {
    WdLogSingleEntry1(2LL, v58);
    WdLogGlobalForLineNumber = 7864;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"SubmitPresent failed 0x%I64x", v59, 0LL, 0LL, 0LL, 0LL);
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v68);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v63);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v64);
  return (unsigned int)v59;
}
