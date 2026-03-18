/*
 * XREFs of ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x180258D00
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801469A0 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::FlattenToLineSegments(CShape *this, float a2, struct CShape **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  struct ID2D1Geometry *v11; // rbx
  __int64 (__fastcall *v12)(struct ID2D1Geometry *, __int64 *); // rdi
  CPolygonShape *v13; // rax
  struct CShape *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-30h]
  __int64 v19[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  struct ID2D1Geometry *v21; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)this;
  v19[0] = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v3 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  v7 = v6(this, 0LL, v19);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = 406;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21, v8, v9);
  v7 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
         g_DeviceManager,
         &v21);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = 408;
    goto LABEL_16;
  }
  v11 = v21;
  v12 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v21 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v7 = v12(v11, &v20);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = 409;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19[0] + 72LL))(v19[0], 1LL);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = 414;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
  v10 = v7;
  if ( v7 < 0 )
  {
    v18 = 415;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v18, 0LL);
    goto LABEL_17;
  }
  v13 = (CPolygonShape *)operator new(0x18uLL);
  if ( !v13 )
  {
    *a3 = 0LL;
LABEL_10:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1A2u, 0LL);
    goto LABEL_17;
  }
  v14 = CPolygonShape::CPolygonShape(v13, v21);
  *a3 = v14;
  if ( !v14 )
    goto LABEL_10;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v21, v15, v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  return v10;
}
