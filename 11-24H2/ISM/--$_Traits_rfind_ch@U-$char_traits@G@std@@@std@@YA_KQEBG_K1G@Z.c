/*
 * XREFs of ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800A6C6C
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x180080D3C (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_rfind_ch<std::char_traits<unsigned short>>(_WORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _WORD *i; // rax

  if ( !a2 )
    return -1LL;
  v2 = a2 - 1;
  v3 = -1LL;
  if ( v2 != -1 )
    v3 = v2;
  for ( i = &a1[v3]; *i != 46; --i )
  {
    if ( i == a1 )
      return -1LL;
  }
  return i - a1;
}
