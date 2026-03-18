/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18007BE8C
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18012B4FC (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqu.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18020C554 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U.c)
 *     ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x180210844 (-CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  unsigned int v1; // ebx
  CD2DFactory *v4; // rcx
  int v5; // eax
  struct ID2D1Geometry *v6; // rcx
  signed __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  struct ID2D1Geometry *v8; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT *v9[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v10; // [rsp+58h] [rbp-A8h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v7 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v9);
    v10 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>>(
      (char *)this + 16,
      v9);
    v8 = 0LL;
    v5 = CD2DFactory::CreateRegionGeometry(v4, v9[0], v10, &v8);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x109u, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>(v9);
      v6 = v8;
      if ( !v8 )
        return v1;
    }
    else
    {
      (**(void (__fastcall ***)(struct ID2D1Geometry *, GUID *, signed __int64 *))v8)(
        v8,
        &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
        &v7);
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v7, 0LL) )
        v7 = 0LL;
      DynArrayImpl<0>::~DynArrayImpl<0>(v9);
      if ( v7 )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = v8;
    }
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v1;
}
