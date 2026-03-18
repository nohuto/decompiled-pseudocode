/*
 * XREFs of ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1C0169080
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C00CA5F4 (DCompositionForceRender.c)
 */

__int64 __fastcall DxgkEngSetHwProtectionTeardownRecovery(struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY *a1)
{
  return DCompositionForceRender(0LL, 1, !a1->Recovered, 0);
}
