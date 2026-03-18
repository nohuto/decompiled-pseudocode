/*
 * XREFs of ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x180263C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18004DE34 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::FlattenToLineSegments(CShape *this, float a2, struct CShape **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct ID2D1Geometry *v9; // rbx
  __int64 (__fastcall *v10)(struct ID2D1Geometry *, __int64 *); // rdi
  CPolygonShape *v11; // rax
  struct CShape *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  struct ID2D1Geometry *v17; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)this;
  v15[0] = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v3 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
  v7 = v6(this, 0LL, v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 406;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
  v7 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
         g_DeviceManager,
         &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 408;
    goto LABEL_16;
  }
  v9 = v17;
  v10 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v17 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v7 = v10(v9, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 409;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15[0] + 72LL))(v15[0], 1LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 414;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 415;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v14, 0LL);
    goto LABEL_17;
  }
  v11 = (CPolygonShape *)operator new(0x18uLL);
  if ( !v11 )
  {
    *a3 = 0LL;
LABEL_10:
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1A2u, 0LL);
    goto LABEL_17;
  }
  v12 = CPolygonShape::CPolygonShape(v11, v17);
  *a3 = v12;
  if ( !v12 )
    goto LABEL_10;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
  return v8;
}
