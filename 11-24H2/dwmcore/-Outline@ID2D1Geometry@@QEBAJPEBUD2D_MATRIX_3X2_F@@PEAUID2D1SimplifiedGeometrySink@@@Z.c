/*
 * XREFs of ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180180A5C
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801ABA00 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ID2D1Geometry::Outline(
        ID2D1Geometry *this,
        const struct D2D_MATRIX_3X2_F *a2,
        struct ID2D1SimplifiedGeometrySink *a3)
{
  return (*(__int64 (__fastcall **)(ID2D1Geometry *, _QWORD, struct ID2D1SimplifiedGeometrySink *, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)this + 96LL))(
           this,
           0LL,
           a3,
           a3);
}
