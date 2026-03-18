/*
 * XREFs of std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267440
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267898 (std--_Partition_by_median_guess_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff85.c)
 * Callees:
 *     std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x1802676D8 (std--_Med3_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF

  v3 = *a3;
  v5 = *a1;
  v6 = *a3 - *a1;
  v16[0] = *a1;
  v7 = v6 >> 3;
  if ( v7 <= 40 )
  {
    v17 = v3;
    v14 = *a2;
  }
  else
  {
    v10 = (v7 + 1) >> 3;
    v11 = 16 * v10;
    v12 = 8 * v10;
    v17 = 16 * v10 + v5;
    v18 = 8 * v10 + v5;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
      v16,
      &v18,
      &v17);
    v18 = *a2;
    v16[0] = v18 - v12;
    v17 = v18 + v12;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
      v16,
      &v18,
      &v17);
    v17 = *a3;
    v16[0] = v17 - v11;
    v18 = v17 - v12;
    std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
      v16,
      &v18,
      &v17);
    v13 = v12 + *a1;
    v17 = *a3 - v12;
    v14 = *a2;
    v16[0] = v13;
  }
  v18 = v14;
  return std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
           v16,
           &v18,
           &v17);
}
