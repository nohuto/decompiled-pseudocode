/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801A28A8
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801A1764 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CCompositionSurfaceBitmap@@KAPEAX_K@Z @ 0x1801A29A0 (--2CCompositionSurfaceBitmap@@KAPEAX_K@Z.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A43A8 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // edi
  _DWORD *v7; // rax
  struct CCompositionSurfaceBitmap *v8; // rbx
  CCompositionSurfaceBitmap *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v10 = 0LL;
  v7 = CCompositionSurfaceBitmap::operator new((unsigned __int64)a1);
  if ( v7 )
  {
    v7[2] = 0;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = a1;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    v7[10] = 0;
    *(_QWORD *)v7 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
    *((_QWORD *)v7 + 9) = &CCompositionSurfaceBitmap::`vftable'{for `IBitmapResource'};
    *((_QWORD *)v7 + 10) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
    *((_QWORD *)v7 + 11) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
    *((_QWORD *)v7 + 12) = 0LL;
  }
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v10, (__int64)v7);
  v8 = v10;
  if ( v10 )
  {
    CCompositionSurfaceBitmap::SetSurfaceInfo(v10, a2);
    *a3 = v8;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v3;
}
