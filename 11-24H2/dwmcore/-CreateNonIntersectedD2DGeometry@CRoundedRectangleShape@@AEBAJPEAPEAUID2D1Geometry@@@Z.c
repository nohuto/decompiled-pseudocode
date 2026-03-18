/*
 * XREFs of ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180075110 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1801AD368 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z @ 0x1801FC384 (-CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2,
        __int64 a3)
{
  __int64 v3; // r9
  unsigned int v6; // ebx
  CRoundedRectangleGeometryData *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  CCachedVisualImage *v10; // rbx
  __int64 (__fastcall *v11)(CCachedVisualImage *, struct ID2D1RectangleGeometry **); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  CCachedVisualImage *v15; // rax
  CCachedVisualImage *v16; // rcx
  struct ID2D1RectangleGeometry *v17; // rdx
  void (*v18)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct ID2D1RectangleGeometry *v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  const struct D2D_RECT_F *BaseRect; // rax
  CD2DFactory *v26; // rcx
  int v27; // eax
  struct ID2D1RectangleGeometry *v28; // [rsp+30h] [rbp-30h] BYREF
  CCachedVisualImage *v29; // [rsp+38h] [rbp-28h] BYREF
  float v30; // [rsp+40h] [rbp-20h]
  float v31; // [rsp+44h] [rbp-1Ch]
  float v32[4]; // [rsp+48h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 2);
  v6 = 0;
  if ( *(float *)(v3 + 64) <= 0.0 )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v3 + 16)) )
    {
      if ( CRoundedRectangleGeometryData::IsEllipse(v7) )
      {
        CRoundedRectangleGeometryData::GetBaseRect(v8, (__int64)&v29);
        v32[1] = (float)(*((float *)&v29 + 1) + v31) * 0.5;
        v32[0] = (float)(*(float *)&v29 + v30) * 0.5;
        v32[2] = *(float *)(v23 + 32);
        v32[3] = *(float *)(v23 + 36);
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        v24 = (*(__int64 (__fastcall **)(__int64, float *, struct ID2D1RectangleGeometry **))(*(_QWORD *)g_DeviceManager
                                                                                            + 56LL))(
                g_DeviceManager,
                v32,
                &v28);
        v6 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x17Cu, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          return v6;
        }
        *a2 = v28;
      }
    }
    else
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      BaseRect = (const struct D2D_RECT_F *)CRoundedRectangleGeometryData::GetBaseRect(
                                              *((_QWORD *)this + 2) + 16LL,
                                              (__int64)v32);
      v27 = CD2DFactory::CreateRectangleGeometry(v26, BaseRect, &v28);
      v6 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x16Du, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        return v6;
      }
      *a2 = v28;
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    }
  }
  if ( !*a2 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v29, (__int64)a2, a3);
    v9 = (*(__int64 (__fastcall **)(__int64, CCachedVisualImage **))(*(_QWORD *)g_DeviceManager + 80LL))(
           g_DeviceManager,
           &v29);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x185u, 0LL);
    }
    else
    {
      v10 = v29;
      v28 = 0LL;
      v11 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct ID2D1RectangleGeometry **))(*(_QWORD *)v29 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      v12 = v11(v10, &v28);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x188u, 0LL);
        v22 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct ID2D1RectangleGeometry *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
      else
      {
        CRoundedRectangleShape::AddNonIntersectedD2DGeometry(this, v28);
        v13 = (*(__int64 (__fastcall **)(struct ID2D1RectangleGeometry *))(*(_QWORD *)v28 + 72LL))(v28);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v15 = v29;
          v16 = 0LL;
          v17 = v28;
          v29 = 0LL;
          *a2 = v15;
          if ( v17 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(struct ID2D1RectangleGeometry *))(*(_QWORD *)v17 + 16LL))(v17);
            v16 = v29;
          }
          if ( v16 )
          {
            v29 = 0LL;
            v18 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
            if ( (char *)v18 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
            {
              CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v16);
            }
            else if ( (char *)v18 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
            {
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
                v16,
                (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
                v14);
            }
            else if ( (char *)v18 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
            {
              CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v16);
            }
            else
            {
              v18();
            }
          }
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x18Au, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v29, v20, v21);
  }
  return v6;
}
