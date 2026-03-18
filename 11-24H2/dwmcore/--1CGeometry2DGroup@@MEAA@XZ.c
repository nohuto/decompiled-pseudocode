/*
 * XREFs of ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801EA97C
 * Callers:
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x1801EA930 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x1801EAB74 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CGeometry2DGroup::~CGeometry2DGroup(CGeometry2DGroup *this)
{
  CCyclicResourceListEntry *v2; // rcx

  *(_QWORD *)this = &CGeometry2DGroup::`vftable'{for `CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>'};
  v2 = (CGeometry2DGroup *)((char *)this + 112);
  *(_QWORD *)v2 = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::~CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>(this);
}
