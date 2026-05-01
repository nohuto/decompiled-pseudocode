/*
 * XREFs of std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1F08
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1F80 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 ***a1,
        __int64 ***a2,
        __int64 ***a3)
{
  __int64 **v3; // r10
  __int64 **v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 **v8; // r10
  __int64 *result; // rax
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // r8
  __int64 *v13; // rcx

  v3 = *a2;
  v5 = *a1;
  if ( (__int64)*v5 < (__int64)**a2 )
  {
    *a2 = v5;
    v6 = (__int64 *)a1[1];
    *a1 = v3;
    v7 = (__int64 *)a2[1];
    a2[1] = (__int64 **)v6;
    a1[1] = (__int64 **)v7;
  }
  v8 = *a3;
  result = **a3;
  if ( (__int64)**a2 < (__int64)result )
  {
    *a3 = *a2;
    v10 = (__int64 *)a2[1];
    *a2 = v8;
    v11 = (__int64 *)a3[1];
    a3[1] = (__int64 **)v10;
    a2[1] = (__int64 **)v11;
    v12 = *a2;
    result = **a2;
    if ( (__int64)**a1 < (__int64)result )
    {
      *a2 = *a1;
      result = (__int64 *)a1[1];
      *a1 = v12;
      v13 = (__int64 *)a2[1];
      a2[1] = (__int64 **)result;
      a1[1] = (__int64 **)v13;
    }
  }
  return result;
}
