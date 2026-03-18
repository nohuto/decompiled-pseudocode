/*
 * XREFs of ?DvIsolationRulesClearCallerContext@FxRegKey@@SAXXZ @ 0x140099F08
 * Callers:
 *     imp_WdfRegistryCreateKey @ 0x140080E20 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400810E0 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void FxRegKey::DvIsolationRulesClearCallerContext(void)
{
  void (*v0)(void); // rax

  if ( unk_1400C7EE0 )
  {
    v0 = *(void (**)(void))(unk_1400C7EE0 + 16LL);
    if ( v0 )
      v0();
  }
}
