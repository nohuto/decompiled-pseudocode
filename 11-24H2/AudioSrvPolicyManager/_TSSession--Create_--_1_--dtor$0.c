/*
 * XREFs of _TSSession::Create_::_1_::dtor$0 @ 0x18004B394
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall TSSession::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)&std::nothrow);
}
