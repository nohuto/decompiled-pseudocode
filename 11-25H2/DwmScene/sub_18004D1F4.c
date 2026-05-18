/*
 * XREFs of sub_18004D1F4 @ 0x18004D1F4
 * Callers:
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004D1F4(_QWORD *a1, __int64 **a2)
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
      sub_18001CC4C((__int64)a1, ",", 1uLL);
    else
      v4 = 1;
    sub_18001CC24((__int64)a1, v6);
    sub_18001C2C0(&v8);
    v5 = v8;
  }
  sub_18001CC4C((__int64)a1, "}", 1uLL);
  return a1;
}
