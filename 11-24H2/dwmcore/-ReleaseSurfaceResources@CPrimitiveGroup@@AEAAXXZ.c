/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA074
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1801C9CEC (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x1801C9DB4 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEG.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1801C9E20 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char *i; // rbx
  CCachedVisualImage *v6; // rcx
  void (*v7)(void); // rax

  v3 = 0LL;
  for ( i = (char *)this + 136; (unsigned int)v3 < *((_DWORD *)this + 40); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(CCachedVisualImage **)(*(_QWORD *)i + 8 * v3);
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v6,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    else
      v7();
  }
  *((_DWORD *)i + 6) = 0;
  if ( *(_QWORD *)i != *((_QWORD *)i + 1) )
  {
    operator delete(*(void **)i);
    *(_QWORD *)i = *((_QWORD *)i + 1);
    *((_DWORD *)i + 5) = *((_DWORD *)i + 4);
  }
}
