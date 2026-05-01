/*
 * XREFs of ??1?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x180347EF8
 * Callers:
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$8 @ 0x1806E2171 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x180342FEC (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 */

void __fastcall std::vector<GamepadButtonCollectionTracker>::~vector<GamepadButtonCollectionTracker>(__int64 a1)
{
  GamepadButtonCollectionTracker *v2; // rcx

  v2 = *(GamepadButtonCollectionTracker **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(
      v2,
      *(GamepadButtonCollectionTracker **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
