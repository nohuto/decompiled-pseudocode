/*
 * XREFs of ??1exception@stdext@@UEAA@XZ @ 0x180058570
 * Callers:
 *     _std::_Throw_bad_array_new_length_::_1_::dtor$0 @ 0x1800B87CF (_std--_Throw_bad_array_new_length_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall stdext::exception::~exception(stdext::exception *this)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
}
