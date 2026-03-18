/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D2A30
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01C65A8 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E3E18 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01C3FBC (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget **v6; // rdi
  struct tagCPointerRoutedAwayTarget **i; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
    for ( i = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 35);
          i != v6;
          i = (struct tagCPointerRoutedAwayTarget **)*i )
    {
      if ( CInputDest::operator==((int *)i + 4, (__int64)a3) )
      {
        CTouchProcessor::FreeRoutedAwayTarget(a1, (struct tagCPointerRoutedAwayTarget ***)i);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
