/*
 * XREFs of ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180075370
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::default_delete<CShape>::operator()(__int64 a1, CRectanglesShape *a2)
{
  void *(__fastcall *v3)(CRectanglesShape *__hidden, unsigned int); // rax

  if ( a2 )
  {
    v3 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))a2;
    if ( v3 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(a2);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(a2);
    }
    else
    {
      v3(a2, 1u);
    }
  }
}
