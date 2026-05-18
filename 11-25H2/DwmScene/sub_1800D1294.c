/*
 * XREFs of sub_1800D1294 @ 0x1800D1294
 * Callers:
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 *     sub_180047D90 @ 0x180047D90 (sub_180047D90.c)
 *     sub_180048A70 @ 0x180048A70 (sub_180048A70.c)
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 *     sub_180078450 @ 0x180078450 (sub_180078450.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800D1160 @ 0x1800D1160 (sub_1800D1160.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D1294(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001B098(136LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_1800D1160();
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
