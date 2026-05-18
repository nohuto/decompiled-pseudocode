/*
 * XREFs of sub_18003E858 @ 0x18003E858
 * Callers:
 *     sub_180011FE8 @ 0x180011FE8 (sub_180011FE8.c)
 *     sub_18005D7BC @ 0x18005D7BC (sub_18005D7BC.c)
 *     sub_180073C68 @ 0x180073C68 (sub_180073C68.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003CBBC @ 0x18003CBBC (sub_18003CBBC.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E858(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180028890(a1 + 16);
  result = **(_QWORD **)(a1 + 88);
  v8 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v5 = (__int64 *)sub_18003ECF8(*(_QWORD *)(result + 64), v6);
    sub_18003CBBC(a2, v5);
    if ( v7 )
      sub_18001060C(v7);
    sub_18001C420(&v8);
    result = v8;
  }
  return result;
}
