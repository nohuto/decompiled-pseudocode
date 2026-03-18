/*
 * XREFs of DpiFdoCleanupMipiDsi @ 0x14007CEA0
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x140061900 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoResetFdo @ 0x14023E5C8 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5624);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5608));
    result = 0LL;
    *(_OWORD *)(a1 + 5600) = 0LL;
    *(_OWORD *)(a1 + 5616) = 0LL;
    *(_OWORD *)(a1 + 5632) = 0LL;
    *(_QWORD *)(a1 + 5648) = 0LL;
  }
  return result;
}
