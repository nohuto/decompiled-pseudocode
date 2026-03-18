/*
 * XREFs of ?SetDisplayId@CLegacyStereoSwapChain@@UEAAXVDisplayId@@@Z @ 0x1802D4030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z @ 0x1802D3110 (-SetDisplayId@CLegacySwapChain@@UEAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::SetDisplayId(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 88) != a2 )
  {
    v4 = *(_QWORD *)(a1 + 488);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 152LL))(v4 + 16);
    return CLegacySwapChain::SetDisplayId(a1, a2);
  }
  return result;
}
