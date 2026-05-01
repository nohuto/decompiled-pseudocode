/*
 * XREFs of std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B72B8
 * Callers:
 *     std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B7174 (std--_Guess_median_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662a.c)
 * Callees:
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x18029101C (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 */

char __fastcall std::_Med3_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  FILETIME v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  FILETIME v9; // rcx
  __int64 v10; // rcx

  if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()((FILETIME)a1, a2, a1) )
  {
    v7 = *a2;
    *a2 = *a1;
    *a1 = v7;
  }
  LOBYTE(v8) = lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v6, a3, a2);
  if ( (_BYTE)v8 )
  {
    v9 = (FILETIME)*a3;
    *a3 = *a2;
    *a2 = (__int64)v9;
    LOBYTE(v8) = lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v9, a2, a1);
    if ( (_BYTE)v8 )
    {
      v8 = *a1;
      v10 = *a2;
      *a2 = *a1;
      *a1 = v10;
    }
  }
  return v8;
}
