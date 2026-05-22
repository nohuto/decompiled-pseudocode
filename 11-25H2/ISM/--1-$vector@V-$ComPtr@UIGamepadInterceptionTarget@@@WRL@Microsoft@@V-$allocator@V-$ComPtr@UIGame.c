/*
 * XREFs of ??1?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180105D24
 * Callers:
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$11 @ 0x1801CB620 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$11.c)
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$2 @ 0x1801CF606 (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180104DCC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::~vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
      (__int64 *)v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
