/*
 * XREFs of ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801C7D10
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18001BFC0 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x1801C7EF4 (-RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?Create@CWindowBackgroundBitmapProducer@@SAJPEAVCWindowBackgroundTreatment@@PEAPEAV1@@Z @ 0x1801C83E0 (-Create@CWindowBackgroundBitmapProducer@@SAJPEAVCWindowBackgroundTreatment@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::GenerateBitmapForEffectInput(
        CWindowBackgroundTreatment *this,
        struct CDrawingContext *a2)
{
  CCachedImageProducer **v4; // rsi
  CWindowBackgroundBitmapProducer *v5; // rdi
  const struct RenderTargetInfo *v6; // rax
  CCachedImageProducer *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // xmm1_8
  int v12; // eax
  __int64 v13; // xmm1_8
  struct CCachedImageProducer::CCachedRealization *v14; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+30h] [rbp-98h] BYREF
  char v16; // [rsp+40h] [rbp-88h]
  __int128 v17; // [rsp+60h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(
          *((_QWORD *)this + 9),
          22LL) )
  {
    v4 = (CCachedImageProducer **)((char *)this + 80);
    v5 = (CWindowBackgroundBitmapProducer *)*((_QWORD *)this + 10);
    if ( v5 )
    {
      v6 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
      CWindowBackgroundBitmapProducer::RemoveStaleRealization(v5, v6);
    }
    else
    {
      *v4 = 0LL;
      v12 = CWindowBackgroundBitmapProducer::Create(this, (struct CWindowBackgroundBitmapProducer **)this + 10);
      v9 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
          (const char *)(unsigned int)v12);
        return v9;
      }
      v13 = *((_QWORD *)this + 13);
      *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
      *((_QWORD *)this + 19) = v13;
    }
    v16 = 0;
    v15 = 0LL;
    v17 = 0LL;
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v15);
    memset_0(&v15, 0, 0x70uLL);
    v7 = *v4;
    v14 = 0LL;
    *((_QWORD *)this + 39) = &v15;
    v8 = CCachedImageProducer::EnsureRealizationInternal(v7, a2, &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( *((_BYTE *)this + 302) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 993) + 184LL))(*((_QWORD *)a2 + 993)) )
          *((_BYTE *)this + 300) = 1;
      }
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x203,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
        (const char *)v9);
    }
    *((_QWORD *)this + 39) = 0LL;
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v15);
    return v9;
  }
  result = 0LL;
  v11 = *((_QWORD *)this + 13);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)this + 88);
  *((_QWORD *)this + 19) = v11;
  return result;
}
