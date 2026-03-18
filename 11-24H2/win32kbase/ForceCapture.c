/*
 * XREFs of ForceCapture @ 0x1402126F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x14021CD28 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 */

void __fastcall ForceCapture(__int64 a1, struct tagINPUTDEST *a2)
{
  unsigned int v3; // ebx
  CMouseProcessor *MouseProcessor; // rax

  v3 = a1;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor && (a2 || v3 == 3) )
    CMouseProcessor::ForceMouseOwner(MouseProcessor, a2, v3);
}
