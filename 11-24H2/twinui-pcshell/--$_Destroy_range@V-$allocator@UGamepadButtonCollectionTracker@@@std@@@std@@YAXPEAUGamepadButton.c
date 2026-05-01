/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x180342FEC
 * Callers:
 *     ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x1803446B8 (--$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollection.c)
 *     ??1?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x180347EF8 (--1-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTracker@@@std@.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803480B8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035C7D4 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAXQEAUGamepadButtonCollectionTracker@@_K1@Z @ 0x18035EF68 (-_Change_array@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTr.c)
 *     _std::vector_GamepadButtonCollectionTracker_std::allocator_GamepadButtonCollectionTracker___::_Emplace_reallocate_GamepadButtonCollectionTracker_const_&__::_1_::catch$0 @ 0x1806E1E1C (_std--vector_GamepadButtonCollectionTracker_std--allocator_GamepadButtonCollectionTracker___--_E.c)
 * Callees:
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x180348084 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(
        GamepadButtonCollectionTracker *this,
        GamepadButtonCollectionTracker *a2)
{
  GamepadButtonCollectionTracker *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker(v3);
      v3 = (GamepadButtonCollectionTracker *)((char *)v3 + 64);
    }
    while ( v3 != a2 );
  }
}
