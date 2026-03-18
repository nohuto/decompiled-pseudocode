/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x1801EFF04
 * Callers:
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x1801EFEA8 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int64 v1; // r8
  __int128 v2; // xmm0
  void (*v3)(void); // rax

  v1 = (unsigned int)(*((_DWORD *)this + 8) - 1);
  v2 = *(_OWORD *)(*((_QWORD *)this + 1) + 16 * v1);
  *((_DWORD *)this + 8) = v1;
  if ( (_QWORD)v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        (CCachedVisualImage *)v2,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        v1);
    else
      v3();
  }
  return 0LL;
}
