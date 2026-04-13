/*
 * XREFs of ??0locale@std@@QEAA@AEBV01@@Z @ 0x18004B404
 * Callers:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

std::locale *__fastcall std::locale::locale(std::locale *this, const struct std::locale *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
