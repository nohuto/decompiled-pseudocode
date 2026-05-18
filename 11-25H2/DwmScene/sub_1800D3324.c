/*
 * XREFs of sub_1800D3324 @ 0x1800D3324
 * Callers:
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 *     sub_1800E27F9 @ 0x1800E27F9 (sub_1800E27F9.c)
 *     sub_1800E28D4 @ 0x1800E28D4 (sub_1800E28D4.c)
 *     sub_1800E2944 @ 0x1800E2944 (sub_1800E2944.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D3324(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v2 + 16LL))(v2, a2, v4);
}
