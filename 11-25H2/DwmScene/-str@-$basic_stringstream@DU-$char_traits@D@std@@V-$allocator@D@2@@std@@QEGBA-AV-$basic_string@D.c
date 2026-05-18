/*
 * XREFs of ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FB78
 * Callers:
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     sub_1800C223C @ 0x1800C223C (sub_1800C223C.c)
 * Callees:
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_18001F47C @ 0x18001F47C (sub_18001F47C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(
        __int64 a1,
        __int64 a2)
{
  const void *v4[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_18001F47C(a1 + 24, (__int64)v4);
  if ( v4[0] )
    sub_180013818(a2, v4[0], (size_t)v4[1]);
  return a2;
}
