/*
 * XREFs of PopSubscribeHibernatePolicyWnf @ 0x140746D3C
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSubscribeHibernatePolicyWnf()
{
  __int64 result; // rax

  if ( (int)ExSubscribeWnfStateChange(
              (unsigned int)&PopHibernatePolicyWnfSubscription,
              (unsigned int)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  result = ExSubscribeWnfStateChange(
             (unsigned int)&PopHibernateRevocationCheckWnfSubscription,
             (unsigned int)&WNF_BOOT_BOOT_STL_ENFORCED,
             1,
             0,
             (__int64)PopWnfHibernateRevocationCheckCallback,
             0LL);
  if ( (int)result < 0 )
    PopHibernateRevocationCheckWnfSubscription = 0LL;
  return result;
}
