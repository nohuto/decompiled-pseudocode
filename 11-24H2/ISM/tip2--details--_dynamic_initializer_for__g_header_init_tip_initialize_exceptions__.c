/*
 * XREFs of tip2::details::_dynamic_initializer_for__g_header_init_tip_initialize_exceptions__ @ 0x18000A580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *tip2::details::_dynamic_initializer_for__g_header_init_tip_initialize_exceptions__()
{
  void *result; // rax

  result = &tip2::details::test_interface_with_exception_guard;
  tip2::details::g_test_interface_exception_guard = (__int64)&tip2::details::test_interface_with_exception_guard;
  return result;
}
