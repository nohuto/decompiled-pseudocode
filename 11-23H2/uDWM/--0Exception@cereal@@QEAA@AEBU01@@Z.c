/*
 * XREFs of ??0Exception@cereal@@QEAA@AEBU01@@Z @ 0x1800F088C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

cereal::Exception *__fastcall cereal::Exception::Exception(cereal::Exception *this, const struct cereal::Exception *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &cereal::Exception::`vftable';
  return this;
}
