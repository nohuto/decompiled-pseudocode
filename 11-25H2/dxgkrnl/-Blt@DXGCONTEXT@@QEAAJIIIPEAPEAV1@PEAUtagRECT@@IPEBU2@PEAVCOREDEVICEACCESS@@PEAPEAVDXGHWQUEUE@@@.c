/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034D5A0
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BC6E8 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x14034D398 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140221230 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034E19C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x14034F784 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        const struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        struct DXGHWQUEUE **a10)
{
  __int64 v11; // rax
  __int64 v12; // r15
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // r9
  int v27; // edx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  UINT right; // ecx
  UINT Height; // edx
  const struct tagRECT *v34; // rsi
  signed int Width; // r9d
  int v36; // ecx
  signed int v37; // r8d
  int v38; // edx
  unsigned int i; // eax
  int *p_top; // rbx
  struct DXGDEVICE *v41; // rsi
  unsigned int v42; // edi
  struct ADAPTER_RENDER *v43; // r15
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(_QWORD, __int64, _QWORD); // rax
  __int64 v46; // rdx
  __int64 (__fastcall *v47)(_QWORD, __int64, _QWORD); // rax
  __int64 v48; // rcx
  unsigned int j; // eax
  struct COREDEVICEACCESS *v50; // rbx
  __int64 v51; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v52; // rdi
  int v53; // edx
  unsigned int v54; // r9d
  struct DXGHWQUEUE **v55; // r8
  int v56; // eax
  __int64 v57; // rsi
  int v59; // ebx
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rsi
  unsigned int v64; // edi
  unsigned int v65; // ebx
  struct DXGPROCESS *Current; // rax
  int v67; // eax
  __int64 left; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v69; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v70; // [rsp+20h] [rbp-E0h]
  __int64 v71; // [rsp+20h] [rbp-E0h]
  __int64 v72; // [rsp+28h] [rbp-D8h]
  __int64 bottom; // [rsp+28h] [rbp-D8h]
  struct DXGALLOCATION *v74; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v75; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v76; // [rsp+80h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v77; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v78; // [rsp+90h] [rbp-70h]
  struct tagRECT v79; // [rsp+98h] [rbp-68h] BYREF
  struct COREDEVICEACCESS *v80; // [rsp+A8h] [rbp-58h]
  PVOID Entry[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v82; // [rsp+C0h] [rbp-40h] BYREF
  struct DXGCONTEXT **v83; // [rsp+D0h] [rbp-30h]
  struct DXGHWQUEUE **v84; // [rsp+D8h] [rbp-28h]
  struct _DXGKARG_DESCRIBEALLOCATION v85; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v86; // [rsp+110h] [rbp+10h] BYREF
  struct _DXGKARG_PRESENT v87; // [rsp+140h] [rbp+40h] BYREF

  v83 = a5;
  v80 = a9;
  v84 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a3;
  v78 = a4;
  v76 = a3;
  v13 = *(ADAPTER_RENDER **)(v11 + 16);
  v14 = a2;
  Entry[0] = (PVOID)a8;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7409;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7409LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 296)
    && (v17 = *(_QWORD *)(v15 + 280), (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60))
    && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0
    && (v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F) != 0 )
  {
    if ( v18 == 5 )
    {
      v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v75 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 7416;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source handle 0x%I64x", v14, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
    return -1073741811LL;
  }
  v20 = *((_QWORD *)this + 2);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 1) + 16LL) + 16LL) != v21 )
  {
    v59 = -1073741811;
    WdLogSingleEntry3(2LL, v20, v75, -1073741811LL);
    v69 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7424;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v69,
      (__int64)v75,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_55;
  }
  memset(&v86, 0, sizeof(v86));
  v86.hAllocation = *(HANDLE *)(*((_QWORD *)v75 + 6) + 16LL);
  v22 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 3128LL),
          &v86,
          v21);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v22,
      this,
      *((unsigned int *)v75 + 4),
      v75,
      (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7435;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v75 + 4),
      (__int64)v75,
      (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) >> 6) & 0xF);
LABEL_65:
    v59 = v23;
    goto LABEL_55;
  }
  v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v24 + 248));
  v25 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v25 < *(_DWORD *)(v24 + 296) )
  {
    v26 = *(_QWORD *)(v24 + 280);
    if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60)
      && (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) == 0 )
    {
      v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
      if ( v27 )
      {
        if ( v27 == 5 )
        {
          v28 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * v25);
          goto LABEL_18;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v28 = 0LL;
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v28);
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 264));
  ExReleasePushLockSharedEx(v24 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v74 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 7443;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid destination handle 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_54:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
    v59 = -1073741811;
    goto LABEL_55;
  }
  v29 = *((_QWORD *)this + 2);
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v74 + 1) + 16LL) + 16LL) != v30 )
  {
    v59 = -1073741811;
    WdLogSingleEntry3(2LL, v29, v74, -1073741811LL);
    v70 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7451;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v70,
      (__int64)v74,
      -1073741811LL,
      0LL,
      0LL);
LABEL_63:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
LABEL_55:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
    return (unsigned int)v59;
  }
  memset(&v85, 0, sizeof(v85));
  v85.hAllocation = *(HANDLE *)(*((_QWORD *)v74 + 6) + 16LL);
  v31 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 3128LL),
          &v85,
          v30);
  v23 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v31,
      this,
      *((unsigned int *)v74 + 4),
      v74,
      (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7462;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v74 + 4),
      (__int64)v74,
      (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) >> 6) & 0xF);
