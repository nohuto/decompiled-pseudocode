/*
 * XREFs of _TryGetProcessCommandLine_::_1_::dtor$1 @ 0x1806F3B8A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall TryGetProcessCommandLine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_UNICODE_STRING,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>((HLOCAL *)(a2 + 72));
}
