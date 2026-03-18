/*
 * XREFs of ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x1801F7FD4
 * Callers:
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801F7DDC (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x1801F7E6C (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801F7F3C (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1802A5CD0 (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x1802B18C0 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCyclicResourceListEntry::~CCyclicResourceListEntry(CCyclicResourceListEntry *this)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v1 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v2 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
}
