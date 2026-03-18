/*
 * XREFs of DpiFdoCleanupDisplayDiagnostics @ 0x14007D588
 * Callers:
 *     DpiFdoInitializeDisplayDiagnostics @ 0x14007D718 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupDisplayDiagnostics(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5752);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5736));
    *(_OWORD *)(a1 + 5728) = 0LL;
    *(_OWORD *)(a1 + 5744) = 0LL;
    *(_OWORD *)(a1 + 5760) = 0LL;
  }
  return result;
}
