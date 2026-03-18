/*
 * XREFs of ?OnCaptureManipulation@CManipulationManager@@IEAAXPEAVCInteraction@@I_K@Z @ 0x180226C9C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18019112C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        unsigned int a3,
        __int64 a4)
{
  int Key; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct CInteraction *i; // rdx
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v12);
  if ( Key != -1 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * Key);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, a3);
    for ( i = (struct CInteraction *)((v10 - 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64));
          i;
          i = (struct CInteraction *)*((_QWORD *)i + 28) )
    {
      if ( i == a2 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)i + 9) + 192LL))((_QWORD *)i + 9, a3, a4);
        return;
      }
    }
  }
}
