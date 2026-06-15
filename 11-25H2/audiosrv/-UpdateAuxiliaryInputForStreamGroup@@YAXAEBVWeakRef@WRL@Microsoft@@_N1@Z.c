/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800C0C20
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_::_Do_call @ 0x1800C11F0 (std--_Func_impl_no_alloc__lambda_6df2cf51e0961803ba69b59cc0e43997__void_--_Do_call.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x1800F3AF0 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Do_call @ 0x1800F3E50 (std--_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_--_Do_call.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateAuxiliaryInputForStreamGroup(const struct Microsoft::WRL::WeakRef *a1, bool a2, bool a3)
{
  CAudioResourceManager *v4; // rcx

  v4 = 0LL;
  if ( g_AudioResourceManager )
    v4 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(v4, a1, a2, a3);
}
