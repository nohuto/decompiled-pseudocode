/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806732CC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1806730A0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIR.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x180673030 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<IRdpShellExtension> *,std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
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
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(a3, a3);
  return a3;
}
