/*
 * XREFs of ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180108018
 * Callers:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180055FB0 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EC74 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3F1C (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 */

bool __fastcall GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(GamepadInterceptionHelper *this, int a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (__int64 *)((char *)this + 72);
  v3 = *v2;
  return v3 != *std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
                  v2,
                  (__int64)&v5,
                  &v6);
}
