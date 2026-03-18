/*
 * XREFs of ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x180225540
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180225590 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CInteraction::ResetDefaultStateForAllInteractions(__int64 a1, bool a2)
{
  int v2; // ebx
  __int64 v3; // rdi

  v2 = 0;
  if ( dword_180406960 > 0 )
  {
    v3 = 0LL;
    do
    {
      CInteraction::ResetDefaultInteractionForCurrentMC(
        *(CInteraction **)((char *)CInteraction::s_DefaultStateLockedInteractions + v3),
        a2);
      ++v2;
      v3 += 8LL;
    }
    while ( v2 < dword_180406960 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll(&CInteraction::s_DefaultStateLockedInteractions);
}
