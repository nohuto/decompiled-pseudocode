/*
 * XREFs of ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1801B14F0
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::default_delete<CShape>::operator()(__int64 a1, CRectanglesShape *a2)
{
  CRectanglesShape *(__fastcall *v3)(CRectanglesShape *, char, __int64); // rax

  if ( a2 )
  {
    v3 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char, __int64))a2;
    if ( v3 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(a2);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(a2);
    }
    else
    {
      ((void (__fastcall *)(CRectanglesShape *, __int64))v3)(a2, 1LL);
    }
  }
}
