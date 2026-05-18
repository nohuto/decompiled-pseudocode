/*
 * XREFs of sub_1800D3364 @ 0x1800D3364
 * Callers:
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 *     sub_1800E29E9 @ 0x1800E29E9 (sub_1800E29E9.c)
 *     sub_1800E2A74 @ 0x1800E2A74 (sub_1800E2A74.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D3364(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v3 + 16LL))(v3, a2, a3, v5);
}
