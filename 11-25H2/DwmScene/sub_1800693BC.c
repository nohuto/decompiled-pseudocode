/*
 * XREFs of sub_1800693BC @ 0x1800693BC
 * Callers:
 *     sub_1800697B4 @ 0x1800697B4 (sub_1800697B4.c)
 * Callees:
 *     sub_18006939C @ 0x18006939C (sub_18006939C.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_1800696D0 @ 0x1800696D0 (sub_1800696D0.c)
 *     sub_18006981C @ 0x18006981C (sub_18006981C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800693BC(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v2 = 8LL;
  v6 = 8LL;
  v4 = sub_18006939C((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4 + 640;
  v6 = (unsigned __int64)a1;
  do
  {
    sub_1800696D0(v3, v4);
    v4 += 80LL;
    --v2;
  }
  while ( v2 );
  sub_18006945C(v4, v4);
  a1[1] = v4;
  v6 = 0LL;
  return sub_18006981C(&v6);
}
