/*
 * XREFs of sub_180024A88 @ 0x180024A88
 * Callers:
 *     sub_18003CBBC @ 0x18003CBBC (sub_18003CBBC.c)
 *     sub_1800BE3F0 @ 0x1800BE3F0 (sub_1800BE3F0.c)
 *     sub_1800D1BC0 @ 0x1800D1BC0 (sub_1800D1BC0.c)
 *     sub_1800D1E90 @ 0x1800D1E90 (sub_1800D1E90.c)
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180024A88(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
