/*
 * XREFs of _TryGetCertSubjectName_::_1_::dtor$2 @ 0x1806224A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall TryGetCertSubjectName_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>((HLOCAL *)(a2 + 136));
}
