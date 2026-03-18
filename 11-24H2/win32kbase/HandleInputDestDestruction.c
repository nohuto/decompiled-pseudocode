/*
 * XREFs of HandleInputDestDestruction @ 0x140060EC8
 * Callers:
 *     HandleFullWindowDestruction @ 0x140060E30 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x140212900 (HandleBaseWindowDestruction.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x140127350 (-Clear@MouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall HandleInputDestDestruction(__int64 a1)
{
  __int64 MouseProcessor; // rax
  CMouseProcessor::MouseOwner *v3; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(HMPheFromObject(*(int **)(a1 + 80)) + 25) & 1) == 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v4);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v3 = (CMouseProcessor::MouseOwner *)(MouseProcessor + 3784);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3784, a1) )
        CMouseProcessor::MouseOwner::Clear(v3);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
  }
}
