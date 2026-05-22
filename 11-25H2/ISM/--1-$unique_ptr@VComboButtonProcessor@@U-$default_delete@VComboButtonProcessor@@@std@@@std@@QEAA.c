/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008E904
 * Callers:
 *     ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x1800836D0 (-Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18008E854 (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18019D5A0 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801AAF44 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x1801D1615 (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x18008E924 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemButtonProcessor>::operator()();
  return result;
}
