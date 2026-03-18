/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F72C8
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402F8EB4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x14004152C (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1400475A8 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  __int64 v11; // r15
  D3DKMT_PRESENTFLAGS *p_Flags; // rdi
  D3DKMT_HANDLE hSource; // eax
  __int64 v15; // r10
  int v16; // edx
  DXGDEVICE *v17; // r10
  int v18; // eax
  __int64 v19; // r14
  DXGDEVICE *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 Format; // rdx
  bool v25; // zf
  const RECT *pDirtyRects; // r14
  UINT DirtyRectCount; // edx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  int v30; // eax
  void *v32; // rax
  unsigned int MoveRectCount; // edx
  void *v35; // rax
  __int64 v36; // rdi
  LONG left; // r9d
  int right; // r8d
  LONG top; // r10d
  LONG bottom; // r11d
  UINT i; // ecx
  __int64 v42; // rcx
  __int64 v43; // rdx
  UINT Height; // eax
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // [rsp+38h] [rbp-99h]
  __int64 v49; // [rsp+38h] [rbp-99h]
  D3DKMT_HANDLE v50; // [rsp+58h] [rbp-79h] BYREF
  struct _D3DKMT_UNLOCK v51; // [rsp+60h] [rbp-71h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+70h] [rbp-61h] BYREF
  struct _D3DKMT_LOCK v53; // [rsp+A0h] [rbp-31h] BYREF

  v25 = *((_BYTE *)a2 + 434) == 0;
  v11 = a3;
  memset(&v52, 0, sizeof(v52));
  p_Flags = &a8->Flags;
  if ( !v25 )
  {
    *((_QWORD *)this + 1) = 0LL;
    a5 = 0;
    goto LABEL_15;
  }
  if ( (p_Flags->Value & 4) != 0 )
    hSource = a8->hSource;
  else
    hSource = a8->hDestination;
  v15 = *((_QWORD *)a2 + 2);
  memset(&v53, 0, sizeof(v53));
  v50 = hSource;
  v53.hAllocation = hSource;
  v53.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL)) )
    v53.Flags.Value = v16 | 4;
  v18 = DXGDEVICE::Lock(v17, &v53, a10, 0);
  v19 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry5(2LL, v18, a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), v53.hAllocation, a4);
    v48 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
    WdLogGlobalForLineNumber = 336;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DOD Present 0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      v19,
      (__int64)a2,
      v48,
      v53.hAllocation,
      (__int64)a4);
    return (unsigned int)v19;
  }
  v51.hDevice = 0;
  *((_QWORD *)this + 1) = v53.pData;
  v20 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v51.phAllocations = &v50;
  v51.NumAllocations = 1;
  DXGDEVICE::Unlock(v20, &v51, 0);
  v21 = *((_QWORD *)a2 + 2);
  v52.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
  v23 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v21 + 16), &v52, v22);
  if ( v23 < 0 )
  {
    v36 = v23;
    WdLogSingleEntry5(2LL, v23, a2, *((unsigned int *)a4 + 4), a4, v11);
    v49 = *((unsigned int *)a4 + 4);
    WdLogGlobalForLineNumber = 369;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v36,
      (__int64)a2,
      v49,
      (__int64)a4,
      v11);
    return -1073741811LL;
  }
  Format = v52.Format;
  *(_DWORD *)this = v11;
  if ( (int)Format <= 32 )
  {
    switch ( (_DWORD)Format )
    {
      case 0x20:
        goto LABEL_14;
      case 0x14:
        *((_DWORD *)this + 4) = 3;
        break;
      case 0x15:
      case 0x16:
        goto LABEL_14;
      case 0x17:
        *((_DWORD *)this + 4) = 2;
        break;
      default:
        v25 = (_DWORD)Format == 31;
        goto LABEL_13;
    }
LABEL_15:
    pDirtyRects = 0LL;
    *((_DWORD *)this + 5) = a5;
    DirtyRectCount = 0;
    *((_DWORD *)this + 6) = a6 & 1;
    pPresentRegions = a8->pPresentRegions;
    v30 = p_Flags->Value & 4;
    if ( v30 )
    {
      if ( pPresentRegions )
      {
        DirtyRectCount = pPresentRegions->DirtyRectCount;
        pDirtyRects = pPresentRegions->pDirtyRects;
      }
      else
      {
        a7 = 0LL;
      }
    }
    else
    {
      DirtyRectCount = a9->SubRectCnt;
      pDirtyRects = a9->pDstSubRects;
    }
    if ( a7 )
    {
      left = a7->left;
      right = a7->right;
      if ( a7->left >= right
        || (top = a7->top, bottom = a7->bottom, top >= bottom)
        || right > (int)v52.Width
        || bottom > (int)v52.Height
        || left < 0
        || top < 0 )
      {
LABEL_67:
        a7 = 0LL;
      }
      else
      {
        for ( i = 0; i < DirtyRectCount; ++i )
        {
          if ( left >= pDirtyRects[i].left
            && right <= pDirtyRects[i].right
            && top >= pDirtyRects[i].top
            && bottom <= pDirtyRects[i].bottom )
          {
            goto LABEL_67;
          }
        }
        ++DirtyRectCount;
      }
    }
    if ( v30 )
    {
      if ( !pPresentRegions || !DirtyRectCount && !pPresentRegions->MoveRectCount )
      {
        *((_DWORD *)this + 10) = 1;
        *((_QWORD *)this + 6) = (char *)this + 176;
        *((_DWORD *)this + 44) = 0;
        *((_DWORD *)this + 45) = 0;
        v42 = *((_QWORD *)this + 6);
        if ( *((_BYTE *)a2 + 434) )
        {
          v43 = *((_QWORD *)a4 + 6);
          *(_DWORD *)(v42 + 8) = *(_DWORD *)(v43 + 72);
          Height = *(_DWORD *)(v43 + 76);
        }
        else
        {
          *(_DWORD *)(v42 + 8) = v52.Width;
          Height = v52.Height;
        }
        *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
        *((_DWORD *)this + 7) = 0;
        goto LABEL_29;
      }
      *((_DWORD *)this + 10) = DirtyRectCount;
      if ( !DirtyRectCount )
      {
        *((_QWORD *)this + 6) = 0LL;
LABEL_28:
        MoveRectCount = pPresentRegions->MoveRectCount;
        *((_DWORD *)this + 7) = MoveRectCount;
        if ( !MoveRectCount )
        {
LABEL_29:
          *((_QWORD *)this + 4) = 0LL;
          return 0LL;
        }
        v45 = (void *)CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        v46 = *((unsigned int *)this + 7);
        *((_QWORD *)this + 4) = v45;
        if ( v45 )
        {
          memmove(v45, pPresentRegions->pMoveRects, 24 * v46);
          return 0LL;
        }
        WdLogSingleEntry2(2LL, this, (unsigned int)v46);
        v47 = *((unsigned int *)this + 7);
        WdLogGlobalForLineNumber = 531;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x move rects",
          (__int64)this,
          v47,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      v32 = (void *)CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
      *((_QWORD *)this + 6) = v32;
      if ( v32 )
      {
        if ( pPresentRegions->DirtyRectCount )
          memmove(v32, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( a7 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *a7;
        goto LABEL_28;
      }
      WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
      WdLogGlobalForLineNumber = 504;
    }
    else
    {
      *((_DWORD *)this + 7) = 0;
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 10) = DirtyRectCount;
      v35 = (void *)CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
      *((_QWORD *)this + 6) = v35;
      if ( v35 )
      {
        memmove(v35, a9->pDstSubRects, 16LL * a9->SubRectCnt);
        if ( a7 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * a9->SubRectCnt) = *a7;
        return 0LL;
      }
      WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
      WdLogGlobalForLineNumber = 585;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x dirty rects",
      (__int64)this,
      *((unsigned int *)this + 10),
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  switch ( (_DWORD)Format )
  {
    case 'q':
      *((_DWORD *)this + 4) = 8;
      goto LABEL_15;
    case '!':
LABEL_14:
      *((_DWORD *)this + 4) = 4;
      goto LABEL_15;
    case ')':
      *((_DWORD *)this + 4) = 1;
      goto LABEL_15;
  }
  v25 = (_DWORD)Format == 119;
LABEL_13:
  if ( v25 )
    goto LABEL_14;
  WdLogSingleEntry2(2LL, -1073741811LL, Format);
  WdLogGlobalForLineNumber = 407;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DOD Present : 0x%I64x is returned for invalid primary format 0x%I64x",
    -1073741811LL,
    v52.Format,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
