/*
 * XREFs of ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x1802C9E90
 * Callers:
 *     ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z @ 0x1802CADC0 (-SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z.c)
 *     ?SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z @ 0x1802CB880 (-SetDisplayId@CConversionSwapChain@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::SetDisplayId(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 88) != a2 )
  {
    *(_DWORD *)(a1 + 88) = a2;
    v2 = *(_QWORD *)(a1 + 272);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 152LL))(v2 + 16);
  }
  return result;
}
