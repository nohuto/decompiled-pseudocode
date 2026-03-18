/*
 * XREFs of IsNonImmersiveBand @ 0x140148FEC
 * Callers:
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x140148B98 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F98 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD010 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
