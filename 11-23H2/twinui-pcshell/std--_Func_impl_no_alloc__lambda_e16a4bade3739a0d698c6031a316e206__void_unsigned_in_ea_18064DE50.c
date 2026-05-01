/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e16a4bade3739a0d698c6031a316e206__void_unsigned_int_winrt::Windows::Foundation::Point_const_&_::_Do_call @ 0x18064DE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_e16a4bade3739a0d698c6031a316e206__void_unsigned_int_winrt::Windows::Foundation::Point_const___::_Do_call(
        __int64 a1,
        unsigned int *a2,
        float *a3)
{
  __int64 v4; // [rsp+8h] [rbp+8h]

  LODWORD(v4) = (int)*a3;
  HIDWORD(v4) = (int)a3[1];
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 72LL) + 24LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
           *a2,
           v4);
}
