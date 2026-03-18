/*
 * XREFs of ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x180201E80
 * Callers:
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x180069370 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetOutline(CShape *this, struct ID2D1GeometrySink *a2)
{
  char IsAxisAlignedRectangle; // al
  __int64 v5; // r9
  __int64 (__fastcall *v6)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **, __int64); // rax
  int D2DGeometry; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  __int64 (__fastcall *v12)(CShape *, struct ID2D1Geometry **, _QWORD); // rax
  int v13; // eax
  __int64 v14; // rax
  void (__fastcall *v15)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD); // rax
  struct ID2D1Geometry *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+4Ch] [rbp-24h]
  int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]

  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(this);
  v5 = *(_QWORD *)this;
  if ( IsAxisAlignedRectangle )
  {
    v12 = *(__int64 (__fastcall **)(CShape *, struct ID2D1Geometry **, _QWORD))(v5 + 48);
    *(_OWORD *)v16 = 0LL;
    v13 = v12(this, v16, 0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x16Fu, 0LL);
    }
    else
    {
      v14 = *(_QWORD *)a2;
      v18 = (int)v16[1];
      v15 = *(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v14 + 40);
      v19 = *(__int64 *)((char *)v16 + 4);
      v20 = HIDWORD(v16[1]);
      v21 = (int)v16[0];
      v22 = HIDWORD(v16[1]);
      v17 = _mm_unpacklo_ps((__m128)LODWORD(v16[0]), (__m128)HIDWORD(v16[0])).m128_u64[0];
      v15(a2, v17, 0LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, int *, __int64))(*(_QWORD *)a2 + 48LL))(a2, &v18, 3LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
    }
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **, __int64))(v5 + 24);
    v16[0] = 0LL;
    if ( v6 == CRoundedRectangleShape::GetD2DGeometry )
      D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(this, 0LL, v16, v5);
    else
      D2DGeometry = ((__int64 (__fastcall *)(CShape *, _QWORD, struct ID2D1Geometry **))v6)(this, 0LL, v16);
    v9 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x180u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int64, struct ID2D1GeometrySink *))(*(_QWORD *)v16[0] + 96LL))(
              v16[0],
              0LL,
              v8,
              a2);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x182u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v16);
        return v9;
      }
    }
    if ( v16[0] )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  }
  return v9;
}
