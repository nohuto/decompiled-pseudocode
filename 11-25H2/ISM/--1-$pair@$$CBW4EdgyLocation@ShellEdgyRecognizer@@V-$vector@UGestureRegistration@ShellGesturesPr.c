/*
 * XREFs of ??1?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@QEAA@XZ @ 0x18007FF48
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$26 @ 0x1801D0600 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$26.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>::~pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>(
        __int64 a1)
{
  std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy(a1 + 8);
}
