/*
 * XREFs of ?Thunk_UpdateHoverPointer_141@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180256F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateHoverPointer_141(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx

  v2 = a2[1];
  v3 = **a2;
  if ( *(float *)(v3 + 88) != *(float *)v2 || *(float *)(v3 + 92) != *((float *)v2 + 1) )
    *(_QWORD *)(v3 + 88) = *v2;
  CResource::InvalidateAnimationSources((CResource *)(v3 + 8), 0);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
  return 0LL;
}
