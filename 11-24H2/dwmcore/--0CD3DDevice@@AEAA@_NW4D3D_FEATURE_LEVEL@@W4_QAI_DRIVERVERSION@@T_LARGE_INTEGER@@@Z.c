/*
 * XREFs of ??0CD3DDevice@@AEAA@_NW4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x180246ED0
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801DEA48 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18019D290 (--0-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUni.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CD2DContext@@IEAA@XZ @ 0x1802471D0 (--0CD2DContext@@IEAA@XZ.c)
 */

__int64 __fastcall CD3DDevice::CD3DDevice(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  CDirtyRegionAnnotation *v11; // rbx
  __int64 v12; // rsi
  CDirtyRegionAnnotation *v13; // rbx
  __int64 v14; // rsi
  CDirtyRegionAnnotation *v15; // rbx
  __int64 v16; // rsi
  CDirtyRegionAnnotation *v17; // rcx
  CDirtyRegionAnnotation *v18; // rbx
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 456) = 0LL;
  CD2DContext::CD2DContext((CD2DContext *)(a1 + 16));
  *(_DWORD *)(a1 + 480) = 1;
  *(_QWORD *)(a1 + 464) = a1 + 496;
  *(_QWORD *)(a1 + 472) = a1 + 496;
  *(_QWORD *)(a1 + 484) = 1LL;
  *(_DWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)a1 = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *v7 = &CD3DDevice::`vftable'{for `CD2DContext'};
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 624) = a5;
  *(_DWORD *)(a1 + 616) = v8;
  *(_DWORD *)(a1 + 620) = v9;
  *(_DWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 968) = -1LL;
  *(_QWORD *)(a1 + 1016) = 0LL;
  *(_QWORD *)(a1 + 1024) = 0LL;
  *(_QWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1040) = 0LL;
  *(_QWORD *)(a1 + 1064) = 0LL;
  *(_QWORD *)(a1 + 1120) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(a1 + 1192) = 0;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1136));
  *(_QWORD *)(a1 + 1160) = a1 + 1152;
  *(_QWORD *)(a1 + 1152) = a1 + 1152;
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1216) = a1 + 1240;
  *(_QWORD *)(a1 + 1224) = a1 + 1240;
  *(_QWORD *)(a1 + 1232) = a1 + 1408;
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_QWORD *)(a1 + 1416) = 0LL;
  *(_QWORD *)(a1 + 1424) = 0LL;
  TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>((_QWORD *)(a1 + 1432));
  *(_BYTE *)(a1 + 1496) = a2;
  v10 = 4LL;
  *(_QWORD *)(a1 + 1456) = 0LL;
  v11 = (CDirtyRegionAnnotation *)(a1 + 1544);
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_QWORD *)(a1 + 1480) = 0LL;
  v12 = 4LL;
  *(_QWORD *)(a1 + 1488) = 0LL;
  *(_DWORD *)(a1 + 1504) = 0;
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_QWORD *)(a1 + 1520) = 0LL;
  *(_DWORD *)(a1 + 1528) = 0;
  *(_QWORD *)(a1 + 1536) = 0LL;
  do
  {
    --v12;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v11);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v11);
    v11 = (CDirtyRegionAnnotation *)((char *)v11 + 8);
  }
  while ( v12 );
  v13 = (CDirtyRegionAnnotation *)(a1 + 1576);
  v14 = 24LL;
  do
  {
    --v14;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v13);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v13);
    v13 = (CDirtyRegionAnnotation *)((char *)v13 + 8);
  }
  while ( v14 );
  v15 = (CDirtyRegionAnnotation *)(a1 + 1768);
  v16 = 48LL;
  do
  {
    --v16;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v15);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v15);
    v15 = (CDirtyRegionAnnotation *)((char *)v15 + 8);
  }
  while ( v16 );
  v17 = (CDirtyRegionAnnotation *)(a1 + 2152);
  if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    CDirtyRegionAnnotation::CDirtyRegionAnnotation(v17);
  else
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v17);
  v18 = (CDirtyRegionAnnotation *)(a1 + 2160);
  do
  {
    --v10;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v18);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v18);
    v18 = (CDirtyRegionAnnotation *)((char *)v18 + 8);
  }
  while ( v10 );
  result = a1;
  *(_QWORD *)(a1 + 2192) = 0LL;
  return result;
}
