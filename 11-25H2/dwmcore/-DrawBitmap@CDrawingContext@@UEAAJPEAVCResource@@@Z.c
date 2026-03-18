/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180270130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800E0B50 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801161D0 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1801E7028 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(char *, struct IBitmapRealization **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct IBitmapRealization *v11; // [rsp+30h] [rbp-79h] BYREF
  __int128 v12; // [rsp+38h] [rbp-71h] BYREF
  int v13; // [rsp+48h] [rbp-61h]
  int v14; // [rsp+4Ch] [rbp-5Dh]
  __int128 v15; // [rsp+50h] [rbp-59h] BYREF
  int v16; // [rsp+60h] [rbp-49h]
  int v17; // [rsp+64h] [rbp-45h]
  _BYTE v18[24]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v19[6]; // [rsp+80h] [rbp-29h] BYREF
  int v20; // [rsp+B0h] [rbp+7h]
  int v21; // [rsp+B4h] [rbp+Bh]
  int v22; // [rsp+C0h] [rbp+17h]
  struct D2D_RECT_F v23; // [rsp+D0h] [rbp+27h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 84LL) )
  {
    v4 = (char *)a2 + 72;
    CDrawingContext::RecordBitmapResourceInfo(
      (CDrawingContext *)((char *)this - 16),
      (struct IBitmapResource *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)));
    v5 = *((_QWORD *)a2 + 9);
    v11 = 0LL;
    v6 = *(__int64 (__fastcall **)(char *, struct IBitmapRealization **))(v5 + 64);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v11);
    v7 = v6(v4, &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB82u, 0LL);
    }
    else
    {
      v22 = 0;
      v23 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v11 + 40LL))(
             v11,
             v19,
             &v23) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v19, &v23, &v23.left);
        *(_QWORD *)&v12 = v19[0];
        *((_QWORD *)&v12 + 1) = v19[2];
        v13 = v20;
        v14 = v21;
        MILMatrix3x2::SetInverse((MILMatrix3x2 *)&v15, (const struct MILMatrix3x2 *)&v12);
      }
      else
      {
        v16 = 0;
        v17 = 0;
        v15 = _xmm;
      }
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v18, v11);
      *(_QWORD *)&v12 = 1LL;
      *((_QWORD *)&v12 + 1) = &v23;
      v9 = CDrawingContext::FillRectanglesWithDrawListBitmap(
             (CDrawingContext *)((char *)this - 16),
             (unsigned __int64)v18,
             &v12,
             (float *)&v15);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB96u, 0LL);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v18);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xB9Au, 0LL);
  }
  return v8;
}
