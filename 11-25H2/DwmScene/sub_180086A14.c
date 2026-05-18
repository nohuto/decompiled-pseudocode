/*
 * XREFs of sub_180086A14 @ 0x180086A14
 * Callers:
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 * Callees:
 *     sub_180085908 @ 0x180085908 (sub_180085908.c)
 */

__int64 __fastcall sub_180086A14(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a1 + 136) != 8LL )
  {
    v3[1] = a1;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_e4386f35b8603616d8ddd0087d6df351_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[7] = v3;
    return sub_180085908(a1, a2, (__int64)v3);
  }
  return result;
}
