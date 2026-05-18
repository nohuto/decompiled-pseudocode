/*
 * XREFs of sub_180086BB4 @ 0x180086BB4
 * Callers:
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_180085204 @ 0x180085204 (sub_180085204.c)
 * Callees:
 *     sub_180085A68 @ 0x180085A68 (sub_180085A68.c)
 */

__int64 __fastcall sub_180086BB4(__int64 a1, __int64 a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = &std::_Func_impl_no_alloc<_lambda_b8abe43d8a0b55a507686fbec5567b70_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
  v3[7] = v3;
  return sub_180085A68(a1, a2, (__int64)v3);
}