LABEL_67:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
    goto LABEL_65;
  }
  *(_QWORD *)&v82.left = 0LL;
  v79 = 0LL;
  if ( a6 )
  {
    right = a6->right;
    Height = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a6, 12));
    v79 = *a6;
  }
  else
  {
    right = v86.Width;
    Height = v86.Height;
  }
  v34 = a8;
  Width = v85.Width;
  v36 = right - v79.left;
  v37 = v85.Height;
  if ( v36 < (int)v85.Width )
    Width = v36;
  v38 = Height - v79.top;
  v82.right = Width;
  if ( v38 < (int)v85.Height )
    v37 = v38;
  v79.right = Width + v79.left;
  v82.bottom = v37;
  v79.bottom = v37 + v79.top;
  for ( i = 0; i < a7; ++i )
  {
    p_top = &v34->top;
    if ( v34->left < 0 || *p_top < 0 )
    {
      WdLogSingleEntry4(2LL, v34->left, *p_top, 0LL, 0LL);
      v72 = *p_top;
      left = v34->left;
      WdLogGlobalForLineNumber = 7499;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The (left, top) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        left,
        v72,
        0LL,
        0LL,
        0LL);
      goto LABEL_54;
    }
    if ( v34->right > Width || v34->bottom > v37 )
    {
      v60 = v37;
      v61 = Width;
      WdLogSingleEntry4(2LL, v34->right, v34->bottom, Width, v37);
      bottom = v34->bottom;
      v71 = v34->right;
      WdLogGlobalForLineNumber = 7506;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The (right bottom) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        v71,
        bottom,
        v61,
        v60,
        0LL);
      goto LABEL_54;
    }
    ++v34;
  }
  if ( *((_BYTE *)this + 434) )
  {
    v62 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v63 = *(_QWORD *)(v62 + 16);
    v64 = *((_DWORD *)v74 + 5);
    v65 = *((_DWORD *)v75 + 5);
    Current = DXGPROCESS::GetCurrent(v62);
    v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v63 + 4664),
            Current,
            this,
            0LL,
            v65,
            v64,
            &v79,
            &v82,
            a7,
            (struct tagRECT *)Entry[0],
            0,
            0LL);
    goto LABEL_63;
  }
  if ( *((_BYTE *)this + 430) )
  {
    v41 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v42 = *((_DWORD *)this + 97);
    v43 = (struct ADAPTER_RENDER *)*((_QWORD *)v41 + 2);
    v44 = *(_QWORD *)(*((_QWORD *)v43 + 95) + 8LL);
    v45 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v44 + 224);
    LOBYTE(v44) = *((_BYTE *)this + 431) != 0;
    if ( !v45(*((_QWORD *)v74 + 3), v44, v42) )
    {
      v59 = MapGpuVaForAllocation(v43, v41, v42, v74);
      if ( v59 < 0 )
        goto LABEL_63;
    }
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL);
    v47 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v46 + 224);
    LOBYTE(v46) = *((_BYTE *)this + 431) != 0;
    if ( !v47(*((_QWORD *)v75 + 3), v46, v42) )
    {
      v59 = MapGpuVaForAllocation(v43, v41, v42, v75);
      if ( v59 < 0 )
        goto LABEL_63;
    }
    LODWORD(v12) = v76;
  }
  v48 = *((_QWORD *)this + 46);
  v77 = 0LL;
  if ( v48 )
  {
    for ( j = 0; j < *((_DWORD *)this + 94); ++j )
    {
      if ( *(_QWORD *)(v48 + 8LL * j) )
      {
        v77 = *(struct VIDMM_DMA_BUFFER **)(v48 + 8LL * j);
        *(_QWORD *)(v48 + 8LL * j) = 0LL;
        if ( !v77 )
          break;
        v50 = v80;
        goto LABEL_45;
      }
    }
  }
  v50 = v80;
  v67 = DXGCONTEXT::AcquireDmaBuffer(this, &v77, v80, 1);
  v23 = v67;
  if ( v67 < 0 )
  {
    WdLogSingleEntry1(2LL, v67);
    WdLogGlobalForLineNumber = 7587;
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
    goto LABEL_67;
  }
LABEL_45:
  memset(&v87, 0, sizeof(v87));
  v51 = *((_QWORD *)this + 2);
  v87.Flags.Value |= 1u;
  v87.pDstSubRects = (const RECT *)Entry[0];
  v87.DstRect = v82;
  v87.SubRectCnt = a7;
  v87.SrcRect = v79;
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)Entry, *(struct ADAPTER_RENDER **)(v51 + 16), 1);
  v52 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry[0];
  if ( Entry[0] )
  {
    v53 = *(_DWORD *)Entry[0] | 0x10000;
    *(_DWORD *)Entry[0] = v53;
    if ( (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL) & 3) != 0 )
    {
      v53 |= 1u;
      *(_DWORD *)v52 = v53;
    }
    v54 = v78;
    v55 = v84;
    *(_DWORD *)v52 = v53 | 0x100;
    v56 = DXGCONTEXT::SubmitPresent(this, 0LL, v55, v54, v83, 0LL, v14, v12, &v87, 0LL, v77, v52, v85.Format, v50);
    v57 = v56;
    if ( v56 < 0 )
    {
      WdLogSingleEntry1(2LL, v56);
      WdLogGlobalForLineNumber = 7622;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"SubmitPresent failed 0x%I64x", v57, 0LL, 0LL, 0LL, 0LL);
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Entry[1] + 1424), v52);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
    return (unsigned int)v57;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7604;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      7604LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v74);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v75);
    return 3221225495LL;
  }
}
