/*
 * XREFs of ?evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z @ 0x1803C3318
 * Callers:
 *     ?evaluate@test_data_dynamic@tip2@@IEAAXXZ @ 0x1803C3454 (-evaluate@test_data_dynamic@tip2@@IEAAXXZ.c)
 * Callees:
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180295840 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?flags_to_test_requirement@stored_flag_requirements@details@tip2@@CAPEAUtest_requirement@3@AEBVtest_state@3@AEAV?$vector_nothrow@Utest_flag@tip2@@@3@AEAPEAU43@PEBU43@_K@Z @ 0x1803C3A14 (-flags_to_test_requirement@stored_flag_requirements@details@tip2@@CAPEAUtest_requirement@3@AEBVt.c)
 */

char __fastcall tip2::details::stored_flag_requirements::evaluate(
        tip2::details::stored_flag_requirements *this,
        const struct tip2::test_state *a2)
{
  const struct tip2::test_state *v4; // rdi
  const struct tip2::test_requirement *v5; // rbx
  const struct tip2::test_requirement *v6; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-438h] BYREF
  _BYTE v9[1024]; // [rsp+40h] [rbp-428h] BYREF
  _QWORD v10[5]; // [rsp+440h] [rbp-28h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v8[0] = v9;
  v4 = (const struct tip2::test_state *)tip2::details::stored_flag_requirements::flags_to_test_requirement(
                                          (_DWORD)a2,
                                          (_DWORD)this,
                                          (unsigned int)v8,
                                          (unsigned int)v10,
                                          *((_QWORD *)this + 2));
  v5 = (const struct tip2::test_requirement *)tip2::details::stored_flag_requirements::flags_to_test_requirement(
                                                (_DWORD)a2,
                                                (int)this + 48,
                                                (unsigned int)v8,
                                                (unsigned int)v10,
                                                *((_QWORD *)this + 8));
  v6 = (const struct tip2::test_requirement *)tip2::details::stored_flag_requirements::flags_to_test_requirement(
                                                (_DWORD)a2,
                                                (int)this + 24,
                                                (unsigned int)v8,
                                                (unsigned int)v10,
                                                *((_QWORD *)this + 5));
  return tip2::details::evaluate_flags(a2, v4, v5, v6);
}
