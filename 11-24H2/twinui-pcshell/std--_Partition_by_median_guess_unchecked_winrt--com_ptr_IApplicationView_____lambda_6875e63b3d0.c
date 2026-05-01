/*
 * XREFs of std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B7338
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x18028F210 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     _lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator() @ 0x18029101C (_lambda_6875e63b3d0ecbbc887d662ab41e20e0_--operator().c)
 *     std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x1805B7174 (std--_Guess_median_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662a.c)
 */

__int64 **__fastcall std::_Partition_by_median_guess_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // rbx
  FILETIME v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 *v10; // rsi
  FILETIME *v11; // r14
  bool v12; // zf
  __int64 *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 **result; // rax

  v6 = (__int64 *)(a2 + 8 * ((__int64)((__int64)a3 - a2) >> 4));
  std::_Guess_median_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
    a2,
    (__int64)v6,
    (__int64)(a3 - 1));
  v8 = v6 + 1;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v9 = v6 - 1;
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6 - 1, v6) )
        break;
      if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v6 - 1) )
        break;
      --v6;
    }
    while ( a2 < (unsigned __int64)v9 );
  }
  while ( v8 < a3
       && !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v8, v6)
       && !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v8) )
    ++v8;
  v10 = v8;
  v11 = (FILETIME *)v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 < a3 )
      {
        if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v10) )
          goto LABEL_35;
        if ( !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v10, v6) )
        {
          if ( v8 != v10 )
          {
            v7 = (FILETIME)*v8;
            *v8 = *v10;
            *v10 = (__int64)v7;
          }
          ++v8;
          goto LABEL_35;
        }
      }
      v12 = v11 == (FILETIME *)a2;
      if ( (unsigned __int64)v11 > a2 )
      {
        v13 = (__int64 *)&v11[-1];
        do
        {
          if ( !lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v13, v6) )
          {
            if ( lambda_6875e63b3d0ecbbc887d662ab41e20e0_::operator()(v7, v6, v13) )
              break;
            if ( --v6 != v13 )
            {
              v7 = (FILETIME)*v6;
              *v6 = *v13;
              *v13 = (__int64)v7;
            }
          }
          --v11;
          --v13;
        }
        while ( a2 < (unsigned __int64)v11 );
        v12 = v11 == (FILETIME *)a2;
      }
      if ( v12 )
        break;
      --v11;
      if ( v10 != a3 )
      {
        v7 = (FILETIME)*v10;
        *v10 = (__int64)*v11;
        *v11 = v7;
        goto LABEL_35;
      }
      if ( v11 != (FILETIME *)--v6 )
      {
        v15 = (__int64)*v11;
        *v11 = (FILETIME)*v6;
        *v6 = v15;
      }
      v7 = (FILETIME)*v6;
      *v6 = *--v8;
      *v8 = (__int64)v7;
    }
    if ( v10 == a3 )
      break;
    if ( v8 != v10 )
    {
      v14 = *v6;
      *v6 = *v8;
      *v8 = v14;
    }
    v7 = (FILETIME)*v6;
    ++v8;
    *v6++ = *v10;
    *v10 = (__int64)v7;
LABEL_35:
    ++v10;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
