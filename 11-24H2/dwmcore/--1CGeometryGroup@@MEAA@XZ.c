/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x18029BF10
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x180275910 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x1801EAB74 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180294CD0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  CCyclicResourceListEntry *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  v2 = (CGeometryGroup *)((char *)this + 136);
  *((_QWORD *)this + 17) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 22);
  if ( v3 )
    (**v3)(v3, 1LL);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  CGeometry::~CGeometry((struct CResource **)this);
}
