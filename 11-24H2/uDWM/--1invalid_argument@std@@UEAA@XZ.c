/*
 * XREFs of ??1invalid_argument@std@@UEAA@XZ @ 0x18009AD28
 * Callers:
 *     _std::_Throw_bad_array_new_length_::_1_::dtor$0 @ 0x1800F7843 (_std--_Throw_bad_array_new_length_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
}
