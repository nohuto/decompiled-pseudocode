/*
 * XREFs of ?swap@?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@QEAAXAEAV12@@Z @ 0x180293560
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>::swap(
        int *a1,
        _DWORD *a2)
{
  int v2; // xmm0_4
  __int64 result; // rax

  v2 = *a1;
  result = (unsigned int)*a2;
  *a1 = result;
  *a2 = v2;
  return result;
}
