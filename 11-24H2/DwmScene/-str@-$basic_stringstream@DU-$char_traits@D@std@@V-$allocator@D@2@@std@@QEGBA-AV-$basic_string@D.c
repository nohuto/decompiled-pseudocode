/*
 * XREFs of ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FCD8
 * Callers:
 *     sub_1800C22D0 @ 0x1800C22D0 (sub_1800C22D0.c)
 *     sub_1800C239C @ 0x1800C239C (sub_1800C239C.c)
 * Callees:
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_18001F5DC @ 0x18001F5DC (sub_18001F5DC.c)
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
  sub_18001F5DC(a1 + 24, (__int64)v4);
  if ( v4[0] )
    sub_180013918(a2, v4[0], (size_t)v4[1]);
  return a2;
}
