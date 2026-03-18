/*
 * XREFs of ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180264120
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800BA8F0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801A3E70 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1801DBABC (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct CResource *a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(char *, struct IBitmapRealization **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // eax
  struct IBitmapRealization *v12; // [rsp+30h] [rbp-79h] BYREF
  __int128 v13; // [rsp+38h] [rbp-71h] BYREF
  int v14; // [rsp+48h] [rbp-61h]
  int v15; // [rsp+4Ch] [rbp-5Dh]
  __int128 v16; // [rsp+50h] [rbp-59h] BYREF
  int v17; // [rsp+60h] [rbp-49h]
  int v18; // [rsp+64h] [rbp-45h]
  _BYTE v19[24]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v20[6]; // [rsp+80h] [rbp-29h] BYREF
  int v21; // [rsp+B0h] [rbp+7h]
  int v22; // [rsp+B4h] [rbp+Bh]
  int v23; // [rsp+C0h] [rbp+17h]
  struct D2D_RECT_F v24; // [rsp+D0h] [rbp+27h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 85LL) )
  {
    v4 = (char *)a2 + 72;
    CDrawingContext::RecordBitmapResourceInfo(
      (CDrawingContext *)((char *)this - 16),
      (struct IBitmapResource *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)));
    v5 = *((_QWORD *)a2 + 9);
    v12 = 0LL;
    v6 = *(__int64 (__fastcall **)(char *, struct IBitmapRealization **))(v5 + 64);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v12);
    v7 = v6(v4, &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB82u, 0LL);
    }
    else
    {
      v23 = 0;
      v24 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v12 + 40LL))(
             v12,
             v20,
             &v24) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v20, &v24, &v24.left);
        *(_QWORD *)&v13 = v20[0];
        *((_QWORD *)&v13 + 1) = v20[2];
        v14 = v21;
        v15 = v22;
        MILMatrix3x2::SetInverse((MILMatrix3x2 *)&v16, (const struct MILMatrix3x2 *)&v13);
      }
      else
      {
        v17 = 0;
        v18 = 0;
        v16 = _xmm;
      }
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v19, v12, v9);
      *(_QWORD *)&v13 = 1LL;
      *((_QWORD *)&v13 + 1) = &v24;
      v10 = CDrawingContext::FillRectanglesWithDrawListBitmap(
              (CDrawingContext *)((char *)this - 16),
              (const struct CDrawListBitmap *)v19,
              &v13,
              (float *)&v16);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB96u, 0LL);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v19);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xB9Au, 0LL);
  }
  return v8;
}
