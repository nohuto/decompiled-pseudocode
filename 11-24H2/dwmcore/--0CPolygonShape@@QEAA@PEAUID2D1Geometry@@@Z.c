/*
 * XREFs of ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801469A0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x180258D00 (-FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68 (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, struct ID2D1Geometry *a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v5 + 2) = 0;
  *v5 = &CPolygonShape::SharedData::`vftable';
  v5[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  *((_QWORD *)this + 2) = v6;
  Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef((char *)this + 16);
  return this;
}
