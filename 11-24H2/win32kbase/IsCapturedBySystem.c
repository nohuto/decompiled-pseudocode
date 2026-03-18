/*
 * XREFs of IsCapturedBySystem @ 0x1401559D0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400613F4 (-IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

bool __fastcall IsCapturedBySystem(struct tagINPUTDEST *a1)
{
  CMouseProcessor *MouseProcessor; // rax
  char v3; // bl

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)a1);
  v3 = 0;
  if ( MouseProcessor )
    return CMouseProcessor::IsMouseOwner(MouseProcessor, a1) != 0;
  return v3;
}
