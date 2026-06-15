/*
 * XREFs of ??0bad_cast@std@@QEAA@XZ @ 0x18013B62C
 * Callers:
 *     ?_Throw_bad_cast@std@@YAXXZ @ 0x1801406EC (-_Throw_bad_cast@std@@YAXXZ.c)
 * Callees:
 *     <none>
 */

std::bad_cast *__fastcall std::bad_cast::bad_cast(std::bad_cast *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad cast";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
