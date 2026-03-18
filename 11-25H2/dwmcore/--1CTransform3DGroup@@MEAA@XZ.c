/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x1802B18C0
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180280990 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1801F7EC0 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x1801F7FD4 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  CCyclicResourceListEntry *v1; // rbx

  v1 = (CTransform3DGroup *)((char *)this + 184);
  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>'};
  *((_QWORD *)this + 23) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((void **)this + 26);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v1);
  CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>((struct CResource ***)this);
}
