/*
 * XREFs of sub_1800D13F4 @ 0x1800D13F4
 * Callers:
 *     sub_180041130 @ 0x180041130 (sub_180041130.c)
 *     sub_180047EF0 @ 0x180047EF0 (sub_180047EF0.c)
 *     sub_180048BD0 @ 0x180048BD0 (sub_180048BD0.c)
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 *     sub_1800785B0 @ 0x1800785B0 (sub_1800785B0.c)
 *     sub_18008CB74 @ 0x18008CB74 (sub_18008CB74.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800D12C0 @ 0x1800D12C0 (sub_1800D12C0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D13F4(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B1F8(136LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_1800D12C0();
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  _InterlockedExchange((volatile __int32 *)(v3 + 32), 2);
  return a1;
}
