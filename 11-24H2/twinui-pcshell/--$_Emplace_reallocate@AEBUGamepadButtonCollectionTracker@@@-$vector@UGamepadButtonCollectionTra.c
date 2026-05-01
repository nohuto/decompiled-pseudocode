/*
 * XREFs of ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x180343348
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18035559C (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x180357030 (-OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180296948 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x1803446B8 (--$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollection.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x180347378 (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ?_Change_array@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAXQEAUGamepadButtonCollectionTracker@@_K1@Z @ 0x18035EF68 (-_Change_array@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTr.c)
 */

char *__fastcall std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
        __int64 *a1,
        __int64 a2,
        const struct GamepadButtonCollectionTracker *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  GamepadButtonCollectionTracker *v12; // rax
  GamepadButtonCollectionTracker *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  GamepadButtonCollectionTracker *v16; // r8
  __int64 v17; // rcx
  char *result; // rax
  __int64 v19; // rcx
  GamepadButtonCollectionTracker *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  GamepadButtonCollectionTracker *v22; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  v7 = 0x3FFFFFFFFFFFFFFLL;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v7);
  v12 = (GamepadButtonCollectionTracker *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = (char *)v12 + (v5 & 0xFFFFFFFFFFFFFFC0uLL);
  try
  {
    GamepadButtonCollectionTracker::GamepadButtonCollectionTracker((GamepadButtonCollectionTracker *)v14, a3);
    v22 = (GamepadButtonCollectionTracker *)v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<GamepadButtonCollectionTracker *>(v17, a2, v13);
      v22 = v13;
      v16 = (GamepadButtonCollectionTracker *)(v14 + 64);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<GamepadButtonCollectionTracker *>(v17, v15, v16);
    std::vector<GamepadButtonCollectionTracker>::_Change_array(a1, v13, v8, v7, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(
      v22,
      (GamepadButtonCollectionTracker *)(v14 + 64));
    std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(v19, v21, v7);
    throw;
  }
  return result;
}
