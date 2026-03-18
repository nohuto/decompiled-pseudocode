/*
 * XREFs of ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x180246208
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18025D134 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180246254 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void CProcessAttributionReporter::Initialize(void)
{
  CProcessAttributionReporter *v0; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (CProcessAttributionReporter *)MIDL_user_allocate(0x80uLL);
  if ( !v0 )
  {
    qword_1803FAF38 = 0LL;
LABEL_5:
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  qword_1803FAF38 = CProcessAttributionReporter::CProcessAttributionReporter(v0);
  if ( !qword_1803FAF38 )
    goto LABEL_5;
}
