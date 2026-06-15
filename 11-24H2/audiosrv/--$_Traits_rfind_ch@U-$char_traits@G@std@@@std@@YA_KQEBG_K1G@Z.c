/*
 * XREFs of ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800E2E14
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E3270 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z @ 0x18012D930 (-CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Traits_rfind_ch<std::char_traits<unsigned short>>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _WORD *i; // rax

  if ( !a2 )
    return -1LL;
  v4 = a2 - 1;
  v5 = -1LL;
  if ( v4 != -1 )
    v5 = v4;
  for ( i = &a1[v5]; *i != a4; --i )
  {
    if ( i == a1 )
      return -1LL;
  }
  return i - a1;
}
