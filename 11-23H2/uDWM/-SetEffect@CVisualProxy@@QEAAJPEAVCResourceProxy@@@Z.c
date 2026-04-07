/*
 * XREFs of ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180019F78
 * Callers:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180019E50 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800A65E0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A81D8 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9AD8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetEffect(CVisualProxy *this, struct CResourceProxy *a2)
{
  __int64 v2; // r9
  __int64 *v3; // rcx
  __int64 v4; // rax

  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 **)(v2 + 16);
  v4 = *v3;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 336))(
             v3,
             *(unsigned int *)(v2 + 24),
             *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
  else
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 336))(v3, *(unsigned int *)(v2 + 24), 0LL);
}
