/*
 * XREFs of ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001D87C
 * Callers:
 *     PsmHostStateNotification2 @ 0x18001CCC0 (PsmHostStateNotification2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(
        void **a1)
{
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}
