/*
 * XREFs of ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800BF968
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800A65E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A81D8 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8558 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
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
                                                                        + 736LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *((_QWORD *)this + 2),
           0LL,
           v4);
}
