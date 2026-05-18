/*
 * XREFs of ??0_Stl_critical_section@@QEAA@XZ @ 0x180010F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_Stl_critical_section *__fastcall _Stl_critical_section::_Stl_critical_section(_Stl_critical_section *this)
{
  _Stl_critical_section *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
