/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___ @ 0x180109700
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_CXvmPowerReferenceManager_________lambda_99dc9de587906d6f38e02b4d1e0ae12d___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i **a4)
{
  __m128i *v5; // r11
  _QWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __m128i v11; // [rsp+0h] [rbp-28h]

  if ( a2 != a3 )
  {
    v5 = *a4;
    v11 = (*a4)[18];
    do
    {
      v6 = *(_QWORD **)a2;
      v7 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) - v11.m128i_i64[0];
      if ( !v7 )
        v7 = v6[3] - v11.m128i_i64[1];
      if ( !v7 )
      {
        v8 = v5[17].m128i_i64[0];
        v9 = *v6 - v8;
        if ( *v6 == v8 )
          v9 = v6[1] - _mm_srli_si128(v5[17], 8).m128i_u64[0];
        if ( !v9 )
          break;
      }
      a2 += 16LL;
    }
    while ( a2 != a3 );
  }
  *a1 = a2;
  return a1;
}
