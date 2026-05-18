/*
 * XREFs of sub_1800D3484 @ 0x1800D3484
 * Callers:
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800E28EC @ 0x1800E28EC (sub_1800E28EC.c)
 *     sub_1800E2959 @ 0x1800E2959 (sub_1800E2959.c)
 *     sub_1800E2A34 @ 0x1800E2A34 (sub_1800E2A34.c)
 *     sub_1800E2AA4 @ 0x1800E2AA4 (sub_1800E2AA4.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D3484(__int64 a1, __int64 a2)
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
