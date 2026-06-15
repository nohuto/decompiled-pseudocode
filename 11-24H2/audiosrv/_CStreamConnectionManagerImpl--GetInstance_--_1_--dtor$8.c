/*
 * XREFs of _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$8 @ 0x180170EBA
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CStreamConnectionManagerImpl::GetInstance_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 120), (const struct std::nothrow_t *)0x20);
}
