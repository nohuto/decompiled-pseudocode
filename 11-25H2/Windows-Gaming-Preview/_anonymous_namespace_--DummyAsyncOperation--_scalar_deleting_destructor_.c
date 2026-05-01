/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_ @ 0x180011BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation @ 0x18001175C (_anonymous_namespace_--DummyAsyncOperation--_DummyAsyncOperation.c)
 */

void *__fastcall anonymous_namespace_::DummyAsyncOperation::_scalar_deleting_destructor_(void *a1, char a2)
{
  anonymous_namespace_::DummyAsyncOperation::_DummyAsyncOperation((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
