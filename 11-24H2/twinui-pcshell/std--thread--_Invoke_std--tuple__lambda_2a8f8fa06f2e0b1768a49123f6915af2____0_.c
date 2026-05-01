/*
 * XREFs of std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1802CE500
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x18004CBE8 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x1802CD674 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--__lambda_2a8f8fa06f2e0b1768a49123f6915af2_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_(void *a1)
{
  lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()((__int64)a1);
  _Cnd_do_broadcast_at_thread_exit();
  if ( a1 )
  {
    lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_((__int64)a1);
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  }
  return 0LL;
}
