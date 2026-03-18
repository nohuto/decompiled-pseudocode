/*
 * XREFs of ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x180249930
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x18024997C (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void CProcessAttributionReporter::Initialize(void)
{
  CProcessAttributionReporter *v0; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (CProcessAttributionReporter *)MIDL_user_allocate(0x80uLL);
  if ( !v0 )
  {
    qword_180407010 = 0LL;
LABEL_5:
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  qword_180407010 = CProcessAttributionReporter::CProcessAttributionReporter(v0);
  if ( !qword_180407010 )
    goto LABEL_5;
}
