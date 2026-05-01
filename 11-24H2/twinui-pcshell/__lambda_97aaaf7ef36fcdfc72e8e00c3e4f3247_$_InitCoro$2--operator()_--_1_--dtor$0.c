/*
 * XREFs of __lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2::operator()_::_1_::dtor$0 @ 0x1806F4587
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___InitCoro_2::operator()_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 104) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 128LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 104) - 112LL;
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
