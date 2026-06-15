/*
 * XREFs of ??$_Construct_in_place@Voperation_guard@wil@@$$V@std@@YAXAEAVoperation_guard@wil@@@Z @ 0x1800D030C
 * Callers:
 *     ??$make_shared@Voperation_guard@wil@@$$V@std@@YA?AV?$shared_ptr@Voperation_guard@wil@@@0@XZ @ 0x1800D0324 (--$make_shared@Voperation_guard@wil@@$$V@std@@YA-AV-$shared_ptr@Voperation_guard@wil@@@0@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<wil::operation_guard,>(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 1LL;
  return result;
}
