/*
 * XREFs of ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180055FA8
 * Callers:
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180055E2C (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800E6AB0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::_Traits_rfind<std::char_traits<unsigned short>>(
        _WORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // r10
  __int64 v8; // rdx
  __int64 v9; // rax
  _WORD *i; // rcx

  v5 = -1LL;
  if ( a5 )
  {
    if ( a5 > a2 )
    {
      return v5;
    }
    else
    {
      v8 = a2 - a5;
      v9 = -1LL;
      if ( v8 != -1 )
        v9 = v8;
      for ( i = &a1[v9]; *i != 58 || (unsigned int)std::_WChar_traits<unsigned short>::compare(i, L":"); --i )
      {
        if ( i == a1 )
          return v5;
      }
      return i - a1;
    }
  }
  else
  {
    if ( a2 == -1LL )
      return -1LL;
    return a2;
  }
}
