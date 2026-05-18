/*
 * XREFs of sub_18004D354 @ 0x18004D354
 * Callers:
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001CD84 @ 0x18001CD84 (sub_18001CD84.c)
 *     sub_18001CDAC @ 0x18001CDAC (sub_18001CDAC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004D354(_QWORD *a1, __int64 **a2)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  std::string::string(a1, "{");
  v4 = 0;
  v5 = **a2;
  v8 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = v5 + 32;
    if ( v4 )
      sub_18001CDAC((__int64)a1, ",", 1uLL);
    else
      v4 = 1;
    sub_18001CD84((__int64)a1, v6);
    sub_18001C420(&v8);
    v5 = v8;
  }
  sub_18001CDAC((__int64)a1, "}", 1uLL);
  return a1;
}
