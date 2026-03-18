/*
 * XREFs of ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14036DFB4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGPRESENT::CheckInput(DXGPRESENT *this, const struct _D3DKMT_PRESENT *a2, LONG a3, LONG a4)
{
  unsigned int v5; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r10d
  LONG right; // edx
  LONG left; // ecx
  LONG bottom; // r9d
  LONG top; // r8d
  int v14; // ecx
  LONG v16; // ecx
  LONG v17; // edx
  UINT *v18; // rsi
  UINT *v19; // rdx
  void *v20; // rcx
  UINT SubRectCnt; // eax
  RECT SrcRect; // xmm1
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+28h] [rbp-40h]

  v5 = *((_DWORD *)this + 1) & 0xFFFFFFFB;
  *((_DWORD *)this + 1) = v5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( *(_BYTE *)&Value < 0
    && ((right = a2->SrcRect.right, left = a2->SrcRect.left, right <= left)
     || (bottom = a2->SrcRect.bottom, top = a2->SrcRect.top, bottom <= top)
     || left >= a3
     || top >= a4
     || right <= 0
     || bottom <= 0)
    || (*(_BYTE *)&Value & 0x40) != 0
    && ((v16 = a2->DstRect.right, v16 <= a2->DstRect.left)
     || (v17 = a2->DstRect.bottom, v17 <= a2->DstRect.top)
     || v16 <= 0
     || v17 <= 0) )
  {
    *((_DWORD *)this + 1) = v5 | 4;
    return 0LL;
  }
  v14 = *((_DWORD *)this + 18);
  if ( v14 == Value
    && *((_DWORD *)this + 19) == a3
    && *((_DWORD *)this + 20) == a4
    && *((_DWORD *)this + 29) == a2->SubRectCnt
    && ((v14 & 0x80u) == 0 || RtlCompareMemory((char *)this + 100, &a2->SrcRect, 0x10uLL) == 16)
    && ((*((_DWORD *)this + 18) & 0x40) == 0 || RtlCompareMemory((char *)this + 84, &a2->DstRect, 0x10uLL) == 16)
    && 16LL * *((unsigned int *)this + 29) == RtlCompareMemory(
                                                *((const void **)this + 15),
                                                a2->pSrcSubRects,
                                                16LL * *((unsigned int *)this + 29)) )
  {
    return 0LL;
  }
  v18 = (UINT *)((char *)this + 116);
  v19 = (UINT *)((char *)this + 116);
  if ( *((_DWORD *)this + 29) >= a2->SubRectCnt )
  {
LABEL_25:
    if ( *((_DWORD *)this + 19) == a3 )
    {
      if ( *((_DWORD *)this + 20) == a4 )
      {
LABEL_27:
        v20 = (void *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 18) = a2->Flags.0;
        SubRectCnt = a2->SubRectCnt;
        *v18 = SubRectCnt;
        memmove(v20, a2->pSrcSubRects, 16LL * SubRectCnt);
        *(RECT *)((char *)this + 84) = a2->DstRect;
        SrcRect = a2->SrcRect;
        *((_DWORD *)this + 1) |= 8u;
        *(RECT *)((char *)this + 100) = SrcRect;
        return 0LL;
      }
      v18 = v19;
    }
    *((_DWORD *)this + 1) |= 0x40u;
    *((_DWORD *)this + 19) = a3;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_27;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 15));
  v23 = 16LL * a2->SubRectCnt;
  if ( !is_mul_ok(a2->SubRectCnt, 0x10uLL) )
    v23 = -1LL;
  v24 = operator new[](v23, 0x4B677844u, 256LL);
  *((_QWORD *)this + 15) = v24;
  if ( v24 )
  {
    v19 = (UINT *)((char *)this + 116);
    goto LABEL_25;
  }
  *v18 = 0;
  WdLogSingleEntry2(6LL, this, a2->SubRectCnt);
  v25 = a2->SubRectCnt;
  WdLogGlobalForLineNumber = 10581;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    v25,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
