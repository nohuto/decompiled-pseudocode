/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x1801FC43C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x1801FC3E0 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0
  void (*v2)(void); // rax

  v1 = *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * (unsigned int)--*((_DWORD *)this + 8));
  if ( (_QWORD)v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v1);
    else
      v2();
  }
  return 0LL;
}
