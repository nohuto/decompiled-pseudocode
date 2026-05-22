/*
 * XREFs of ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18008419C
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800156F0 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18009440C (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F167C (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<tagMANIPULATION_INPUT_INFO const * &>(
        __int64 a1,
        const struct tagMANIPULATION_INPUT_INFO **a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = qword_180246E80;
  v4 = qword_180246E70;
  if ( qword_180246E70 <= (unsigned __int64)(qword_180246E80 + 1) )
  {
    std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameQueue);
    v2 = qword_180246E80;
    v4 = qword_180246E70;
  }
  v5 = v4 - 1;
  qword_180246E78 &= v5;
  v6 = v5 & (qword_180246E78 + v2);
  v7 = qword_180246E68;
  if ( !*(_QWORD *)(qword_180246E68 + 8 * v6) )
  {
    *(_QWORD *)(qword_180246E68 + 8 * v6) = operator new(0x110uLL);
    v7 = qword_180246E68;
  }
  result = PointerInputMediator::PointerFrame::PointerFrame(*(PointerInputMediator::PointerFrame **)(v7 + 8 * v6), *a2);
  ++qword_180246E80;
  return result;
}
