/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402F4884
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401BF068 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F467C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140227920 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402B6ED4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x140400328 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
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
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  UINT right; // ecx
  UINT Height; // edx
  const struct tagRECT *v32; // rsi
  signed int Width; // r9d
  int v34; // ecx
  signed int v35; // r8d
  int v36; // edx
  unsigned int i; // eax
  int *p_top; // rbx
  struct DXGDEVICE *v39; // rsi
  unsigned int v40; // edi
  struct ADAPTER_RENDER *v41; // r15
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(_QWORD, __int64, _QWORD); // rax
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(_QWORD, __int64, _QWORD); // rax
  __int64 v46; // rcx
  unsigned int j; // eax
  struct COREDEVICEACCESS *v48; // rbx
  __int64 v49; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v50; // rdi
  int v51; // edx
  unsigned int v52; // r9d
  struct DXGHWQUEUE **v53; // r8
  int v54; // eax
  __int64 v55; // rsi
  int v57; // ebx
  __int64 v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned int v62; // edi
  unsigned int v63; // ebx
  struct DXGPROCESS *Current; // rax
  int v65; // eax
  __int64 left; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v67; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v68; // [rsp+20h] [rbp-E0h]
  __int64 v69; // [rsp+20h] [rbp-E0h]
  __int64 v70; // [rsp+28h] [rbp-D8h]
  __int64 bottom; // [rsp+28h] [rbp-D8h]
  struct DXGALLOCATION *v72; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v73; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+80h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v75; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v76; // [rsp+90h] [rbp-70h]
  struct tagRECT v77; // [rsp+98h] [rbp-68h] BYREF
  struct COREDEVICEACCESS *v78; // [rsp+A8h] [rbp-58h]
  PVOID Entry[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v80; // [rsp+C0h] [rbp-40h] BYREF
  struct DXGCONTEXT **v81; // [rsp+D0h] [rbp-30h]
  struct DXGHWQUEUE **v82; // [rsp+D8h] [rbp-28h]
  struct _DXGKARG_DESCRIBEALLOCATION v83; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v84; // [rsp+110h] [rbp+10h] BYREF
  struct _DXGKARG_PRESENT v85; // [rsp+140h] [rbp+40h] BYREF

  v81 = a5;
  v78 = a9;
  v82 = a10;
  v11 = *((_QWORD *)this + 2);
  v12 = a3;
  v76 = a4;
  v74 = a3;
  v13 = *(ADAPTER_RENDER **)(v11 + 16);
  v14 = a2;
  Entry[0] = (PVOID)a8;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7444;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7444LL,
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
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v73, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v73 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 7451;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid source handle 0x%I64x", v14, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    return -1073741811LL;
  }
  v20 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v73 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
  {
    v57 = -1073741811;
    WdLogSingleEntry3(2LL, v20, v73, -1073741811LL);
    v67 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7459;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v67,
      (__int64)v73,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_55;
  }
  memset(&v84, 0, sizeof(v84));
  v84.hAllocation = *(HANDLE *)(*((_QWORD *)v73 + 6) + 16LL);
  v21 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 3128LL),
          &v84);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v21,
      this,
      *((unsigned int *)v73 + 4),
      v73,
      (*(_DWORD *)(*((_QWORD *)v73 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7470;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v22,
      (__int64)this,
      *((unsigned int *)v73 + 4),
      (__int64)v73,
      (*(_DWORD *)(*((_QWORD *)v73 + 6) + 4LL) >> 6) & 0xF);
LABEL_65:
    v57 = v22;
    goto LABEL_55;
  }
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 248));
  v24 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  if ( v24 < *(_DWORD *)(v23 + 296) )
  {
    v25 = *(_QWORD *)(v23 + 280);
    if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
      && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0 )
    {
      v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F;
      if ( v26 )
      {
        if ( v26 == 5 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16LL * v24);
          goto LABEL_18;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v27 = 0LL;
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72, v27);
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 264));
  ExReleasePushLockSharedEx(v23 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v72 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 7478;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid destination handle 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_54:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v72);
    v57 = -1073741811;
    goto LABEL_55;
  }
  v28 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v72 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) )
  {
    v57 = -1073741811;
    WdLogSingleEntry3(2LL, v28, v72, -1073741811LL);
    v68 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7486;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v68,
      (__int64)v72,
      -1073741811LL,
      0LL,
      0LL);
