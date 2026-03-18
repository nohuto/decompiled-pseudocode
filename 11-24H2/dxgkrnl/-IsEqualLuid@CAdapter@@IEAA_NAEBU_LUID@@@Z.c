/*
 * XREFs of ?IsEqualLuid@CAdapter@@IEAA_NAEBU_LUID@@@Z @ 0x14009A848
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002ED7C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z @ 0x1400362C0 (-ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAdapter::IsEqualLuid(CAdapter *this, const struct _LUID *a2)
{
  return a2->LowPart == *((_DWORD *)this + 6) && a2->HighPart == *((_DWORD *)this + 7);
}
