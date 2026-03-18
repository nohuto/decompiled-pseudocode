/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002E47C
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180042640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::CalcDesktopClip(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v3; // bl
  int *v4; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r10d
  __int64 v11; // rdi
  _DWORD *v12; // rsi
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  __int64 *v22; // [rsp+20h] [rbp-89h] BYREF
  __int64 v23; // [rsp+28h] [rbp-81h] BYREF
  int v24; // [rsp+30h] [rbp-79h]
  int v25; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-71h]
  int v27; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned int v28; // [rsp+40h] [rbp-69h]
  int v29; // [rsp+44h] [rbp-65h]
  int v30; // [rsp+48h] [rbp-61h]
  int *v31; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v32[3]; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v33[2]; // [rsp+84h] [rbp-25h] BYREF
  _DWORD v34[7]; // [rsp+8Ch] [rbp-1Dh] BYREF
  _BYTE v35[23]; // [rsp+A9h] [rbp+0h] BYREF
  __int128 v36; // [rsp+C0h] [rbp+17h] BYREF

  v3 = 0;
  v4 = v32;
  v31 = v32;
  v32[0] = 0;
  if ( *(_BYTE *)(a1 + 19473) )
  {
    v36 = *(_OWORD *)((char *)COverlayContext::GetMonitorTransform((COverlayContext *)a1) + 24);
    CRegion::SetRectangle((CRegion *)&v31, (const struct MilRectU *)&v36);
    v4 = v31;
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 19388);
    v8 = *(unsigned int *)(a1 + 19380);
    v9 = *(_DWORD *)(a1 + 19392);
    if ( (int)v8 < (int)v7 && *(_DWORD *)(a1 + 19384) < v9 )
    {
      v33[0] = *(_DWORD *)(a1 + 19384);
      v32[0] = 2;
      v32[1] = v8;
      v32[2] = v7;
      v33[1] = (unsigned int)v35 - 21 - (unsigned int)v33;
      v34[2] = v8;
      a1 = (unsigned int)v35 - 21 - (unsigned int)v34 + 8;
      v34[3] = v7;
      v34[1] = (unsigned int)v35 - 21 - (unsigned int)v34 + 8;
      v34[0] = v9;
    }
  }
  if ( *(_DWORD *)a2 - 1 >= 0 )
  {
    v11 = *(_DWORD *)a2 - 1;
    do
    {
      if ( (unsigned __int64)v11 >= *(_QWORD *)a2 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64, int *, __int64 *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          a1,
          v7,
          v8,
          v4,
          v22,
          v23);
        __debugbreak();
      }
      _mm_lfence();
      v12 = *(_DWORD **)(*(_QWORD *)(a2 + 8) + 8 * v11);
      v22 = &v23;
      v13 = v12[19];
      v14 = v12[17];
      v15 = v12[20];
      if ( v14 >= v13 || v12[18] >= v15 )
      {
        LODWORD(v23) = 0;
      }
      else
      {
        v25 = v12[18];
        LODWORD(v23) = 2;
        HIDWORD(v23) = v14;
        v24 = v13;
        v26 = (unsigned int)v35 - 101 - (unsigned int)&v25;
        v29 = v14;
        v30 = v13;
        v28 = (unsigned int)v35 - 101 - (unsigned int)&v27 + 8;
        v27 = v15;
      }
      CRegion::Subtract((CRegion *)&v31, (const struct CRegion *)&v22);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v22);
      if ( !(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(
                               v12 + 57,
                               v16,
                               v17,
                               v18) )
      {
        v19 = *(_DWORD *)(a1 + 8);
        v20 = *(_DWORD *)a1;
        v21 = *(_DWORD *)(a1 + 12);
        v22 = &v23;
        if ( v20 >= v19 || *(_DWORD *)(a1 + 4) >= v21 )
        {
          LODWORD(v23) = 0;
        }
        else
        {
          v25 = *(_DWORD *)(a1 + 4);
          LODWORD(v23) = 2;
          HIDWORD(v23) = v20;
          v24 = v19;
          v26 = (unsigned int)v35 - 101 - (unsigned int)&v25;
          v29 = v20;
          v30 = v19;
          v28 = (unsigned int)v35 - 101 - (unsigned int)&v27 + 8;
          v27 = v21;
        }
        CRegion::Union((CRegion *)&v31, (const struct CRegion *)&v22);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v22);
      }
      --v11;
    }
    while ( v11 >= 0 );
    v4 = v31;
  }
  if ( *v4 )
  {
    v3 = 1;
    *a3 = v4[1];
    a3[2] = v4[2];
    a3[1] = v4[3];
    a3[3] = v4[2 * *v4 + 1];
  }
  if ( v32 != v4 )
    operator delete(v4);
  return v3;
}
