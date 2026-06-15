/*
 * XREFs of ??$?4U?$default_delete@VCDriverListener@@@std@@$0A@@?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003C9D4
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x18003DE20 (--R-$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CDriverListener>::operator=<std::default_delete<CDriverListener>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CDriverListener>::operator()();
  return a1;
}
