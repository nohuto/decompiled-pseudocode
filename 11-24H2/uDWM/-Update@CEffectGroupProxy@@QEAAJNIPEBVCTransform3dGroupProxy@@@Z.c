/*
 * XREFs of ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18004916C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800484B0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180049010 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5868 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5BFC (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectGroupProxy::Update(
        CEffectGroupProxy *this,
        double a2,
        __int64 a3,
        const struct CTransform3dGroupProxy *a4)
{
  int v4; // eax

  v4 = 0;
  if ( a4 )
    v4 = *(_DWORD *)(*((_QWORD *)a4 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 488LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *((_QWORD *)this + 2),
           0LL,
           v4);
}
