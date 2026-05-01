/*
 * XREFs of ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x1802958EC
 * Callers:
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180295840 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 * Callees:
 *     ??$find_flag@G@test_state@tip2@@QEBAPEAUtest_flag@1@G@Z @ 0x18029592C (--$find_flag@G@test_state@tip2@@QEBAPEAUtest_flag@1@G@Z.c)
 */

const struct tip2::test_requirement *__fastcall tip2::details::find_flags_match(
        tip2::details *this,
        const struct tip2::test_state *a2,
        const struct tip2::test_requirement *a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  char v7; // r11

  while ( 1 )
  {
    v4 = tip2::test_state::find_flag<unsigned short>(this, *(unsigned __int16 *)a2);
    if ( (v4 != 0) == v7 )
      break;
    a2 = (const struct tip2::test_state *)(v5 + 16);
    if ( !*(_QWORD *)(v6 + 24) )
      return 0LL;
  }
  return (const struct tip2::test_requirement *)v5;
}
