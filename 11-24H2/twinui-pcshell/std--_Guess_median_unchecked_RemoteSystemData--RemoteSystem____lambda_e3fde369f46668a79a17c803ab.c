/*
 * XREFs of std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645124
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645498 (std--_Partition_by_median_guess_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f4666.c)
 * Callees:
 *     std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645428 (std--_Med3_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 5;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 32 * v6;
    v6 <<= 6;
    v8 = v7 + a1;
    std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
      a1,
      v7 + a1,
      v6 + a1);
    std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
      v4 - v7,
      v4,
      v7 + v4);
    std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
      v3 - v6,
      v3 - v7,
      v3);
    a3 = v3 - v7;
    a2 = v4;
    a1 = v8;
  }
  return std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(a1, a2, a3);
}
