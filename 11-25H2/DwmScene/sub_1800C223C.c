/*
 * XREFs of sub_1800C223C @ 0x1800C223C
 * Callers:
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 * Callees:
 *     sub_18001EFE0 @ 0x18001EFE0 (sub_18001EFE0.c)
 *     sub_18001F204 @ 0x18001F204 (sub_18001F204.c)
 *     sub_18001F35C @ 0x18001F35C (sub_18001F35C.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FB78 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 *     sub_1800BFCEC @ 0x1800BFCEC (sub_1800BFCEC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C223C(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  sub_18001F204((__int64)v11);
  if ( *a2 != a2[1] )
  {
    sub_18001EFE0((__int64)v12, (__int64)"{");
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = sub_18001EFE0((__int64)v12, (__int64)"[");
        v7 = std::ostream::operator<<(v6, v4);
        v8 = sub_18001EFE0(v7, (__int64)"] = ");
        v9 = sub_1800BFCEC(v8, v5 + *a2);
        sub_18001EFE0(v9, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_18001EFE0((__int64)v12, (__int64)"}");
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v11, a1);
  sub_18001F35C((__int64)v11);
  return a1;
}
