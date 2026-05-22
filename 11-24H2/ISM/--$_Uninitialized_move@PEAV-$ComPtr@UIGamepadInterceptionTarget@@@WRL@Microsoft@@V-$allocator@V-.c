/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180107020
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180106EB0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180106BCC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> *,std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(a3, a3);
  return a3;
}
