/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x18008EF84
 * Callers:
 *     ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x1800836F0 (-Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18008EED4 (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801A4B90 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801B24D4 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x1801D90B1 (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x18008EFA4 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemButtonProcessor>::operator()();
  return result;
}
