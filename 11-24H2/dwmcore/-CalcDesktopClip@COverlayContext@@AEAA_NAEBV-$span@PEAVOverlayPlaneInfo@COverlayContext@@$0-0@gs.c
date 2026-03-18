/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027A6C
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18005B278 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // [rsp+20h] [rbp-89h] BYREF
  __int64 v20; // [rsp+28h] [rbp-81h] BYREF
  int v21; // [rsp+30h] [rbp-79h]
  int v22; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-71h]
  int v24; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned int v25; // [rsp+40h] [rbp-69h]
  int v26; // [rsp+44h] [rbp-65h]
  int v27; // [rsp+48h] [rbp-61h]
  int *v28; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v29[3]; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v30[2]; // [rsp+84h] [rbp-25h] BYREF
  _DWORD v31[7]; // [rsp+8Ch] [rbp-1Dh] BYREF
  _BYTE v32[23]; // [rsp+A9h] [rbp+0h] BYREF
  __int128 v33; // [rsp+C0h] [rbp+17h] BYREF

  v3 = 0;
  v4 = v29;
  v28 = v29;
  v29[0] = 0;
  if ( *(_BYTE *)(a1 + 19089) )
  {
    v33 = *(_OWORD *)((char *)COverlayContext::GetMonitorTransform((COverlayContext *)a1) + 24);
    CRegion::SetRectangle((CRegion *)&v28, (const struct MilRectU *)&v33);
    v4 = v28;
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 19004);
    v8 = *(unsigned int *)(a1 + 18996);
    v9 = *(_DWORD *)(a1 + 19008);
    if ( (int)v8 < (int)v7 && *(_DWORD *)(a1 + 19000) < v9 )
    {
      v30[0] = *(_DWORD *)(a1 + 19000);
      v29[0] = 2;
      v29[1] = v8;
      v29[2] = v7;
      v30[1] = (unsigned int)v32 - 21 - (unsigned int)v30;
      v31[2] = v8;
      a1 = (unsigned int)v32 - 21 - (unsigned int)v31 + 8;
      v31[3] = v7;
      v31[1] = (unsigned int)v32 - 21 - (unsigned int)v31 + 8;
      v31[0] = v9;
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
          v19,
          v20);
        __debugbreak();
      }
      _mm_lfence();
      v12 = *(_DWORD **)(*(_QWORD *)(a2 + 8) + 8 * v11);
      v19 = &v20;
      v13 = v12[19];
      v14 = v12[17];
      v15 = v12[20];
      if ( v14 >= v13 || v12[18] >= v15 )
      {
        LODWORD(v20) = 0;
      }
      else
      {
        v22 = v12[18];
        LODWORD(v20) = 2;
        HIDWORD(v20) = v14;
        v21 = v13;
        v23 = (unsigned int)v32 - 101 - (unsigned int)&v22;
        v26 = v14;
        v27 = v13;
        v25 = (unsigned int)v32 - 101 - (unsigned int)&v24 + 8;
        v24 = v15;
      }
      CRegion::Subtract((CRegion *)&v28, (const struct CRegion *)&v19);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v19);
      if ( !(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(v12 + 57) )
      {
        v16 = *(_DWORD *)(a1 + 8);
        v17 = *(_DWORD *)a1;
        v18 = *(_DWORD *)(a1 + 12);
        v19 = &v20;
        if ( v17 >= v16 || *(_DWORD *)(a1 + 4) >= v18 )
        {
          LODWORD(v20) = 0;
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 4);
          LODWORD(v20) = 2;
          HIDWORD(v20) = v17;
          v21 = v16;
          v23 = (unsigned int)v32 - 101 - (unsigned int)&v22;
          v26 = v17;
          v27 = v16;
          v25 = (unsigned int)v32 - 101 - (unsigned int)&v24 + 8;
          v24 = v18;
        }
        CRegion::Union((CRegion *)&v28, (const struct CRegion *)&v19);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v19);
      }
      --v11;
    }
    while ( v11 >= 0 );
    v4 = v28;
  }
  if ( *v4 )
  {
    v3 = 1;
    *a3 = v4[1];
    a3[2] = v4[2];
    a3[1] = v4[3];
    a3[3] = v4[2 * *v4 + 1];
  }
  if ( v29 != v4 )
    operator delete(v4);
  return v3;
}
