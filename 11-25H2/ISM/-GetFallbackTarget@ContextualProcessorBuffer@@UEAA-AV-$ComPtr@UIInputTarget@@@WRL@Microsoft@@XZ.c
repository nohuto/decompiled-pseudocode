/*
 * XREFs of ?GetFallbackTarget@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x18019B950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall ContextualProcessorBuffer::GetFallbackTarget(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 16LL);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
