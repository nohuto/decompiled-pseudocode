/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$2 @ 0x18016AB7C
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32), (const struct std::nothrow_t *)0x50);
}
