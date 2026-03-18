/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18012F844
 * Callers:
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x18012F584 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEG.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18012F5F0 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18013001C (--1CPrimitiveGroup@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 v1; // rdi
  char *i; // rbx
  CResource *v4; // rcx
  void (*v5)(void); // rax

  v1 = 0LL;
  for ( i = (char *)this + 136; (unsigned int)v1 < *((_DWORD *)this + 40); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(CResource **)(*(_QWORD *)i + 8 * v1);
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
    else
      v5();
  }
  *((_DWORD *)i + 6) = 0;
  if ( *(_QWORD *)i != *((_QWORD *)i + 1) )
  {
    operator delete(*(void **)i);
    *(_QWORD *)i = *((_QWORD *)i + 1);
    *((_DWORD *)i + 5) = *((_DWORD *)i + 4);
  }
}
