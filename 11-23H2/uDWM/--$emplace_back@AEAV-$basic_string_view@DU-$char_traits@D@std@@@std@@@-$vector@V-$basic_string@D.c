/*
 * XREFs of ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA?A_TAEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF9DC
 * Callers:
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F2F5C (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800F2734 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<std::string>::emplace_back<std::string_view &>(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  v2 = (_QWORD *)a1[1];
  if ( v2 == (_QWORD *)a1[2] )
    return std::vector<std::string>::_Emplace_reallocate<std::string_view &>(a1, a1[1]);
  *v2 = 0LL;
  v2[2] = 0LL;
  v2[3] = 15LL;
  std::string::assign(v2);
  result = (_QWORD *)a1[1];
  a1[1] = (__int64)(result + 4);
  return result;
}
