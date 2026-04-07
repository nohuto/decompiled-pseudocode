/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18005A7B8
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18005A3D0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18005A5C0 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18005AA78 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  signed __int32 v15; // eax
  CBitmapLock *v16; // rax
  CBitmapLock *v17; // rax
  CBitmapLock *v18; // r14
  unsigned int v19; // edi
  unsigned int v21; // eax
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) != 0 )
    {
      while ( 1 )
      {
        v15 = *((_DWORD *)this + 53) & 0x7FFFFFFF;
        if ( v15 + 1 < 0 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)this + 53, v15 + 1, v15) )
          goto LABEL_5;
      }
      v19 = -2003292403;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292403, 0x3Bu, 0LL);
      v24 = 671;
    }
    else
    {
      v19 = -2147024809;
      v24 = 675;
    }
    goto LABEL_27;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 53, 0x80000000, 0) )
  {
    v19 = -2003292403;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292403, 0x5Au, 0LL);
    v24 = 667;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v24, 0LL);
    return v19;
  }
LABEL_5:
  v16 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         160LL);
  if ( !v16 )
  {
    v18 = 0LL;
    goto LABEL_19;
  }
  v17 = CBitmapLock::CBitmapLock(v16);
  v18 = v17;
  if ( !v17 )
  {
LABEL_19:
    v19 = -2147024882;
    v21 = 681;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v17 + 8LL))(v17);
  v19 = CBitmapLock::HrInit(
          v18,
          (struct IBitmapUnlock *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a10,
          a11);
  if ( (v19 & 0x80000000) == 0 )
  {
    if ( (a8 & 2) != 0 )
    {
      v22 = (*((_DWORD *)this + 42))++ == -1;
      v23 = *((_DWORD *)this + 42);
      if ( v22 )
        v23 = 1;
      *((_DWORD *)this + 42) = v23;
    }
    *a9 = (CBitmapLock *)((char *)v18 + 72);
    return v19;
  }
  v21 = 693;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21, 0LL);
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 53) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 53);
  }
  if ( v18 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v18 + 16LL))(v18);
  return v19;
}
