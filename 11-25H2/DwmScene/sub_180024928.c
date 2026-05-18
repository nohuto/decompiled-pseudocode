/*
 * XREFs of sub_180024928 @ 0x180024928
 * Callers:
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_1800BE290 @ 0x1800BE290 (sub_1800BE290.c)
 *     sub_1800D1A60 @ 0x1800D1A60 (sub_1800D1A60.c)
 *     sub_1800D1D30 @ 0x1800D1D30 (sub_1800D1D30.c)
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180024928(__int64 a1)
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
