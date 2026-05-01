/*
 * XREFs of std::unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______::_unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______ @ 0x1802CD4AC
 * Callers:
 *     _std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2____::_1_::dtor$0 @ 0x1806DD8D0 (_std--thread--_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2____--_1_--dtor$0.c)
 * Callees:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x1802CD674 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--__lambda_2a8f8fa06f2e0b1768a49123f6915af2_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______::_unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______(
        _QWORD *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x28);
  }
}
