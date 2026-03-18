/*
 * XREFs of ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x18025519C
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180114778 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C3264 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vli.c)
 */

char *__fastcall detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        __int64 a1,
        _QWORD *a2)
{
  char *result; // rax

  result = detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::reserve_region(
             (const void **)a1,
             (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  *(_QWORD *)result = *a2;
  return result;
}
