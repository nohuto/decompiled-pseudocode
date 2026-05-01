/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803151E8
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180314FA4 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x180315264 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 * Callees:
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802DB588 (--0exception@std@@QEAA@QEBD@Z.c)
 */

std::exception *__fastcall std::runtime_error::runtime_error(std::exception *a1, const char *a2)
{
  if ( *((_QWORD *)a2 + 3) > 0xFuLL )
    a2 = *(const char **)a2;
  std::exception::exception(a1, a2);
  *(_QWORD *)a1 = &std::logic_error::`vftable';
  return a1;
}
