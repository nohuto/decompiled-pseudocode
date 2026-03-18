/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1402EA590
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1400358E8 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1401EB6FC (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  char CurrentThreadPreviousMode; // al
  _OWORD *p_DirtyRectCount; // rdx
  D3DKMT_PRESENT_RGNS *v8; // rdi
  unsigned __int64 SubRectCnt; // r13
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  signed int v12; // ecx
  RECT *v13; // r14
  size_t v14; // r8
  const RECT *pSrcSubRects; // rdx
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // r12d
  unsigned int v23; // ecx
  int v24; // edx
  struct _D3DKMT_MOVE_RECT *v25; // r13
  char *v26; // r14
  unsigned int v27; // eax
  char *v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // [rsp+50h] [rbp-58h]
  unsigned int v34; // [rsp+50h] [rbp-58h]
  unsigned int Size; // [rsp+58h] [rbp-50h]
  unsigned int Sizea; // [rsp+58h] [rbp-50h]
  unsigned __int64 v37; // [rsp+60h] [rbp-48h]
  char v38; // [rsp+C8h] [rbp+20h]

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v38 = CurrentThreadPreviousMode;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    p_DirtyRectCount = &a3->pPresentRegions->DirtyRectCount;
    if ( CurrentThreadPreviousMode == 1 )
    {
      if ( (unsigned __int64)p_DirtyRectCount >= MmUserProbeAddress )
        p_DirtyRectCount = (_OWORD *)MmUserProbeAddress;
      RtlCopyVolatileMemory((char *)this + 448, p_DirtyRectCount, 0x20uLL);
    }
    else
    {
      *((_OWORD *)this + 28) = *p_DirtyRectCount;
      *((_OWORD *)this + 29) = p_DirtyRectCount[1];
    }
  }
  v8 = 0LL;
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v10 = 16 * SubRectCnt;
    v11 = -1;
    if ( 16 * SubRectCnt <= 0xFFFFFFFF )
      v11 = 16 * SubRectCnt;
    Size = v11;
    v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    v33 = v12;
    if ( v10 > 0xFFFFFFFF )
    {
      v29 = v12;
      WdLogSingleEntry4(2LL, v12, a2, SubRectCnt, 16LL);
      WdLogGlobalForLineNumber = 11679;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
        v29,
        (__int64)a2,
        a3->SubRectCnt,
        16LL,
        0LL);
      return v33;
    }
    v13 = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      v13 = (RECT *)*((_QWORD *)this + 92);
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
        v30 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v30 = -1LL;
        v13 = (RECT *)operator new[](v30, 0x4B677844u, 256LL);
        *((_QWORD *)this + 92) = v13;
        *((_DWORD *)this + 186) = v13 != 0LL ? SubRectCnt : 0;
        v11 = Size;
      }
    }
    if ( !v13 )
    {
      WdLogSingleEntry3(6LL, -1073741801LL, a2, a3->SubRectCnt);
      WdLogGlobalForLineNumber = 11689;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"0x%I64x from 0x%I64x SubRectCnt = 0x%I64d",
        -1073741801LL,
        (__int64)a2,
        a3->SubRectCnt,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v14 = v11;
    pSrcSubRects = a3->pSrcSubRects;
    if ( v38 == 1
      && ((const RECT *)((char *)pSrcSubRects + v14) < pSrcSubRects
       || (unsigned __int64)pSrcSubRects + v14 > MmUserProbeAddress) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v13, pSrcSubRects, v14);
    a3->pSrcSubRects = v13;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
LABEL_19:
    a3->pPresentRegions = v8;
    return 0LL;
  }
  v17 = 16LL * *((unsigned int *)this + 112);
  v18 = -1;
  if ( v17 <= 0xFFFFFFFF )
    v18 = 16 * *((_DWORD *)this + 112);
  Sizea = v18;
  v19 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v17 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11720;
    return v19;
  }
  v20 = *((unsigned int *)this + 116);
  v37 = v20;
  v21 = 24 * v20;
  v22 = -1;
  if ( 24 * v20 <= 0xFFFFFFFF )
    v22 = 24 * v20;
  v19 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v21 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11728;
    return v19;
  }
  v23 = v22 + v18;
  v24 = -1;
  if ( v23 >= v22 )
    v24 = v23;
  v19 = v23 < v22 ? 0xC0000095 : 0;
  if ( v23 < v22 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11736;
    return v19;
  }
  if ( !v24 )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
LABEL_66:
    v8 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
    goto LABEL_19;
  }
  v25 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  if ( (unsigned int)v20 > 4 )
  {
    v25 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
    if ( (unsigned int)v20 > *((_DWORD *)this + 214) )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
      v32 = 24 * v37;
      if ( !is_mul_ok(v37, 0x18uLL) )
        v32 = -1LL;
      v25 = (struct _D3DKMT_MOVE_RECT *)operator new[](v32, 0x4B677844u, 256LL);
      *((_QWORD *)this + 106) = v25;
      *((_DWORD *)this + 214) = v25 != 0LL ? v37 : 0;
    }
  }
  v26 = (char *)this + 864;
  v27 = *((_DWORD *)this + 112);
  v34 = v27;
  if ( v27 > 0x10 )
  {
    v26 = (char *)*((_QWORD *)this + 140);
    if ( v27 > *((_DWORD *)this + 282) )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
      v31 = 16LL * v34;
      if ( !is_mul_ok(v34, 0x10uLL) )
        v31 = -1LL;
      v26 = (char *)operator new[](v31, 0x4B677844u, 256LL);
      *((_QWORD *)this + 140) = v26;
      *((_DWORD *)this + 282) = v26 != 0LL ? v34 : 0;
    }
  }
  if ( v25 && v26 )
  {
    if ( *((_DWORD *)this + 112) )
    {
      v28 = (char *)*((_QWORD *)this + 57);
      if ( v38 == 1 && (&v28[Sizea] < v28 || (unsigned __int64)&v28[Sizea] > MmUserProbeAddress) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v26, v28, Sizea);
      *((_QWORD *)this + 57) = v26;
    }
    else
    {
      *((_QWORD *)this + 57) = 0LL;
    }
    if ( *((_DWORD *)this + 116) )
    {
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        *((_DWORD *)this + 116),
        *((const struct _D3DKMT_MOVE_RECT **)this + 59),
        v25);
      *((_QWORD *)this + 59) = v25;
    }
    else
    {
      *((_QWORD *)this + 59) = 0LL;
    }
    goto LABEL_66;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 11749;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to alloc buffer for kernel copy of meta data.",
    11749LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return -1073741801LL;
}