LABEL_63:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v72);
LABEL_55:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    return (unsigned int)v57;
  }
  memset(&v83, 0, sizeof(v83));
  v83.hAllocation = *(HANDLE *)(*((_QWORD *)v72 + 6) + 16LL);
  v29 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 3128LL),
          &v83);
  v22 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v29,
      this,
      *((unsigned int *)v72 + 4),
      v72,
      (*(_DWORD *)(*((_QWORD *)v72 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7497;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x",
      v22,
      (__int64)this,
      *((unsigned int *)v72 + 4),
      (__int64)v72,
      (*(_DWORD *)(*((_QWORD *)v72 + 6) + 4LL) >> 6) & 0xF);
LABEL_67:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v72);
    goto LABEL_65;
  }
  *(_QWORD *)&v80.left = 0LL;
  v77 = 0LL;
  if ( a6 )
  {
    right = a6->right;
    Height = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a6, 12));
    v77 = *a6;
  }
  else
  {
    right = v84.Width;
    Height = v84.Height;
  }
  v32 = a8;
  Width = v83.Width;
  v34 = right - v77.left;
  v35 = v83.Height;
  if ( v34 < (int)v83.Width )
    Width = v34;
  v36 = Height - v77.top;
  v80.right = Width;
  if ( v36 < (int)v83.Height )
    v35 = v36;
  v77.right = Width + v77.left;
  v80.bottom = v35;
  v77.bottom = v35 + v77.top;
  for ( i = 0; i < a7; ++i )
  {
    p_top = &v32->top;
    if ( v32->left < 0 || *p_top < 0 )
    {
      WdLogSingleEntry4(2LL, v32->left, *p_top, 0LL, 0LL);
      v70 = *p_top;
      left = v32->left;
      WdLogGlobalForLineNumber = 7534;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The (left, top) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        left,
        v70,
        0LL,
        0LL,
        0LL);
      goto LABEL_54;
    }
    if ( v32->right > Width || v32->bottom > v35 )
    {
      v58 = v35;
      v59 = Width;
      WdLogSingleEntry4(2LL, v32->right, v32->bottom, Width, v35);
      bottom = v32->bottom;
      v69 = v32->right;
      WdLogGlobalForLineNumber = 7541;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"The (right bottom) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        v69,
        bottom,
        v59,
        v58,
        0LL);
      goto LABEL_54;
    }
    ++v32;
  }
  if ( *((_BYTE *)this + 434) )
  {
    v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v61 = *(_QWORD *)(v60 + 16);
    v62 = *((_DWORD *)v72 + 5);
    v63 = *((_DWORD *)v73 + 5);
    Current = DXGPROCESS::GetCurrent(v60);
    v57 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v61 + 4664),
            Current,
            this,
            0LL,
            v63,
            v62,
            &v77,
            &v80,
            a7,
            (struct tagRECT *)Entry[0],
            0,
            0LL);
    goto LABEL_63;
  }
  if ( *((_BYTE *)this + 430) )
  {
    v39 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v40 = *((_DWORD *)this + 97);
    v41 = (struct ADAPTER_RENDER *)*((_QWORD *)v39 + 2);
    v42 = *(_QWORD *)(*((_QWORD *)v41 + 95) + 8LL);
    v43 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v42 + 224);
    LOBYTE(v42) = *((_BYTE *)this + 431) != 0;
    if ( !v43(*((_QWORD *)v72 + 3), v42, v40) )
    {
      v57 = MapGpuVaForAllocation(v41, v39, v40, v72);
      if ( v57 < 0 )
        goto LABEL_63;
    }
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL);
    v45 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v44 + 224);
    LOBYTE(v44) = *((_BYTE *)this + 431) != 0;
    if ( !v45(*((_QWORD *)v73 + 3), v44, v40) )
    {
      v57 = MapGpuVaForAllocation(v41, v39, v40, v73);
      if ( v57 < 0 )
        goto LABEL_63;
    }
    LODWORD(v12) = v74;
  }
  v46 = *((_QWORD *)this + 46);
  v75 = 0LL;
  if ( v46 )
  {
    for ( j = 0; j < *((_DWORD *)this + 94); ++j )
    {
      if ( *(_QWORD *)(v46 + 8LL * j) )
      {
        v75 = *(struct VIDMM_DMA_BUFFER **)(v46 + 8LL * j);
        *(_QWORD *)(v46 + 8LL * j) = 0LL;
        if ( !v75 )
          break;
        v48 = v78;
        goto LABEL_45;
      }
    }
  }
  v48 = v78;
  v65 = DXGCONTEXT::AcquireDmaBuffer(this, &v75, v78, 1);
  v22 = v65;
  if ( v65 < 0 )
  {
    WdLogSingleEntry1(2LL, v65);
    WdLogGlobalForLineNumber = 7622;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire DMA buffer 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
LABEL_45:
  memset(&v85, 0, sizeof(v85));
  v49 = *((_QWORD *)this + 2);
  v85.Flags.Value |= 1u;
  v85.pDstSubRects = (const RECT *)Entry[0];
  v85.DstRect = v80;
  v85.SubRectCnt = a7;
  v85.SrcRect = v77;
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)Entry, *(struct ADAPTER_RENDER **)(v49 + 16), 1);
  v50 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry[0];
  if ( Entry[0] )
  {
    v51 = *(_DWORD *)Entry[0] | 0x10000;
    *(_DWORD *)Entry[0] = v51;
    if ( (*(_DWORD *)(*((_QWORD *)v72 + 6) + 4LL) & 3) != 0 || (*(_DWORD *)(*((_QWORD *)v73 + 6) + 4LL) & 3) != 0 )
    {
      v51 |= 1u;
      *(_DWORD *)v50 = v51;
    }
    v52 = v76;
    v53 = v82;
    *(_DWORD *)v50 = v51 | 0x100;
    v54 = DXGCONTEXT::SubmitPresent(this, 0LL, v53, v52, v81, 0LL, v14, v12, &v85, 0LL, v75, v50, v83.Format, v48);
    v55 = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry1(2LL, v54);
      WdLogGlobalForLineNumber = 7657;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"SubmitPresent failed 0x%I64x", v55, 0LL, 0LL, 0LL, 0LL);
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Entry[1] + 1424), v50);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v72);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    return (unsigned int)v55;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7639;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      7639LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v72);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v73);
    return 3221225495LL;
  }
}
