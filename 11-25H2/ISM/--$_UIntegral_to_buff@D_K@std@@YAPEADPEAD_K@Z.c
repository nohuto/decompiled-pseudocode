/*
 * XREFs of ??$_UIntegral_to_buff@D_K@std@@YAPEADPEAD_K@Z @ 0x1800E8320
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800EB020 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned __int64>(__int64 a1, unsigned __int64 a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  return a1;
}
